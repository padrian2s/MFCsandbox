#pragma once
#pragma warning(disable: 4290)

#include "ManagerDefs.h"
#include "stdafx.h"
#include <exception>
#include <list>
#include <xercesc/dom/DOM.hpp>
#include <occi.h>

class XMLException;
/**
/* Base class for all CDMS exceptions.
**/
class MANAGERS_API Exception: public std::exception
{
public:
    Exception(const char * errorCode): std::exception(errorCode) { }
    Exception(const char * errorCode, const std::list<CString> & errorParams): 
        std::exception(errorCode), m_errorParams(errorParams) { }
    const char* getErrorCode() const { return what(); }
    const std::list<CString> & getErrorParams() const { return m_errorParams; }
    CString convertErrorParams() const;
    operator const char*() const;
protected:
    /**
    /* Any error-related params which will be used in the internationalized error description message.
    **/
    std::list<CString> m_errorParams;
};

/**
/* This class represents a communication error.
**/
class MANAGERS_API CommunicationException: public Exception
{
public:
    CommunicationException(const char * errorCode): Exception(errorCode) { }
    CommunicationException(const char * errorCode, const std::list<CString> & errorParams): 
        Exception(errorCode, errorParams) { }
};

/**
/* This class represents a business logic-related error.
**/
class MANAGERS_API BusinessException: public Exception
{
public:
    BusinessException(const char * errorCode): Exception(errorCode) { }
    BusinessException(const char * errorCode, const std::list<CString> & errorParams):
        Exception(errorCode, errorParams) { }
    BusinessException(const XMLException & exception);
    BusinessException(const xercesc::DOMException & exception);
    BusinessException(const char * errorCode, oracle::occi::SQLException& sqlException);

};

/**
/* This class represents a business logic-related error.
**/
class MANAGERS_API VersionException: public BusinessException
{
public:
    VersionException(const char * errorCode): BusinessException(errorCode) { }
    VersionException(const char * errorCode, const std::list<CString> & errorParams):
    BusinessException(errorCode, errorParams) { }
};

/**
/* This class represents a disk I/O error.
**/
class MANAGERS_API IOException: public Exception
{
public:
    IOException(const char * errorCode): Exception(errorCode) { }
    IOException(const char * errorCode, const std::list<CString> & errorParams):
        Exception(errorCode, errorParams) { }
};

/**
/* This class represents a business logic-related error.
/* It is used when the object requested to be retrieved
/* is not available
**/
class MANAGERS_API NoSuchObjectException: public BusinessException
{
public:
    NoSuchObjectException(const char * errorCode): BusinessException(errorCode) { }
    NoSuchObjectException(const char * errorCode, const std::list<CString> & errorParams):
        BusinessException(errorCode, errorParams) { }
    NoSuchObjectException(const char * errorCode, oracle::occi::SQLException& sqlException):
        BusinessException(errorCode, sqlException) { }
};

/**
/* This class represents a business logic-related error.
/* It is used when the add operation fails due to a duplicate key
**/
class MANAGERS_API DuplicateObjectException: public BusinessException
{
public:
    DuplicateObjectException(const char * errorCode):
        BusinessException(errorCode) { }
    DuplicateObjectException(const char * errorCode, const std::list<CString> & errorParams):
        BusinessException(errorCode, errorParams) { }
    DuplicateObjectException(const char * errorCode, oracle::occi::SQLException& sqlException):
        BusinessException(errorCode, sqlException) { }

};