// CclsPDFCreatorOptions.h  : Declaration of ActiveX Control wrapper class(es) created by Microsoft Visual C++

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CclsPDFCreatorOptions

class CclsPDFCreatorOptions : public COleDispatchDriver
{
public:
	CclsPDFCreatorOptions() {}		// Calls COleDispatchDriver default constructor
	CclsPDFCreatorOptions(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CclsPDFCreatorOptions(const CclsPDFCreatorOptions& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:

	CString get_AdditionalGhostscriptParameters()
	{
		CString result;
		InvokeHelper(0x4003011b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_AdditionalGhostscriptParameters(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003011b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_AdditionalGhostscriptSearchpath()
	{
		CString result;
		InvokeHelper(0x4003011c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_AdditionalGhostscriptSearchpath(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003011c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AddWindowsFontpath()
	{
		long result;
		InvokeHelper(0x4003011d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AddWindowsFontpath(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003011d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_AutosaveDirectory()
	{
		CString result;
		InvokeHelper(0x4003011e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_AutosaveDirectory(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003011e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_AutosaveFilename()
	{
		CString result;
		InvokeHelper(0x4003011f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_AutosaveFilename(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003011f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AutosaveFormat()
	{
		long result;
		InvokeHelper(0x40030120, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AutosaveFormat(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030120, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_AutosaveStartStandardProgram()
	{
		long result;
		InvokeHelper(0x40030121, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_AutosaveStartStandardProgram(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030121, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BitmapResolution()
	{
		long result;
		InvokeHelper(0x40030122, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BitmapResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030122, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_BMPColorscount()
	{
		long result;
		InvokeHelper(0x40030123, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_BMPColorscount(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030123, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ClientComputerResolveIPAddress()
	{
		long result;
		InvokeHelper(0x40030124, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ClientComputerResolveIPAddress(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030124, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_DeviceHeightPoints()
	{
		double result;
		InvokeHelper(0x40030125, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_DeviceHeightPoints(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030125, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_DeviceWidthPoints()
	{
		double result;
		InvokeHelper(0x40030126, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_DeviceWidthPoints(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030126, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DirectoryGhostscriptBinaries()
	{
		CString result;
		InvokeHelper(0x40030127, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DirectoryGhostscriptBinaries(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030127, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DirectoryGhostscriptFonts()
	{
		CString result;
		InvokeHelper(0x40030128, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DirectoryGhostscriptFonts(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030128, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DirectoryGhostscriptLibraries()
	{
		CString result;
		InvokeHelper(0x40030129, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DirectoryGhostscriptLibraries(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030129, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_DirectoryGhostscriptResource()
	{
		CString result;
		InvokeHelper(0x4003012a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_DirectoryGhostscriptResource(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003012a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DisableEmail()
	{
		long result;
		InvokeHelper(0x4003012b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DisableEmail(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003012b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_DontUseDocumentSettings()
	{
		long result;
		InvokeHelper(0x4003012c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_DontUseDocumentSettings(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003012c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_EPSLanguageLevel()
	{
		long result;
		InvokeHelper(0x4003012d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_EPSLanguageLevel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003012d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_FilenameSubstitutions()
	{
		CString result;
		InvokeHelper(0x4003012e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_FilenameSubstitutions(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003012e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_FilenameSubstitutionsOnlyInTitle()
	{
		long result;
		InvokeHelper(0x4003012f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_FilenameSubstitutionsOnlyInTitle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003012f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_JPEGColorscount()
	{
		long result;
		InvokeHelper(0x40030130, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_JPEGColorscount(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_JPEGQuality()
	{
		long result;
		InvokeHelper(0x40030131, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_JPEGQuality(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030131, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Language()
	{
		CString result;
		InvokeHelper(0x40030132, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Language(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030132, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_LastSaveDirectory()
	{
		CString result;
		InvokeHelper(0x40030133, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_LastSaveDirectory(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030133, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Logging()
	{
		long result;
		InvokeHelper(0x40030134, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Logging(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030134, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_LogLines()
	{
		long result;
		InvokeHelper(0x40030135, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_LogLines(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030135, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_NoConfirmMessageSwitchingDefaultprinter()
	{
		long result;
		InvokeHelper(0x40030136, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_NoConfirmMessageSwitchingDefaultprinter(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030136, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_NoProcessingAtStartup()
	{
		long result;
		InvokeHelper(0x40030137, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_NoProcessingAtStartup(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030137, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_NoPSCheck()
	{
		long result;
		InvokeHelper(0x40030138, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_NoPSCheck(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030138, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OnePagePerFile()
	{
		long result;
		InvokeHelper(0x40030139, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OnePagePerFile(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030139, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OptionsDesign()
	{
		long result;
		InvokeHelper(0x4003013a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OptionsDesign(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003013a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OptionsEnabled()
	{
		long result;
		InvokeHelper(0x4003013b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OptionsEnabled(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003013b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_OptionsVisible()
	{
		long result;
		InvokeHelper(0x4003013c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_OptionsVisible(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003013c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Papersize()
	{
		CString result;
		InvokeHelper(0x4003013d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Papersize(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003013d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PCXColorscount()
	{
		long result;
		InvokeHelper(0x4003013e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PCXColorscount(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003013e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFAllowAssembly()
	{
		long result;
		InvokeHelper(0x4003013f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFAllowAssembly(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003013f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFAllowDegradedPrinting()
	{
		long result;
		InvokeHelper(0x40030140, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFAllowDegradedPrinting(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030140, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFAllowFillIn()
	{
		long result;
		InvokeHelper(0x40030141, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFAllowFillIn(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030141, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFAllowScreenReaders()
	{
		long result;
		InvokeHelper(0x40030142, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFAllowScreenReaders(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030142, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFColorsCMYKToRGB()
	{
		long result;
		InvokeHelper(0x40030143, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFColorsCMYKToRGB(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030143, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFColorsColorModel()
	{
		long result;
		InvokeHelper(0x40030144, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFColorsColorModel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030144, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFColorsPreserveHalftone()
	{
		long result;
		InvokeHelper(0x40030145, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFColorsPreserveHalftone(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030145, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFColorsPreserveOverprint()
	{
		long result;
		InvokeHelper(0x40030146, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFColorsPreserveOverprint(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030146, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFColorsPreserveTransfer()
	{
		long result;
		InvokeHelper(0x40030147, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFColorsPreserveTransfer(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030147, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionColorCompression()
	{
		long result;
		InvokeHelper(0x40030148, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompression(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030148, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionColorCompressionChoice()
	{
		long result;
		InvokeHelper(0x40030149, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030149, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionColorCompressionJPEGHighFactor()
	{
		double result;
		InvokeHelper(0x4003014a, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionJPEGHighFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x4003014a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionColorCompressionJPEGLowFactor()
	{
		double result;
		InvokeHelper(0x4003014b, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionJPEGLowFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x4003014b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionColorCompressionJPEGMaximumFactor()
	{
		double result;
		InvokeHelper(0x4003014c, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionJPEGMaximumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x4003014c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionColorCompressionJPEGMediumFactor()
	{
		double result;
		InvokeHelper(0x4003014d, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionJPEGMediumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x4003014d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionColorCompressionJPEGMinimumFactor()
	{
		double result;
		InvokeHelper(0x4003014e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorCompressionJPEGMinimumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x4003014e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionColorResample()
	{
		long result;
		InvokeHelper(0x4003014f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorResample(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003014f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionColorResampleChoice()
	{
		long result;
		InvokeHelper(0x40030150, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorResampleChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030150, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionColorResolution()
	{
		long result;
		InvokeHelper(0x40030151, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionColorResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030151, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionGreyCompression()
	{
		long result;
		InvokeHelper(0x40030152, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompression(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030152, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionGreyCompressionChoice()
	{
		long result;
		InvokeHelper(0x40030153, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030153, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionGreyCompressionJPEGHighFactor()
	{
		double result;
		InvokeHelper(0x40030154, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionJPEGHighFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030154, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionGreyCompressionJPEGLowFactor()
	{
		double result;
		InvokeHelper(0x40030155, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionJPEGLowFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030155, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionGreyCompressionJPEGMaximumFactor()
	{
		double result;
		InvokeHelper(0x40030156, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionJPEGMaximumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030156, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionGreyCompressionJPEGMediumFactor()
	{
		double result;
		InvokeHelper(0x40030157, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionJPEGMediumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030157, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	double get_PDFCompressionGreyCompressionJPEGMinimumFactor()
	{
		double result;
		InvokeHelper(0x40030158, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyCompressionJPEGMinimumFactor(double newValue)
	{
		static BYTE parms[] = VTS_R8 ;
		InvokeHelper(0x40030158, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionGreyResample()
	{
		long result;
		InvokeHelper(0x40030159, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyResample(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030159, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionGreyResampleChoice()
	{
		long result;
		InvokeHelper(0x4003015a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyResampleChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionGreyResolution()
	{
		long result;
		InvokeHelper(0x4003015b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionGreyResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionMonoCompression()
	{
		long result;
		InvokeHelper(0x4003015c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionMonoCompression(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionMonoCompressionChoice()
	{
		long result;
		InvokeHelper(0x4003015d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionMonoCompressionChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionMonoResample()
	{
		long result;
		InvokeHelper(0x4003015e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionMonoResample(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionMonoResampleChoice()
	{
		long result;
		InvokeHelper(0x4003015f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionMonoResampleChoice(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003015f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionMonoResolution()
	{
		long result;
		InvokeHelper(0x40030160, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionMonoResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030160, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFCompressionTextCompression()
	{
		long result;
		InvokeHelper(0x40030161, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFCompressionTextCompression(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030161, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFDisallowCopy()
	{
		long result;
		InvokeHelper(0x40030162, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFDisallowCopy(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030162, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFDisallowModifyAnnotations()
	{
		long result;
		InvokeHelper(0x40030163, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFDisallowModifyAnnotations(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030163, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFDisallowModifyContents()
	{
		long result;
		InvokeHelper(0x40030164, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFDisallowModifyContents(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030164, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFDisallowPrinting()
	{
		long result;
		InvokeHelper(0x40030165, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFDisallowPrinting(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030165, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFEncryptor()
	{
		long result;
		InvokeHelper(0x40030166, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFEncryptor(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030166, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFFontsEmbedAll()
	{
		long result;
		InvokeHelper(0x40030167, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFFontsEmbedAll(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030167, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFFontsSubSetFonts()
	{
		long result;
		InvokeHelper(0x40030168, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFFontsSubSetFonts(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030168, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFFontsSubSetFontsPercent()
	{
		long result;
		InvokeHelper(0x40030169, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFFontsSubSetFontsPercent(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030169, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFGeneralASCII85()
	{
		long result;
		InvokeHelper(0x4003016a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFGeneralASCII85(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFGeneralAutorotate()
	{
		long result;
		InvokeHelper(0x4003016b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFGeneralAutorotate(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFGeneralCompatibility()
	{
		long result;
		InvokeHelper(0x4003016c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFGeneralCompatibility(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFGeneralOverprint()
	{
		long result;
		InvokeHelper(0x4003016d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFGeneralOverprint(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFGeneralResolution()
	{
		long result;
		InvokeHelper(0x4003016e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFGeneralResolution(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFHighEncryption()
	{
		long result;
		InvokeHelper(0x4003016f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFHighEncryption(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003016f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFLowEncryption()
	{
		long result;
		InvokeHelper(0x40030170, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFLowEncryption(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030170, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFOptimize()
	{
		long result;
		InvokeHelper(0x40030171, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFOptimize(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030171, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFOwnerPass()
	{
		long result;
		InvokeHelper(0x40030172, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFOwnerPass(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030172, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_PDFOwnerPasswordString()
	{
		CString result;
		InvokeHelper(0x40030173, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_PDFOwnerPasswordString(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030173, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFUserPass()
	{
		long result;
		InvokeHelper(0x40030174, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFUserPass(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030174, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_PDFUserPasswordString()
	{
		CString result;
		InvokeHelper(0x40030175, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_PDFUserPasswordString(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030175, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PDFUseSecurity()
	{
		long result;
		InvokeHelper(0x40030176, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PDFUseSecurity(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030176, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PNGColorscount()
	{
		long result;
		InvokeHelper(0x40030177, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PNGColorscount(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030177, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrintAfterSaving()
	{
		long result;
		InvokeHelper(0x40030178, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSaving(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030178, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrintAfterSavingDuplex()
	{
		long result;
		InvokeHelper(0x40030179, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSavingDuplex(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030179, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrintAfterSavingNoCancel()
	{
		long result;
		InvokeHelper(0x4003017a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSavingNoCancel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003017a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_PrintAfterSavingPrinter()
	{
		CString result;
		InvokeHelper(0x4003017b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSavingPrinter(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003017b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrintAfterSavingQueryUser()
	{
		long result;
		InvokeHelper(0x4003017c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSavingQueryUser(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003017c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrintAfterSavingTumble()
	{
		long result;
		InvokeHelper(0x4003017d, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrintAfterSavingTumble(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003017d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PrinterStop()
	{
		long result;
		InvokeHelper(0x4003017e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PrinterStop(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003017e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_PrinterTemppath()
	{
		CString result;
		InvokeHelper(0x4003017f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_PrinterTemppath(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003017f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ProcessPriority()
	{
		long result;
		InvokeHelper(0x40030180, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ProcessPriority(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030180, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_ProgramFont()
	{
		CString result;
		InvokeHelper(0x40030181, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_ProgramFont(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030181, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ProgramFontCharset()
	{
		long result;
		InvokeHelper(0x40030182, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ProgramFontCharset(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030182, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ProgramFontSize()
	{
		long result;
		InvokeHelper(0x40030183, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ProgramFontSize(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030183, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_PSLanguageLevel()
	{
		long result;
		InvokeHelper(0x40030184, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_PSLanguageLevel(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030184, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RemoveAllKnownFileExtensions()
	{
		long result;
		InvokeHelper(0x40030185, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RemoveAllKnownFileExtensions(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030185, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RemoveSpaces()
	{
		long result;
		InvokeHelper(0x40030186, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RemoveSpaces(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030186, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RunProgramAfterSaving()
	{
		long result;
		InvokeHelper(0x40030187, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramAfterSaving(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030187, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_RunProgramAfterSavingProgramname()
	{
		CString result;
		InvokeHelper(0x40030188, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramAfterSavingProgramname(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030188, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_RunProgramAfterSavingProgramParameters()
	{
		CString result;
		InvokeHelper(0x40030189, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramAfterSavingProgramParameters(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030189, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RunProgramAfterSavingWaitUntilReady()
	{
		long result;
		InvokeHelper(0x4003018a, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramAfterSavingWaitUntilReady(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003018a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RunProgramAfterSavingWindowstyle()
	{
		long result;
		InvokeHelper(0x4003018b, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramAfterSavingWindowstyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003018b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RunProgramBeforeSaving()
	{
		long result;
		InvokeHelper(0x4003018c, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramBeforeSaving(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003018c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_RunProgramBeforeSavingProgramname()
	{
		CString result;
		InvokeHelper(0x4003018d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramBeforeSavingProgramname(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003018d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_RunProgramBeforeSavingProgramParameters()
	{
		CString result;
		InvokeHelper(0x4003018e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramBeforeSavingProgramParameters(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003018e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_RunProgramBeforeSavingWindowstyle()
	{
		long result;
		InvokeHelper(0x4003018f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_RunProgramBeforeSavingWindowstyle(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x4003018f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_SaveFilename()
	{
		CString result;
		InvokeHelper(0x40030190, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_SaveFilename(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030190, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SendEmailAfterAutoSaving()
	{
		long result;
		InvokeHelper(0x40030191, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SendEmailAfterAutoSaving(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030191, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_SendMailMethod()
	{
		long result;
		InvokeHelper(0x40030192, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_SendMailMethod(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030192, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_ShowAnimation()
	{
		long result;
		InvokeHelper(0x40030193, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_ShowAnimation(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StampFontColor()
	{
		CString result;
		InvokeHelper(0x40030194, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StampFontColor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StampFontname()
	{
		CString result;
		InvokeHelper(0x40030195, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StampFontname(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StampFontsize()
	{
		long result;
		InvokeHelper(0x40030196, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StampFontsize(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030196, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StampOutlineFontthickness()
	{
		long result;
		InvokeHelper(0x40030197, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StampOutlineFontthickness(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030197, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StampString()
	{
		CString result;
		InvokeHelper(0x40030198, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StampString(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x40030198, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StampUseOutlineFont()
	{
		long result;
		InvokeHelper(0x40030199, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StampUseOutlineFont(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x40030199, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardAuthor()
	{
		CString result;
		InvokeHelper(0x4003019a, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardAuthor(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019a, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardCreationdate()
	{
		CString result;
		InvokeHelper(0x4003019b, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardCreationdate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardDateformat()
	{
		CString result;
		InvokeHelper(0x4003019c, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardDateformat(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardKeywords()
	{
		CString result;
		InvokeHelper(0x4003019d, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardKeywords(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardMailDomain()
	{
		CString result;
		InvokeHelper(0x4003019e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardMailDomain(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardModifydate()
	{
		CString result;
		InvokeHelper(0x4003019f, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardModifydate(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x4003019f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StandardSaveformat()
	{
		long result;
		InvokeHelper(0x400301a0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StandardSaveformat(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardSubject()
	{
		CString result;
		InvokeHelper(0x400301a1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardSubject(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x400301a1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_StandardTitle()
	{
		CString result;
		InvokeHelper(0x400301a2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_StandardTitle(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x400301a2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_StartStandardProgram()
	{
		long result;
		InvokeHelper(0x400301a3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_StartStandardProgram(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_TIFFColorscount()
	{
		long result;
		InvokeHelper(0x400301a4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_TIFFColorscount(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_Toolbars()
	{
		long result;
		InvokeHelper(0x400301a5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_Toolbars(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UseAutosave()
	{
		long result;
		InvokeHelper(0x400301a6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UseAutosave(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UseAutosaveDirectory()
	{
		long result;
		InvokeHelper(0x400301a7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UseAutosaveDirectory(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UseCreationDateNow()
	{
		long result;
		InvokeHelper(0x400301a8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UseCreationDateNow(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_UseCustomPaperSize()
	{
		CString result;
		InvokeHelper(0x400301aa, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_UseCustomPaperSize(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x400301aa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UseFixPapersize()
	{
		long result;
		InvokeHelper(0x400301ab, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UseFixPapersize(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301ab, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_UseStandardAuthor()
	{
		long result;
		InvokeHelper(0x400301a9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_UseStandardAuthor(long newValue)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x400301a9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}


};
