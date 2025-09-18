#include "Exception.h"
#include "XMLUtils.h"

Exception::operator const char* () const
{
    static CString serialised;
    serialised.Format("Error code: %s, Error params: %s",getErrorCode(),convertErrorParams());
    return serialised;
}

CString Exception::convertErrorParams() const{
    CString result;
    // made list of values like valu1;value2;
    for (std::list<CString>::const_iterator errorIterator = m_errorParams.begin();
        errorIterator!=m_errorParams.end();
        ++errorIterator) {
            result+=(*errorIterator)+";";
    }   
    if(result.GetLength()>0) {
        result.Delete(result.GetLength()-1);
    }
    return result;
}
BusinessException::BusinessException(const XMLException & exception): Exception(exception.getErrorCode())
{
    for (std::list<std::string>::const_iterator i = exception.getErrorParams().begin();
        i != exception.getErrorParams().end();
        ++ i) 
    {
        m_errorParams.push_back((* i).c_str());
    }

}
BusinessException::BusinessException(const xercesc::DOMException & exception): Exception("XML_002")
{
    const char * message = ASCIIString(exception.msg);
    char code[5 + 1];
    sprintf(code, "%hu", (unsigned short)exception.code);
    m_errorParams.push_back(code); // Code
    m_errorParams.push_back(message); // Message
}

BusinessException::BusinessException(const char * errorCode, oracle::occi::SQLException& sqlException):Exception(errorCode)
{
    CString errCode;

    errCode.Format("%d",sqlException.getErrorCode());
    m_errorParams.push_back(errCode);
    m_errorParams.push_back(sqlException.getMessage().c_str());
}
