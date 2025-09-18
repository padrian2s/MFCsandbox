// ***************************************************************************
// *                                                                         *
// *        (C) 2005 Electronic Payment Systems ALL RIGHTS RESERVED          *
// *                                                                         *
// * Copyright in the whole and every part of this software program belongs  *
// * to EPS ("the owner") and may not be used, sold, licensed, transferred,  *
// * copied, adapted or reproduced in whole or in part in any manner or form *
// * in or on any media without prior written consent of the Owner.          *
// ***************************************************************************
// * Source     : XMLUtils.h                                                 *
// * Description:                                                            *
// ***************************************************************************
// *                        Modification History                             *
// *-------------------------------------------------------------------------*
// *    Date         Track #  Author  Description                            *
// *    ----         -------  ------  -----------                            *
// *   24-Oct-2005      -     IC      Initial Version                        *
// ***************************************************************************

#ifndef __XMLUTILS__
#define __XMLUTILS__

#ifdef WIN32
#pragma warning(disable: 4290) // C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#endif

#include <xercesc/dom/DOM.hpp>
#include <log4cpp/Category.hh>
#include <string>
#include <list>

/**
 * XML exception.
 */
class XMLException: public std::exception
{
public:
    /**
     * Constructor with arguments. Initializes the new instance with the code of the error which occurred.
     * @param errorCode The code of the error which occurred.
     */
    XMLException(const char * errorCode): std::exception(errorCode) { }
    /**
     * Constructor with arguments. Initializes the new instance with the code of the error which occurred and the error parameters.
     * @param errorCode The code of the error which occurred.
     * @param errorParams A list<string> of error parameters which will be used in the internationalized error message.
     */
    XMLException(const char * errorCode, const std::list<std::string> & errorParams): 
        std::exception(errorCode), m_errorParams(errorParams) { }
    /**
     * Constructor with arguments. Initializes the new instance with data obtained from the specified DOMException instance.
     * @param exception The DOMException to translate.
     */
    XMLException(const xercesc::DOMException & exception);
    /**
     * Returns the error code.
     * @return The error code.
     */
    const char* getErrorCode() const { return what(); }
    /**
     * Returns the list<string> of error parameters.
     * @return The list<string> of error parameters.
     */
    const std::list<std::string> & getErrorParams() const { return m_errorParams; }
    /**
     * Returns the fully formated error message in English.
     * @return The fully formated error message in English.
     */
    std::string getErrorMessage() const;

private:
    /**
     * Any error-related params which will be used in the internationalized error description message.
     */
    std::list<std::string> m_errorParams;
};

/**
 * ASCII to Unicode conversion helper class. Converts a C or C++ string (char * or std::string) to a Xerces Unicode string (XMLCh *).
 */
class UnicodeString
{
public:
    UnicodeString(const std::string & asciiString) { m_unicodeString = xercesc::XMLString::transcode(asciiString.c_str()); }
    UnicodeString(const char * asciiString) { m_unicodeString = xercesc::XMLString::transcode(asciiString); }
    ~UnicodeString() { xercesc::XMLString::release(& m_unicodeString); }
    operator const XMLCh *() const { return m_unicodeString; }

private:
    UnicodeString(const UnicodeString & unicodeString) { }
    void operator =(const UnicodeString & unicodeString) { }

private:
    XMLCh * m_unicodeString;
};

/**
 * Unicode to ASCII conversion helper class. Converts a Xerces Unicode string (XMLCh *) to a C or C++ string (char * or std::string).
 */
class ASCIIString
{
public:
    ASCIIString(const XMLCh * unicodeString) { m_asciiString = xercesc::XMLString::transcode(unicodeString); }
    ~ASCIIString() { xercesc::XMLString::release(& m_asciiString); }
    operator const char *() const { return m_asciiString; }
    operator std::string() const { return std::string(m_asciiString); }

private:
    ASCIIString(const ASCIIString & asciiString) { }
    void operator =(const ASCIIString & asciiString) { }

private:
    char * m_asciiString;
};

/**
 * XML error handler. Replaces the default Xerces DOMErrorHandler and is used by the parser when processing XML data.
 */
