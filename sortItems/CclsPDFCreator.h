// CclsPDFCreator.h  : Declaration of ActiveX Control wrapper class(es) created by Microsoft Visual C++

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CclsPDFCreator

class CclsPDFCreator : public CWnd
{
protected:
	DECLARE_DYNCREATE(CclsPDFCreator)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x1CE9DC08, 0x9FBC, 0x45C6, { 0x8A, 0x7C, 0x4F, 0xE1, 0xE2, 0x8, 0xA6, 0x13 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle,
						const RECT& rect, CWnd* pParentWnd, UINT nID, 
						CCreateContext* pContext = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); 
	}

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, 
				UINT nID, CFile* pPersist = NULL, BOOL bStorage = FALSE,
				BSTR bstrLicKey = NULL)
	{ 
		return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); 
	}

// Attributes
public:

// Operations
public:

	LPDISPATCH get_cError()
	{
		LPDISPATCH result;
		InvokeHelper(0x68030067, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_cErrorDetail(LPCTSTR PropertyName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x68030066, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, PropertyName);
		return result;
	}
	void cErrorClear()
	{
		InvokeHelper(0x60030069, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_cOutputFilename()
	{
		CString result;
		InvokeHelper(0x68030065, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	CString get_cPDFCreatorApplicationPath()
	{
		CString result;
		InvokeHelper(0x68030064, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_cIsLogfileDialogDisplayed()
	{
		BOOL result;
		InvokeHelper(0x68030063, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_cIsOptionsDialogDisplayed()
	{
		BOOL result;
		InvokeHelper(0x68030062, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_cProgramRelease(BOOL WithBeta)
	{
		CString result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x68030061, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, WithBeta);
		return result;
	}
	BOOL get_cProgramIsRunning()
	{
		BOOL result;
		InvokeHelper(0x68030060, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	CString get_cWindowsVersion()
	{
		CString result;
		InvokeHelper(0x6803005f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	BOOL get_cVisible()
	{
		BOOL result;
		InvokeHelper(0x6803005e, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_cVisible(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x6803005e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_cInstalledAsServer()
	{
		BOOL result;
		InvokeHelper(0x6803005d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL get_cPrinterStop()
	{
		BOOL result;
		InvokeHelper(0x6803005c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_cPrinterStop(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x6803005c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	LPDISPATCH get_cOptionsNames()
	{
		LPDISPATCH result;
		InvokeHelper(0x6803005b, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	VARIANT get_cOption(LPCTSTR PropertyName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x6803005a, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, PropertyName);
		return result;
	}
	void put_cOption(LPCTSTR PropertyName, VARIANT newValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
		InvokeHelper(0x6803005a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, PropertyName, &newValue);
	}
	LPDISPATCH get_cOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x68030059, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void putref_cOptions(LPDISPATCH newValue)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x68030059, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms, newValue);
	}
	VARIANT get_cStandardOption(LPCTSTR PropertyName)
	{
		VARIANT result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x68030058, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, parms, PropertyName);
		return result;
	}
	LPDISPATCH get_cStandardOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x68030057, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString get_cPostscriptInfo(LPCTSTR PostscriptFilename, LPCTSTR PropertyName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x68030085, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, PostscriptFilename, PropertyName);
		return result;
	}
	LPDISPATCH get_cPrintjobInfos(LPCTSTR PrintjobFilename)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x68030056, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, PrintjobFilename);
		return result;
	}
	CString get_cPrintjobInfo(LPCTSTR PrintjobFilename, LPCTSTR PropertyName)
	{
		CString result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x68030055, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, PrintjobFilename, PropertyName);
		return result;
	}
	long get_cCountOfPrintjobs()
	{
		long result;
		InvokeHelper(0x68030054, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	CString get_cPrintjobFilename(long JobNumber)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x68030053, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, JobNumber);
		return result;
	}
	CString get_cDefaultPrinter()
	{
		CString result;
		InvokeHelper(0x68030052, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_cDefaultPrinter(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x68030052, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_cWindowState()
	{
		long result;
		InvokeHelper(0x68030051, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_cWindowState(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x68030051, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_cIsConverted()
	{
		BOOL result;
		InvokeHelper(0x68030050, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_cIsConverted(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x68030050, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	void cAddPrintjob(LPCTSTR PostscriptFilename)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x60030088, DISPATCH_METHOD, VT_EMPTY, NULL, parms, PostscriptFilename);
	}
	void cDeletePrintjob(long JobNumber)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6003006a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, JobNumber);
	}
	void cMovePrintjobBottom(long JobNumber)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6003006b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, JobNumber);
	}
	void cMovePrintjobTop(long JobNumber)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6003006c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, JobNumber);
	}
	void cMovePrintjobUp(long JobNumber)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6003006d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, JobNumber);
	}
	void cMovePrintjobDown(long JobNumber)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6003006e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, JobNumber);
	}
	BOOL cClose()
	{
		BOOL result;
		InvokeHelper(0x6003006f, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL cCloseRunningSession()
	{
		BOOL result;
		InvokeHelper(0x60030070, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL cStart(LPCTSTR Params, BOOL ForceInitialize)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL ;
		InvokeHelper(0x60030071, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Params, ForceInitialize);
		return result;
	}
	void cClearCache()
	{
		InvokeHelper(0x60030072, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void cClearLogfile()
	{
		InvokeHelper(0x60030073, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void cConvertPostscriptfile(LPCTSTR InputFilename, LPCTSTR OutputFilename)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x60030074, DISPATCH_METHOD, VT_EMPTY, NULL, parms, InputFilename, OutputFilename);
	}
	void cTestEvent(LPCTSTR EventName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x60030075, DISPATCH_METHOD, VT_EMPTY, NULL, parms, EventName);
	}
	void cShowLogfileDialog(BOOL Value)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x60030076, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
	}
	void cShowOptionsDialog(BOOL Value)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x60030077, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Value);
	}
	void cSendMail(LPCTSTR OutputFilename, LPCTSTR Recipients)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x60030078, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OutputFilename, Recipients);
	}
	BOOL cIsPrintable(LPCTSTR Filename)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x60030079, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Filename);
		return result;
	}
	void cCombineAll()
	{
		InvokeHelper(0x6003007a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	LPDISPATCH cGetPDFCreatorPrinters()
	{
		LPDISPATCH result;
		InvokeHelper(0x6003007b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	CString cGetLogfile()
	{
		CString result;
		InvokeHelper(0x6003007c, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void cWriteToLogfile(LPCTSTR LogStr)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x6003007d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, LogStr);
	}
	void cPrintFile(LPCTSTR Filename)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x6003007e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Filename);
	}
	void cPrintPDFCreatorTestpage()
	{
		InvokeHelper(0x6003007f, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void cPrintPrinterTestpage(LPCTSTR Printername)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x60030080, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Printername);
	}
	LPDISPATCH cReadOptions()
	{
		LPDISPATCH result;
		InvokeHelper(0x60030081, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void cSaveOptions(VARIANT Options1)
	{
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x60030082, DISPATCH_METHOD, VT_EMPTY, NULL, parms, &Options1);
	}
	LPDISPATCH cReadOptionsFromFile(LPCTSTR INIFilename)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x60030083, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, INIFilename);
		return result;
	}
	void cSaveOptionsToFile(LPCTSTR INIFilename, VARIANT Options1)
	{
		static BYTE parms[] = VTS_BSTR VTS_VARIANT ;
		InvokeHelper(0x60030084, DISPATCH_METHOD, VT_EMPTY, NULL, parms, INIFilename, &Options1);
	}


};
