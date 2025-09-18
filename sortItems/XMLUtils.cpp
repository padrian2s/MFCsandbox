// ***************************************************************************
// *                                                                         *
// *        (C) 2005 Electronic Payment Systems ALL RIGHTS RESERVED          *
// *                                                                         *
// * Copyright in the whole and every part of this software program belongs  *
// * to EPS ("the owner") and may not be used, sold, licensed, transferred,  *
// * copied, adapted or reproduced in whole or in part in any manner or form *
// * in or on any media without prior written consent of the Owner.          *
// ***************************************************************************
// * Source     : XMLUtils.cpp                                               *
// * Description:                                                            *
// ***************************************************************************
// *                        Modification History                             *
// *-------------------------------------------------------------------------*
// *    Date         Track #  Author  Description                            *
// *    ----         -------  ------  -----------                            *
// *   24-Oct-2005      -     IC      Initial Version                        *
// ***************************************************************************

#include "XMLUtils.h"
#include <xercesc/framework/Wrapper4InputSource.hpp>
#include <xercesc/framework/LocalFileInputSource.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>
#include <xercesc/sax/SAXException.hpp>
#include <xercesc/util/Base64.hpp>
#include <sstream>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/timeb.h>

// *** XMLException
XMLException::XMLException(const xercesc::DOMException & exception): 
    std::exception("XML_002")
{
    std::stringstream code;
    code << (unsigned short)exception.code;
    m_errorParams.push_back(code.str()); // Code
    m_errorParams.push_back(ASCIIString(exception.msg)); // Message
}

std::string XMLException::getErrorMessage() const
{
    std::list<std::string>::const_iterator i = m_errorParams.begin();
    std::string errorMessage;
    if (!strcmp(what(), "XML_001"))
    {
        errorMessage = "Cannot find a registered DOM implementation having the feature(s): '";
        errorMessage += (* i);
        errorMessage += "'";
    }
    else if (!strcmp(what(), "XML_002"))
    {
        errorMessage = "Xerces error. Code: ";
        errorMessage += (* i);
        i ++;
        errorMessage += ", original message: '";
        errorMessage += (* i);
        errorMessage += "'";
    }
    else if (!strcmp(what(), "XML_003"))
    {
        errorMessage = "XML validation error. Original messsage: '";
        errorMessage += (* i);
        ++ i;
        errorMessage += "', line: ";
        errorMessage += (* i);
        ++ i;
        errorMessage += ", column: ";
        errorMessage += (* i);
    }
    else if (!strcmp(what(), "XML_004"))
    {
        errorMessage = "XML parsing error. Code: ";
        errorMessage += (* i);
        ++ i; 
        errorMessage += ", original messsage: '";
        errorMessage += (* i);
        ++ i; 
        errorMessage += "', line: ";
        errorMessage += (* i);
        ++ i; 
        errorMessage += ", column: ";
        errorMessage += (* i);
    }
    else if (!strcmp(what(), "XML_005"))
    {
        errorMessage = "Error response received from server. Code: ";
        errorMessage += (* i);
        ++ i;
        errorMessage += ", message: '";
        errorMessage += (* i);
        errorMessage += "'";
    }
    else if (!strcmp(what(), "XML_006"))
    {
        errorMessage = "Unexpected root element '";
        errorMessage += (* i);
        ++ i;
        errorMessage += "' received, should have been either '";
        errorMessage += (* i);
        errorMessage += "' or 'error'";
    }
    else if (!strcmp(what(), "XML_007"))
    {
        errorMessage = "Cannot find element '";
        errorMessage += (* i);
        errorMessage += "'";
    }
    return errorMessage;
}

// *** EntityResolver

xercesc::DOMInputSource * EntityResolver::resolveEntity(const XMLCh * const publicId,  
                                                        const XMLCh * const systemId,  
                                                        const XMLCh * const baseURI)
{
    xercesc::LocalFileInputSource * pLocalFileInputSource = new xercesc::LocalFileInputSource(UnicodeString(m_absolutePathToSchemas), systemId);
    return new xercesc::Wrapper4InputSource(pLocalFileInputSource);
}

