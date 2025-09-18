#pragma once

#include "stdafx.h"
#include "Exception.h"
#include "XMLUtils.h"

class MANAGERS_API Utils
{
public:
    static CString          encrypt(const CString & toEncrypt) throw (BusinessException);
    static CString          decrypt(const CString & toDecrypt) throw (BusinessException);
    static CString          digestMessage(CString & message) throw(BusinessException);
    static CTime            convertDateToCTime(unsigned long date);
    static unsigned long    convertDatefromCTime(CTime date);
	static short			VerifyBarcode(CString barcode);
	static CString			hackBarcode(CString barcode);
private:
    static const CString PASS_PHRASE;
};