class ErrorHandler: public xercesc::DOMErrorHandler
{
public:
    /**
     * Default constructor (empty).
     */
    ErrorHandler() { }
    /**
     * This method is called when an error occurs. Implements the same pure virtual method declared in superclass.
     * @param error The error object that describes the error.
     * @return True to instruct the DOM implementation to continue as if the error didn't happen when possible, 
     *         false to instruct the DOM implementation to stop the current processing when possible.
     */
    bool handleError(const xercesc::DOMError & error);
    /**
     * Resets the state of this object so that it can be reused when reusing the parser instance.
     */
    void reset();
    /**
     * Returns true if an error occurred, false otherwise.
     * @return True if an error occurred, false otherwise.
     */
    bool mustThrow() { return !m_errorParams.empty(); }
    /**
     * Returns the list of error parameters.
     * @return The list of error parameters.
     */
    const std::list<std::string> & getErrorParams() { return m_errorParams; }

private:
    /**
     * Any error-related params which will be used in the internationalized error description message.
     */
    std::list<std::string> m_errorParams;
    /**
     * The static logger instance.
     */
    static log4cpp::Category & m_log;
};

/**
 * XML entity resolver. Replaces the default Xerces DOMEntityResolver and is used by the parser to look for .xsd files in a location different 
 * from the one specified in the XML stream.
 */
class EntityResolver: public xercesc::DOMEntityResolver
{
public:
    /**
     * Constructor with parameters. Initializes the new instance with the absolute path to the location of the .xsd files.
     * @param absolutePathToSchemas The absolute path to the location of the .xsd files.
     */
    EntityResolver(const char * absolutePathToSchemas): m_absolutePathToSchemas(absolutePathToSchemas) { }
    /**
     * Allows the application to resolve external entities. Overloads the same method from superclass.
     * @param publicId The public identifier of the external entity being referenced, or null if none was supplied.
     * @param systemId The system identifier of the external entity being referenced.
     * @param baseURI The absolute base URI of the resource being parsed, or null if there is no base URI.
     * @return A DOMInputSource object describing the new input source, or null to request that the parser open a regular URI connection to the 
     *         system identifier.
     */
    xercesc::DOMInputSource * resolveEntity(const XMLCh * const publicId,  
                                            const XMLCh * const systemId,  
                                            const XMLCh * const baseURI);

private:
    /**
     * The absolute path to the location of the .xsd files.
     */
    std::string m_absolutePathToSchemas;
};

/**
 * Utility methods, some wrapping Xerces functionality for easier use.
 */
