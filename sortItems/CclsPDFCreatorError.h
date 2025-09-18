// CclsPDFCreatorError.h  : Declaration of ActiveX Control wrapper class(es) created by Microsoft Visual C++

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CclsPDFCreatorError

class CclsPDFCreatorError : public COleDispatchDriver
{
public:
	CclsPDFCreatorError() {}		// Calls COleDispatchDriver default constructor
	CclsPDFCreatorError(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CclsPDFCreatorError(const CclsPDFCreatorError& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:

	long get_Number()
	{
		long result;
		InvokeHelper(0x40030002, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Number(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030002, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Description()
	{
		CString result;
		InvokeHelper(0x40030003, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Description(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030003, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}


};