// *** ErrorHandler

log4cpp::Category & ErrorHandler::m_log = log4cpp::Category::getInstance("cdms.xmlErrorHandler");

void ErrorHandler::reset()
{
    m_errorParams.clear();
}

bool ErrorHandler::handleError(const xercesc::DOMError & error)
{
    std::string message = ASCIIString(error.getMessage());
    char line[10 + 1];
    sprintf(line, "%u", (unsigned)error.getLocation()->getLineNumber());
    char column[10 + 1];
    sprintf(column, "%u", (unsigned)error.getLocation()->getColumnNumber());

    m_log.error("[%s:%d] Validation failed, DOMError encountered - original message: %s, line: %s, column: %s ", 
                __FILE__, __LINE__, message.c_str(), line, column);

    m_errorParams.push_back(message); // Message
    m_errorParams.push_back(line); // Line
    m_errorParams.push_back(column); // Column

    return false;
}

// *** XMLEnv

void XMLEnv::init()
{
    xercesc::XMLPlatformUtils::Initialize();
}

void XMLEnv::cleanup()
{
    xercesc::XMLPlatformUtils::Terminate();
}

XMLEnv::XMLEnv() throw (XMLException)
{
    m_pDOMImplementation = xercesc::DOMImplementationRegistry::getDOMImplementation(UnicodeString("LS"));
    if (!m_pDOMImplementation)
    {
        std::list<std::string> errorParams;
        errorParams.push_back("LS"); // DOM implementation features
        throw XMLException("XML_001", errorParams);
    }
}

XMLEnv::~XMLEnv()
{
    // NOP
}

// *** XMLParser

log4cpp::Category & XMLParser::m_log = log4cpp::Category::getInstance("cdms.xmlParser");

XMLParser::XMLParser(const char * absolutePathToSchemas) throw (XMLException)
{
    try
    {
        m_pDOMBuilder = m_pDOMImplementation->createDOMBuilder(xercesc::DOMImplementationLS::MODE_SYNCHRONOUS, NULL);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgDOMNamespaces, true);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgDOMValidation, true);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgXercesSchema, true);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgXercesSchemaFullChecking, true);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgXercesValidationErrorAsFatal, true);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgDOMWhitespaceInElementContent, false);
        m_pDOMBuilder->setFeature(xercesc::XMLUni::fgDOMDatatypeNormalization, true);
        m_pErrorHandler = new ErrorHandler();
        m_pDOMBuilder->setErrorHandler(m_pErrorHandler);
        m_pDOMBuilder->setEntityResolver(new EntityResolver(absolutePathToSchemas));
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
                    __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

XMLParser::~XMLParser()
{
    m_pDOMBuilder->release();
}