class XMLUtils
{
public:
    /**
     * Returns a pointer to the DOMElement instance corresponding to the element identified by the specified name.
     * @param pParent A pointer to the DOMElement instance corresponding to the root of the subtree where the desired element resides.
     * @param elementName The name of the desired element.
     * @return A pointer to the DOMElement instance corresponding to the element identified by the specified name.
     * @throw XMLException when the element cannot be found.
     */
    static const xercesc::DOMElement * getElementByName(const xercesc::DOMElement * pParent, 
                                                        const char * elementName) throw (XMLException);
    /**
     * Returns the character data contained in the specified element.
     * @param pElement The element containing the data.
     * @return The character data contained in the specified element. If the element contains no character data, the empty string is returned.
     * @throw XMLException in case a Xerces error occurs.
     */
    static std::string getCharacterData(const xercesc::DOMElement * pElement) throw (XMLException);
    /**
     * Creates a new element with the specified name and inserts it in the specified DOMDocument under the specified parent.
     * @param pDOMDocument A pointer to the DOMDocument instance where the new DOMElement instance should be created.
     * @param pParent A pointer to the DOMElement instance which is the parent of the new DOMElement instance.
     * @param elementName The name of the new DOMElement instance.
     * @return A pointer to the new DOMElement instance.
     * @throw XMLException in case a Xerces error occurs.
     */
    static xercesc::DOMElement * createElement(xercesc::DOMDocument * pDOMDocument,
                                               xercesc::DOMElement * pParent, 
                                               const char * elementName) throw (XMLException);
    /**
     * Creates a new element with the specified name and containing the specified character data and inserts it in the specified DOMDocument 
     * under the specified parent.
     * @param pDOMDocument A pointer to the DOMDocument instance where the new DOMElement instance should be created.
     * @param pParent A pointer to the DOMElement instance which is the parent of the new DOMElement instance.
     * @param elementName The name of the new DOMElement instance.
     * @param characterData The character data contained in the new element.
     * @return A pointer to the new DOMElement instance.
     * @throw XMLException in case a Xerces error occurs.
     */
    static xercesc::DOMElement * createElement(xercesc::DOMDocument * pDOMDocument,
                                               xercesc::DOMElement * pParent, 
                                               const char * elementName, 
                                               const std::string & characterData) throw (XMLException);
    /**
     * Creates a fully formatted error XML stream containing the specified error code and error message.
     * @param errorCode The error code.
     * @param errorMessage The error message.
     * @return A string containing a fully formatted error XML stream containing the specified error code and error message.
     */
    static std::string createErrorResponse(const std::string & errorCode, const std::string & errorMessage);
    /**
     * Returns a hard-coded, fully formatted error XML stream containing the error code 'SERVER_001' and the message 'internal server error'.
     * @return A hard-coded, fully formatted error XML stream containing the error code 'SERVER_001' and the message 'internal server error'.
     */
    static std::string internalServerError();
#ifdef __AFXWIN_H__
    /**
     * Windows version only. Returns the character data from an element as a string or the empty string if there is no character data.
     * @return The character data from an element as a string or the empty string if there is no character data.
     */
    static CString getAsString(const xercesc::DOMNode* node) 
        throw (xercesc::DOMException);
#endif
    /**
     * Returns the character data from an element as an unsigned int or 0 if there is no character data.
     * @return The character data from an element as an unsigned int or 0 if there is no character data.
     */
    static unsigned int getAsInt(const xercesc::DOMNode* node) 
        throw (xercesc::DOMException);
    /**
     * Returns the character data from an element as an unsigned long or 0 if there is no character data.
     * @return The character data from an element as an unsigned long or 0 if there is no character data.
     */
    static unsigned long getAsLong(const xercesc::DOMNode* node) 
        throw (xercesc::DOMException);
    /**
     * Returns the character data from an element as a double or 0 if there is no character data.
     * @return The character data from an element as a double or 0 if there is no character data.
     */
    static double getAsDouble(const xercesc::DOMNode* node) 
        throw (xercesc::DOMException);

private:
    /**
     * The static logger instance.
     */
    static log4cpp::Category & m_log;
};

/**
 * This class sets up the required environment for Xerces.
 */
class XMLEnv
{
public:
    /**
     * Sets up the Xerces environment. MUST be called exactly once per process, prior to using any of the Xerces or wrapper objects.
     */
    static void init();
    /**
     * Cleans up the Xerces environment. MUST be called exactly once per process, after all Xerces and wrapper objects are destroyed.
     */
    static void cleanup();

protected:
    /**
     * Default constructor. Obtains a DOM implementation and stores it for further use.
     */
    XMLEnv() throw (XMLException);
    /**
     * Destructor.
     */
    ~XMLEnv();

private:
    /**
     * Copy constructor (empty and inaccessible to everyone).
     * @param other The XMLEnv instance to copy.
     */
    XMLEnv(const XMLEnv & other) { } 
    /**
     * Assignment operator (empty and inaccessible to everyone).
     * @param other The XMLEnv instance to copy.
     */
    void operator =(const XMLEnv & other) { }

protected:
    /**
     * The DOMImplementation instance used by descendant classes.
     */
    xercesc::DOMImplementation * m_pDOMImplementation;
};

/**
 * This class parses and validates an XML stream
 */