const xercesc::DOMDocument * XMLParser::parseAndValidate(const char * xmlStream) throw (XMLException)
{
    try
    {
        m_pDOMBuilder->resetDocumentPool();
        m_pErrorHandler->reset();

        xercesc::MemBufInputSource * pMemBufInputSource = new xercesc::MemBufInputSource((const XMLByte *)xmlStream, 
                                                                                         (unsigned int)strlen(xmlStream),
                                                                                         UnicodeString("xmlStream"));
        xercesc::Wrapper4InputSource wrapper4InputSource(pMemBufInputSource);
        xercesc::DOMDocument * pInbound = m_pDOMBuilder->parse(wrapper4InputSource);

        if (m_pErrorHandler->mustThrow())
        {
            throw XMLException("XML_003", m_pErrorHandler->getErrorParams());
        }

        return pInbound;
    }

    catch (const xercesc::SAXException & exception)
    {
        const char * message = ASCIIString(exception.getMessage());
        
        m_log.error("[%s:%d] Parsing failed, SAXException caught - original message: %s", 
                    __FILE__, __LINE__, message);
        
        std::list<std::string> errorParams;
        errorParams.push_back("N/A"); // Code
        errorParams.push_back(message); // Message
        errorParams.push_back("N/A"); // Line
        throw XMLException("XML_004", errorParams);
    }

    catch (const xercesc::XMLException & exception)
    {
        const char * message = ASCIIString(exception.getMessage());
        char code[5 + 1];
        sprintf(code, "%hu", (unsigned short)exception.getCode()); 
        char line[10 + 1];
        sprintf(line, "%u", exception.getSrcLine());

        m_log.error("[%s:%d] Parsing failed, XMLException caught - code: %s, original message: %s, line: %s", 
                    __FILE__, __LINE__, code, message, line);

        std::list<std::string> errorParams;
        errorParams.push_back(code); // Code
        errorParams.push_back(message); // Message
        errorParams.push_back(line); // Line
        throw XMLException("XML_004", errorParams);
    }

    catch (const xercesc::DOMException & exception)
    {
        const char * message = ASCIIString(exception.msg);
        char code[5 + 1];
        sprintf(code, "%hu", (unsigned short)exception.code); 

        m_log.error("[%s:%d] Parsing failed, DOMException caught - code: %s, original message: %s", 
                    __FILE__, __LINE__, code, message);

        std::list<std::string> errorParams;
        errorParams.push_back(code); // Code
        errorParams.push_back(message); // Message
        errorParams.push_back("N/A"); // Line
        throw XMLException("XML_004", errorParams);
    }
}

const xercesc::DOMElement * XMLParser::checkRootElement(const xercesc::DOMDocument * pDOMDocument, 
                                                       const std::string & expectedRootElementName) 
    throw (XMLException)
{
    const xercesc::DOMElement * pRootElement = pDOMDocument->getDocumentElement();
    std::string rootElementName = ASCIIString(pRootElement->getTagName());
    if (rootElementName == expectedRootElementName) // Expected root element name
    {
        return pRootElement;
    }
    else if (rootElementName == "error") // Error XML
    {
        xercesc::DOMNodeList * pExceptionList = pRootElement->getElementsByTagName(UnicodeString("exception"));
        for (unsigned i = 0; i < pExceptionList->getLength(); i ++)
        // We expect at least one 'exception' element, according to the xsd
        // In fact, expecting exactly one iteration
        {
            std::list<std::string> errorParams;
            xercesc::DOMNodeList * pChildNodesList = pExceptionList->item(i)->getChildNodes();
            for (unsigned j = 0; j < pChildNodesList->getLength(); j ++)
            // We expect exactly 2 elements, 'code' and 'message', in exactly this order, according to the xsd
            {
                std::string nodeValue = ASCIIString(pChildNodesList->item(j)->getFirstChild()->getNodeValue());
                errorParams.push_back(nodeValue);
            }
            throw XMLException("XML_005", errorParams);
        }
        return NULL; // This will never get executed, just make the compiler shut up about not all 
                     // control paths returning a value
    }
    else // Something else, but still valid XML - should NEVER happen!!!
    {
        std::list<std::string> errorParams;
        errorParams.push_back(rootElementName); // What we got
        errorParams.push_back(expectedRootElementName); // What we expected
        throw XMLException("XML_006", errorParams);
    }
}

// *** XMLWriter

log4cpp::Category & XMLWriter::m_log = log4cpp::Category::getInstance("cdms.xmlWriter");

XMLWriter::XMLWriter() throw (XMLException)
{
    try
    {
        m_pDOMWriter = m_pDOMImplementation->createDOMWriter();
        m_pDOMWriter->setFeature(xercesc::XMLUni::fgDOMWRTDiscardDefaultContent, true);
        m_pDOMWriter->setFeature(xercesc::XMLUni::fgDOMWRTFormatPrettyPrint, true);
        m_pDOMWriter->setEncoding(UnicodeString("UTF-8"));
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
            __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

XMLWriter::~XMLWriter()
{
    m_pDOMWriter->release();
}

xercesc::DOMDocument * XMLWriter::createDOMDocument(const std::string & rootElementName, 
                                                   const std::string & xsdFileName) throw (XMLException)
{
    try
    {
        xercesc::DOMDocument * pDOMDocument = m_pDOMImplementation->createDocument(NULL, UnicodeString(rootElementName), NULL);
        xercesc::DOMElement * pRootElement = pDOMDocument->getDocumentElement();
        pRootElement->setAttribute(UnicodeString("xmlns:xsi"), UnicodeString("http://www.w3.org/2001/XMLSchema-instance")); 
        pRootElement->setAttribute(UnicodeString("xsi:noNamespaceSchemaLocation"), UnicodeString(xsdFileName));
        return pDOMDocument;
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
                    __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

std::string XMLWriter::getXMLStream(const xercesc::DOMDocument * pDOMDocument)
{
    std::string xmlStream = ASCIIString(m_pDOMWriter->writeToString(* pDOMDocument));
    xmlStream.replace(xmlStream.find("UTF-16"), strlen("UTF-16"), "UTF-8");
    return xmlStream;
}

// *** XMLUtils

log4cpp::Category & XMLUtils::m_log = log4cpp::Category::getInstance("cdms.xmlUtils");

const xercesc::DOMElement * XMLUtils::getElementByName(const xercesc::DOMElement * pParent, 
                                                       const char * elementName) throw (XMLException)
{
    xercesc::DOMNodeList * pElements = pParent->getElementsByTagName(UnicodeString(elementName));
    if (!pElements->getLength())
    {
        std::list<std::string> errorParams;
        errorParams.push_back(elementName); // Code
        throw XMLException("XML_007", errorParams);
    }
    return (xercesc::DOMElement *)(pElements->item(0));
}

std::string XMLUtils::getCharacterData(const xercesc::DOMElement * pElement) throw (XMLException)
{
    try
    {
        xercesc::DOMNode * pChildNode = pElement->getFirstChild();
        return pChildNode ? ASCIIString(pChildNode->getNodeValue()) : std::string();
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
                    __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

xercesc::DOMElement * XMLUtils::createElement(xercesc::DOMDocument * pDOMDocument, xercesc::DOMElement * pParent, 
                                              const char * elementName) throw (XMLException)
{
    try
    {
        xercesc::DOMElement * pElement = pDOMDocument->createElement(UnicodeString(elementName));
        pParent->appendChild(pElement);
        return pElement;
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
                    __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

xercesc::DOMElement * XMLUtils::createElement(xercesc::DOMDocument * pDOMDocument, xercesc::DOMElement * pParent, 
                                              const char * elementName, const std::string & characterData) 
    throw (XMLException)
{
    try
    {
        xercesc::DOMElement * pElement = pDOMDocument->createElement(UnicodeString(elementName));
        pParent->appendChild(pElement);
        xercesc::DOMText * pData = pDOMDocument->createTextNode(UnicodeString(characterData));
        pElement->appendChild(pData);
        return pElement;
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
            __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        throw XMLException(exception);
    }
}

std::string XMLUtils::createErrorResponse(const std::string & errorCode, const std::string & errorMessage)
{
    try
    {
        XMLWriter writer;
        xercesc::DOMDocument * pDOMDocument = writer.createDOMDocument("error", "error.xsd");
        xercesc::DOMElement * pRootElement = pDOMDocument->getDocumentElement();
        xercesc::DOMElement * pException = XMLUtils::createElement(pDOMDocument, pRootElement, "exception");
        XMLUtils::createElement(pDOMDocument, pException, "code", errorCode);
        XMLUtils::createElement(pDOMDocument, pException, "message", errorMessage);
        std::string xmlStream = writer.getXMLStream(pDOMDocument);
        pDOMDocument->release(); // Created by createDOMDocument(), must release
        return xmlStream;
    }
    catch (const xercesc::DOMException & exception)
    {
        m_log.error("[%s:%d] Xerces error, DOMException caught - code: %hu, original message: %s", 
            __FILE__, __LINE__, (unsigned short)exception.code, (const char *)ASCIIString(exception.msg));
        return XMLUtils::internalServerError();
    }
}

std::string XMLUtils::internalServerError()
{
    return "\
<?xml version='1.0' ?>\
<error xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance' xsi:noNamespaceSchemaLocation='error.xsd'>\
    <exception>\
        <code>SERVER_001</code>\
        <message>Internal server error.</message>\
    </exception>\
</error>";
}

#ifdef __AFXWIN_H__
CString XMLUtils::getAsString(const xercesc::DOMNode* node) 
throw (xercesc::DOMException)
{
    if(node->getFirstChild()!= NULL) {
        return CString((const char*)ASCIIString(node->getFirstChild()->getNodeValue()));
    }
    return "";
}
#endif

unsigned int XMLUtils::getAsInt(const xercesc::DOMNode* node) 
throw (xercesc::DOMException)
{
    if(node->getFirstChild()!= NULL) {
        return atoi((const char*)ASCIIString(node->getFirstChild()->getNodeValue()));
    }
    return 0;
}


unsigned long XMLUtils::getAsLong(const xercesc::DOMNode* node) 
throw (xercesc::DOMException)
{
    if(node->getFirstChild()!= NULL) {
        return atol((const char*)ASCIIString(node->getFirstChild()->getNodeValue()));
    }
    return 0;
}

double XMLUtils::getAsDouble(const xercesc::DOMNode* node) 
throw (xercesc::DOMException)
{
    if(node->getFirstChild()!= NULL) {
        return atof((const char*)ASCIIString(node->getFirstChild()->getNodeValue()));
    }
    return 0;
}

const int CryptUtil::BLOCK_SIZE = 3;
const char* CryptUtil::DEFAULT_PASSPHRSE = "tmysvr";

std::string CryptUtil::encrypt(const char* data, const char* passPhrase) throw (std::exception)
{
    if(strlen(passPhrase) == 0)
        throw std::invalid_argument("The pass phrase can not be empty");
    char* ddata = new char[strlen(data)+1];
    memset(ddata,0,strlen(data)+1);

    for(unsigned int i = 0, j = 0; i < strlen(data); ) {
        for(int k = 0; k < CryptUtil::BLOCK_SIZE; k++) {
            if(data[i] != '\0') {
                ddata[i] = (char)((unsigned short)'A'+ (unsigned short)(data[i]^passPhrase[j]));                                
            }else{
                i++;
                break;
            }
            i++; 
        }
        j++;
        if(passPhrase[j] == '\0') {
            j = 0; 
        }
    }
    unsigned int resultLength = 0;
    XMLByte* encData = xercesc::Base64::encode((const XMLByte *)ddata, (unsigned int)strlen(data), &resultLength);
    delete []ddata;
    ddata = new char[resultLength];
    memcpy(ddata, (char*)encData, resultLength);
    xercesc::XMLString::release(&encData);
    ddata[resultLength-1] = '\0';

    std::string resultData(ddata);
    delete []ddata;

    return resultData;
}
std::string CryptUtil::decrypt(const char* data, const char* passPhrase) throw (std::exception)
{    
    if(strlen(passPhrase) == 0)
        throw std::invalid_argument("The pass phrase can not be empty");
    
    unsigned int resultLength = 0;
    char* dcData = (char*)xercesc::Base64::decode((const XMLByte*)data, &resultLength);
    char* decData = new char[resultLength+1];
    memcpy(decData, dcData, resultLength);
    //release 
    xercesc::XMLString::release(&dcData);

    decData[resultLength] = '\0';
    for(unsigned int i = 0, j = 0; i < strlen(decData); ) {
        for(int k = 0; k < CryptUtil::BLOCK_SIZE; k++) {
            if(decData[i] != '\0') {
                decData[i] = (char)(((unsigned short)decData[i]  - (unsigned short)'A')^ passPhrase[j]);                
            }else {
                i++;
                break;
            }
            i++; 
        }
        j++;
        if(passPhrase[j] == '\0') {
            j = 0; 
        }
    }

    std::string resultData(decData);
    delete []decData;
    return resultData;
}

Date::Date(const int& day, const int& month, const int& year) {
    m_day = day;
    m_month = month;
    if (year<100) {
        if (year < 70){ 
            //If year < 70 than is after 2000
            m_year = 2000 + year;
        } 
        else {
            //between 70 and 99 is 1900
            m_year = 1900+year;
        };
    }
    else { 
        m_year = year;
    }
}

bool Date::isValid() const {
    // This method will check the given date is valid or not.
    // If the date is not valid then it will return the value false.
    if (m_year <0) return false; 
        if (m_month >12 || m_month <1) return false;
    if (m_day >31 || m_day <1) return false;
    if ((m_day ==31 &&
        ( m_month ==2 || m_month ==4 || m_month ==6 || m_month ==9 || m_month ==11) ) )
        return false;
    if ( m_day ==30 && m_month ==2) return false;
    if ( m_year <2000){
        if ((m_day ==29 && m_month ==2) && !((m_year -1900)%4==0)) return false;
    };
    if ( m_year >2000){ 
        if ((m_day ==29 && m_month ==2) && !((m_year -2000)%4==0)) return false;
    };
    return true;
}

Date Date::nextDate(const Date& d){
    Date ndat;
    if (!d.isValid()) { 
        return ndat; 
    }
    ndat=Date((d.getDay()+1),d.getMonth(),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat=Date(1,(d.getMonth()+1),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(1,1,(d.getYear()+1)); 
    return ndat;
}
Date Date::previousDate(const Date& d){
    Date ndat;
    if (!d.isValid()) { 
        return ndat; 
    } 
    ndat = Date((d.getDay()-1),d.getMonth(),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(31,(d.getMonth()-1),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(30,(d.getMonth()-1),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(29,(d.getMonth()-1),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(28,(d.getMonth()-1),d.getYear()); 
    if (ndat.isValid()) {
        return ndat;
    }
    ndat = Date(31,12,(d.getYear()-1)); 
    return ndat;
};

Date operator + (const Date& d, const int& days){
    if (!d.isValid()){
        return Date();
    }
    if (days<0) {
        return (d-(-days));
    }
    Date d1=d;
    for (int day=1;day<=days;++day){ 
        d1=Date::nextDate(d1); 
    }
    return d1;
}

Date operator - (const Date& d, const int& days) {
    if (!d.isValid()) { 
        return Date();
    }
    if (days<0) { 
        return (d+(-days));
    }
    Date d1=d;
    for (int day=0; day<days; ++day){ 
        d1=Date::previousDate(d1); 
    }
    return d1;
}

std::string Date::computeCentralSiteProcessingDate(const std::string& arn, const std::string& alternateDate) {
    std::string date = arn.substr(7,4);
    if(atoi(date.c_str()) == 0) {
        return alternateDate;
    } else {
        //The year last digit
        char yearLastDigit = arn[7];
        date = arn.substr(8, 3);
        //the days number in the year
        int daysOfTheYear = atoi(date.c_str());
        time_t ltime;
        time(&ltime);
        struct tm *today;
        today = localtime(&ltime);
        int year = 1900 + today->tm_year;
        char cYearlastDigit = (char)((year % 10) + (int)'0');
        while (cYearlastDigit != yearLastDigit) {
            year --;
            cYearlastDigit = (char)((year % 10) + (int)'0');
        }
        tm time;
        memset(& time, 0, sizeof(tm));
        /* Initialize the time with last second of the precedent year */
        time.tm_year = year-1900;
        time.tm_mon = 0;
        time.tm_mday = 1;
        time.tm_hour = 0;
        time.tm_min = 1;
        time.tm_sec = 0;
        time_t unixTimeStamp = mktime(& time) + (daysOfTheYear-1) * 24 * 60 * 60;
        time = *localtime(& unixTimeStamp);
     
        char formatedString[] = "DD.MM.YYYY";
        strftime(formatedString, sizeof(formatedString), "%d.%m.%Y", & time);
        std::string result(formatedString);
        return result;
    }
    return alternateDate;
}