class XMLParser: public XMLEnv
{
public:
    /**
     * Constructor with parameters.
     * @param absolutePathToSchemas Absolute path to the directory where the .xsd files can be found (must be ended with '\' or '/').
     */
    XMLParser(const char * absolutePathToSchemas) throw (XMLException);
    /**
     * Destructor
     */
    ~XMLParser();
    /**
     * Parses and validates the specified content as an XML document and returns a new DOMDocument instance.
     * @param xmlStream A string containing the content to be parsed.
     * @return The DOM Document object.
     * @throw XMLException if the document could not be parsed of the validation failed.
     */
    const xercesc::DOMDocument * parseAndValidate(const char * xmlStream) throw (XMLException);
    /**
     * Verifies if the XML document has the specified root element, or it is an error response.
     * If the root element does not have the expected name, and it is not the root of an error
     * message, XMLException is thrown.
     * If the root element corresponds to an error message, the message is parsed and an
     * XMLException is thrown with the appropriate error codes set.
     * @param pDOMDocument A pointer to the DOMDocument to check.
     * @param expectedRootElementName The name of the expected document's root.
     * @return A pointer to the root element if it is the one expected.
     * @throw XMLException upon XML error.
     */
    const xercesc::DOMElement * checkRootElement(const xercesc::DOMDocument * pDOMDocument, 
                                                 const std::string & expectedRootElementName) throw (XMLException);
private:
    /**
     * Copy constructor (empty and inaccessible to everyone).
     * @param other The XMLParser instance to copy.
     */
    XMLParser(const XMLParser & other) { }
    /**
     * Assignment operator (empty and inaccessible to everyone).
     * @param other The XMLParser instance to copy.
     */
    void operator =(const XMLParser & other) { }

private:
    /**
     * The static logger instance.
     */
    static log4cpp::Category & m_log;
    /**
     * The ErrorHandler instance used by DOMBuilder.
     * @see ErrorHandler
     */
    ErrorHandler * m_pErrorHandler;
    /**
     * The DOMBuilder instance used to parse and validate XML content.
     */
    xercesc::DOMBuilder * m_pDOMBuilder;
};

/**
 * This class generates an XML stream from a DOM tree.
 */
class XMLWriter: public XMLEnv
{
public:
    /**
     * Default constructor
     */
    XMLWriter() throw (XMLException);
    /**
     * Destructor
     */
    ~XMLWriter();
    /**
     * Constructs a new DOM document with the specified root element. 
     * Caller is responsible for calling release() on the new DOM document object!!!
     * @param rootElementName The name of the root element.
     * @param xsdFileName The name of the xsd file.
     * @throw XMLException if there were errors while generating the DOM.
     */
    xercesc::DOMDocument * createDOMDocument(const std::string & rootElementName, 
                                             const std::string & xsdFileName) throw (XMLException);
    /**
     * This operation serializes the DOM tree into a string with the default encoding
     * @return The string containing the XML
     */
    std::string getXMLStream(const xercesc::DOMDocument * pDOMDocument);

private:
    /**
     * Copy constructor (empty and inaccessible to everyone).
     * @param other The XMLWriter instance to copy.
     */
    XMLWriter(const XMLWriter & other) { } 
    /**
     * Assignment operator (empty and inaccessible to everyone).
     * @param other The XMLWriter instance to copy.
     */
    void operator =(const XMLWriter & other) { }

private:
    /**
     * The static logger instance.
     */
    static log4cpp::Category & m_log;
    /**
     * The DOMWriter instance used to generate XML content.
     */
    xercesc::DOMWriter * m_pDOMWriter; 
};

class CryptUtil
{
    static const int BLOCK_SIZE;
public: 
    static std::string encrypt(const char* data, const char* passPhrase = CryptUtil::DEFAULT_PASSPHRSE) throw (std::exception);
    static std::string decrypt(const char* data, const char* passPhrase = CryptUtil::DEFAULT_PASSPHRSE) throw (std::exception);
    static const char* DEFAULT_PASSPHRSE;
};

class Date
{
private:
    int m_year;
    int m_month;
    int m_day;
public:
    Date():m_year(0), m_month(0), m_day(0){}
    Date(const int& day, const int& month, const int& year); 
    bool isValid(void) const;
    int getDay() const {return m_day; }
    int getMonth() const {return m_month;}
    int getYear() const {return m_year;}
    void setDay (const int& day ){ m_day = day;}
    void setMonth (const int& month ) {m_month = month; }
    void setYear (const int& year ) {m_year = year;}

    static Date nextDate(const Date& inDate);
    static Date previousDate(const Date& inDate);

    static std::string computeCentralSiteProcessingDate(const std::string& arn, const std::string& alternateDate);
};

Date operator +(const Date& inDate, const int& noDays);
Date operator -(const Date& inDate, const int& noDays);

#endif
