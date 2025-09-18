

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Mon Aug 27 17:23:07 2007
 */
/* Compiler settings for \MFCsandbox\PDFCreator\PDFCreator.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __PDFCreator_h_h__
#define __PDFCreator_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___clsPDFCreatorOptions_FWD_DEFINED__
#define ___clsPDFCreatorOptions_FWD_DEFINED__
typedef interface _clsPDFCreatorOptions _clsPDFCreatorOptions;
#endif 	/* ___clsPDFCreatorOptions_FWD_DEFINED__ */


#ifndef ___clsPDFCreatorError_FWD_DEFINED__
#define ___clsPDFCreatorError_FWD_DEFINED__
typedef interface _clsPDFCreatorError _clsPDFCreatorError;
#endif 	/* ___clsPDFCreatorError_FWD_DEFINED__ */


#ifndef ___clsPDFCreatorInfoSpoolFile_FWD_DEFINED__
#define ___clsPDFCreatorInfoSpoolFile_FWD_DEFINED__
typedef interface _clsPDFCreatorInfoSpoolFile _clsPDFCreatorInfoSpoolFile;
#endif 	/* ___clsPDFCreatorInfoSpoolFile_FWD_DEFINED__ */


#ifndef ___clsPDFCreator_FWD_DEFINED__
#define ___clsPDFCreator_FWD_DEFINED__
typedef interface _clsPDFCreator _clsPDFCreator;
#endif 	/* ___clsPDFCreator_FWD_DEFINED__ */


#ifndef ____clsPDFCreator_FWD_DEFINED__
#define ____clsPDFCreator_FWD_DEFINED__
typedef interface __clsPDFCreator __clsPDFCreator;
#endif 	/* ____clsPDFCreator_FWD_DEFINED__ */


#ifndef __clsPDFCreatorOptions_FWD_DEFINED__
#define __clsPDFCreatorOptions_FWD_DEFINED__

#ifdef __cplusplus
typedef class clsPDFCreatorOptions clsPDFCreatorOptions;
#else
typedef struct clsPDFCreatorOptions clsPDFCreatorOptions;
#endif /* __cplusplus */

#endif 	/* __clsPDFCreatorOptions_FWD_DEFINED__ */


#ifndef __clsPDFCreatorError_FWD_DEFINED__
#define __clsPDFCreatorError_FWD_DEFINED__

#ifdef __cplusplus
typedef class clsPDFCreatorError clsPDFCreatorError;
#else
typedef struct clsPDFCreatorError clsPDFCreatorError;
#endif /* __cplusplus */

#endif 	/* __clsPDFCreatorError_FWD_DEFINED__ */


#ifndef __clsPDFCreatorInfoSpoolFile_FWD_DEFINED__
#define __clsPDFCreatorInfoSpoolFile_FWD_DEFINED__

#ifdef __cplusplus
typedef class clsPDFCreatorInfoSpoolFile clsPDFCreatorInfoSpoolFile;
#else
typedef struct clsPDFCreatorInfoSpoolFile clsPDFCreatorInfoSpoolFile;
#endif /* __cplusplus */

#endif 	/* __clsPDFCreatorInfoSpoolFile_FWD_DEFINED__ */


#ifndef __clsPDFCreator_FWD_DEFINED__
#define __clsPDFCreator_FWD_DEFINED__

#ifdef __cplusplus
typedef class clsPDFCreator clsPDFCreator;
#else
typedef struct clsPDFCreator clsPDFCreator;
#endif /* __cplusplus */

#endif 	/* __clsPDFCreator_FWD_DEFINED__ */


#ifndef __IMFCSink_FWD_DEFINED__
#define __IMFCSink_FWD_DEFINED__
typedef interface IMFCSink IMFCSink;
#endif 	/* __IMFCSink_FWD_DEFINED__ */


#ifndef __MFCSink_FWD_DEFINED__
#define __MFCSink_FWD_DEFINED__

#ifdef __cplusplus
typedef class MFCSink MFCSink;
#else
typedef struct MFCSink MFCSink;
#endif /* __cplusplus */

#endif 	/* __MFCSink_FWD_DEFINED__ */


#ifndef __IPDFSink_FWD_DEFINED__
#define __IPDFSink_FWD_DEFINED__
typedef interface IPDFSink IPDFSink;
#endif 	/* __IPDFSink_FWD_DEFINED__ */


#ifndef __PDFSink_FWD_DEFINED__
#define __PDFSink_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDFSink PDFSink;
#else
typedef struct PDFSink PDFSink;
#endif /* __cplusplus */

#endif 	/* __PDFSink_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __PDFCreator_LIBRARY_DEFINED__
#define __PDFCreator_LIBRARY_DEFINED__

/* library PDFCreator */
/* [custom][version][uuid] */ 






typedef /* [public][version][uuid] */  DECLSPEC_UUID("9120D87C-6038-404B-8CC5-6B90A45C2E01") _clsPDFCreatorOptions clsPDFCreatorOptions___v0;

typedef /* [public][version][uuid] */  DECLSPEC_UUID("26E21F8A-58DF-426E-9E6E-75FBE217F886") _clsPDFCreator clsPDFCreator___v0;


EXTERN_C const IID LIBID_PDFCreator;

#ifndef ___clsPDFCreatorOptions_INTERFACE_DEFINED__
#define ___clsPDFCreatorOptions_INTERFACE_DEFINED__

/* interface _clsPDFCreatorOptions */
/* [object][oleautomation][nonextensible][dual][hidden][version][uuid] */ 


EXTERN_C const IID IID__clsPDFCreatorOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EDD16D7E-7339-4C43-BA18-F00077165FFE")
    _clsPDFCreatorOptions : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdditionalGhostscriptParameters( 
            /* [retval][out] */ BSTR *AdditionalGhostscriptParameters) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AdditionalGhostscriptParameters( 
            /* [in] */ BSTR AdditionalGhostscriptParameters) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AdditionalGhostscriptSearchpath( 
            /* [retval][out] */ BSTR *AdditionalGhostscriptSearchpath) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AdditionalGhostscriptSearchpath( 
            /* [in] */ BSTR AdditionalGhostscriptSearchpath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AddWindowsFontpath( 
            /* [retval][out] */ long *AddWindowsFontpath) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AddWindowsFontpath( 
            /* [in] */ long AddWindowsFontpath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutosaveDirectory( 
            /* [retval][out] */ BSTR *AutosaveDirectory) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AutosaveDirectory( 
            /* [in] */ BSTR AutosaveDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutosaveFilename( 
            /* [retval][out] */ BSTR *AutosaveFilename) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AutosaveFilename( 
            /* [in] */ BSTR AutosaveFilename) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutosaveFormat( 
            /* [retval][out] */ long *AutosaveFormat) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AutosaveFormat( 
            /* [in] */ long AutosaveFormat) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutosaveStartStandardProgram( 
            /* [retval][out] */ long *AutosaveStartStandardProgram) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_AutosaveStartStandardProgram( 
            /* [in] */ long AutosaveStartStandardProgram) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BitmapResolution( 
            /* [retval][out] */ long *BitmapResolution) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BitmapResolution( 
            /* [in] */ long BitmapResolution) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BMPColorscount( 
            /* [retval][out] */ long *BMPColorscount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_BMPColorscount( 
            /* [in] */ long BMPColorscount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ClientComputerResolveIPAddress( 
            /* [retval][out] */ long *ClientComputerResolveIPAddress) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ClientComputerResolveIPAddress( 
            /* [in] */ long ClientComputerResolveIPAddress) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DeviceHeightPoints( 
            /* [retval][out] */ double *DeviceHeightPoints) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DeviceHeightPoints( 
            /* [in] */ double DeviceHeightPoints) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DeviceWidthPoints( 
            /* [retval][out] */ double *DeviceWidthPoints) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DeviceWidthPoints( 
            /* [in] */ double DeviceWidthPoints) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DirectoryGhostscriptBinaries( 
            /* [retval][out] */ BSTR *DirectoryGhostscriptBinaries) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DirectoryGhostscriptBinaries( 
            /* [in] */ BSTR DirectoryGhostscriptBinaries) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DirectoryGhostscriptFonts( 
            /* [retval][out] */ BSTR *DirectoryGhostscriptFonts) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DirectoryGhostscriptFonts( 
            /* [in] */ BSTR DirectoryGhostscriptFonts) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DirectoryGhostscriptLibraries( 
            /* [retval][out] */ BSTR *DirectoryGhostscriptLibraries) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DirectoryGhostscriptLibraries( 
            /* [in] */ BSTR DirectoryGhostscriptLibraries) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DirectoryGhostscriptResource( 
            /* [retval][out] */ BSTR *DirectoryGhostscriptResource) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DirectoryGhostscriptResource( 
            /* [in] */ BSTR DirectoryGhostscriptResource) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DisableEmail( 
            /* [retval][out] */ long *DisableEmail) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DisableEmail( 
            /* [in] */ long DisableEmail) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DontUseDocumentSettings( 
            /* [retval][out] */ long *DontUseDocumentSettings) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DontUseDocumentSettings( 
            /* [in] */ long DontUseDocumentSettings) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_EPSLanguageLevel( 
            /* [retval][out] */ long *EPSLanguageLevel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_EPSLanguageLevel( 
            /* [in] */ long EPSLanguageLevel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FilenameSubstitutions( 
            /* [retval][out] */ BSTR *FilenameSubstitutions) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FilenameSubstitutions( 
            /* [in] */ BSTR FilenameSubstitutions) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FilenameSubstitutionsOnlyInTitle( 
            /* [retval][out] */ long *FilenameSubstitutionsOnlyInTitle) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_FilenameSubstitutionsOnlyInTitle( 
            /* [in] */ long FilenameSubstitutionsOnlyInTitle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_JPEGColorscount( 
            /* [retval][out] */ long *JPEGColorscount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_JPEGColorscount( 
            /* [in] */ long JPEGColorscount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_JPEGQuality( 
            /* [retval][out] */ long *JPEGQuality) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_JPEGQuality( 
            /* [in] */ long JPEGQuality) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ BSTR *Language) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Language( 
            /* [in] */ BSTR Language) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LastSaveDirectory( 
            /* [retval][out] */ BSTR *LastSaveDirectory) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_LastSaveDirectory( 
            /* [in] */ BSTR LastSaveDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Logging( 
            /* [retval][out] */ long *Logging) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Logging( 
            /* [in] */ long Logging) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LogLines( 
            /* [retval][out] */ long *LogLines) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_LogLines( 
            /* [in] */ long LogLines) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NoConfirmMessageSwitchingDefaultprinter( 
            /* [retval][out] */ long *NoConfirmMessageSwitchingDefaultprinter) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NoConfirmMessageSwitchingDefaultprinter( 
            /* [in] */ long NoConfirmMessageSwitchingDefaultprinter) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NoProcessingAtStartup( 
            /* [retval][out] */ long *NoProcessingAtStartup) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NoProcessingAtStartup( 
            /* [in] */ long NoProcessingAtStartup) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_NoPSCheck( 
            /* [retval][out] */ long *NoPSCheck) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_NoPSCheck( 
            /* [in] */ long NoPSCheck) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OnePagePerFile( 
            /* [retval][out] */ long *OnePagePerFile) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_OnePagePerFile( 
            /* [in] */ long OnePagePerFile) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OptionsDesign( 
            /* [retval][out] */ long *OptionsDesign) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_OptionsDesign( 
            /* [in] */ long OptionsDesign) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OptionsEnabled( 
            /* [retval][out] */ long *OptionsEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_OptionsEnabled( 
            /* [in] */ long OptionsEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OptionsVisible( 
            /* [retval][out] */ long *OptionsVisible) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_OptionsVisible( 
            /* [in] */ long OptionsVisible) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Papersize( 
            /* [retval][out] */ BSTR *Papersize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Papersize( 
            /* [in] */ BSTR Papersize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PCXColorscount( 
            /* [retval][out] */ long *PCXColorscount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PCXColorscount( 
            /* [in] */ long PCXColorscount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFAllowAssembly( 
            /* [retval][out] */ long *PDFAllowAssembly) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFAllowAssembly( 
            /* [in] */ long PDFAllowAssembly) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFAllowDegradedPrinting( 
            /* [retval][out] */ long *PDFAllowDegradedPrinting) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFAllowDegradedPrinting( 
            /* [in] */ long PDFAllowDegradedPrinting) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFAllowFillIn( 
            /* [retval][out] */ long *PDFAllowFillIn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFAllowFillIn( 
            /* [in] */ long PDFAllowFillIn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFAllowScreenReaders( 
            /* [retval][out] */ long *PDFAllowScreenReaders) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFAllowScreenReaders( 
            /* [in] */ long PDFAllowScreenReaders) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFColorsCMYKToRGB( 
            /* [retval][out] */ long *PDFColorsCMYKToRGB) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFColorsCMYKToRGB( 
            /* [in] */ long PDFColorsCMYKToRGB) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFColorsColorModel( 
            /* [retval][out] */ long *PDFColorsColorModel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFColorsColorModel( 
            /* [in] */ long PDFColorsColorModel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFColorsPreserveHalftone( 
            /* [retval][out] */ long *PDFColorsPreserveHalftone) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFColorsPreserveHalftone( 
            /* [in] */ long PDFColorsPreserveHalftone) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFColorsPreserveOverprint( 
            /* [retval][out] */ long *PDFColorsPreserveOverprint) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFColorsPreserveOverprint( 
            /* [in] */ long PDFColorsPreserveOverprint) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFColorsPreserveTransfer( 
            /* [retval][out] */ long *PDFColorsPreserveTransfer) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFColorsPreserveTransfer( 
            /* [in] */ long PDFColorsPreserveTransfer) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompression( 
            /* [retval][out] */ long *PDFCompressionColorCompression) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompression( 
            /* [in] */ long PDFCompressionColorCompression) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionChoice( 
            /* [retval][out] */ long *PDFCompressionColorCompressionChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionChoice( 
            /* [in] */ long PDFCompressionColorCompressionChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionJPEGHighFactor( 
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGHighFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionJPEGHighFactor( 
            /* [in] */ double PDFCompressionColorCompressionJPEGHighFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionJPEGLowFactor( 
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGLowFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionJPEGLowFactor( 
            /* [in] */ double PDFCompressionColorCompressionJPEGLowFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionJPEGMaximumFactor( 
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMaximumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionJPEGMaximumFactor( 
            /* [in] */ double PDFCompressionColorCompressionJPEGMaximumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionJPEGMediumFactor( 
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMediumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionJPEGMediumFactor( 
            /* [in] */ double PDFCompressionColorCompressionJPEGMediumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorCompressionJPEGMinimumFactor( 
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMinimumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorCompressionJPEGMinimumFactor( 
            /* [in] */ double PDFCompressionColorCompressionJPEGMinimumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorResample( 
            /* [retval][out] */ long *PDFCompressionColorResample) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorResample( 
            /* [in] */ long PDFCompressionColorResample) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorResampleChoice( 
            /* [retval][out] */ long *PDFCompressionColorResampleChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorResampleChoice( 
            /* [in] */ long PDFCompressionColorResampleChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionColorResolution( 
            /* [retval][out] */ long *PDFCompressionColorResolution) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionColorResolution( 
            /* [in] */ long PDFCompressionColorResolution) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompression( 
            /* [retval][out] */ long *PDFCompressionGreyCompression) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompression( 
            /* [in] */ long PDFCompressionGreyCompression) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionChoice( 
            /* [retval][out] */ long *PDFCompressionGreyCompressionChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionChoice( 
            /* [in] */ long PDFCompressionGreyCompressionChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionJPEGHighFactor( 
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGHighFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionJPEGHighFactor( 
            /* [in] */ double PDFCompressionGreyCompressionJPEGHighFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionJPEGLowFactor( 
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGLowFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionJPEGLowFactor( 
            /* [in] */ double PDFCompressionGreyCompressionJPEGLowFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionJPEGMaximumFactor( 
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMaximumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionJPEGMaximumFactor( 
            /* [in] */ double PDFCompressionGreyCompressionJPEGMaximumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionJPEGMediumFactor( 
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMediumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionJPEGMediumFactor( 
            /* [in] */ double PDFCompressionGreyCompressionJPEGMediumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyCompressionJPEGMinimumFactor( 
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMinimumFactor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyCompressionJPEGMinimumFactor( 
            /* [in] */ double PDFCompressionGreyCompressionJPEGMinimumFactor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyResample( 
            /* [retval][out] */ long *PDFCompressionGreyResample) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyResample( 
            /* [in] */ long PDFCompressionGreyResample) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyResampleChoice( 
            /* [retval][out] */ long *PDFCompressionGreyResampleChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyResampleChoice( 
            /* [in] */ long PDFCompressionGreyResampleChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionGreyResolution( 
            /* [retval][out] */ long *PDFCompressionGreyResolution) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionGreyResolution( 
            /* [in] */ long PDFCompressionGreyResolution) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionMonoCompression( 
            /* [retval][out] */ long *PDFCompressionMonoCompression) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionMonoCompression( 
            /* [in] */ long PDFCompressionMonoCompression) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionMonoCompressionChoice( 
            /* [retval][out] */ long *PDFCompressionMonoCompressionChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionMonoCompressionChoice( 
            /* [in] */ long PDFCompressionMonoCompressionChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionMonoResample( 
            /* [retval][out] */ long *PDFCompressionMonoResample) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionMonoResample( 
            /* [in] */ long PDFCompressionMonoResample) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionMonoResampleChoice( 
            /* [retval][out] */ long *PDFCompressionMonoResampleChoice) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionMonoResampleChoice( 
            /* [in] */ long PDFCompressionMonoResampleChoice) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionMonoResolution( 
            /* [retval][out] */ long *PDFCompressionMonoResolution) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionMonoResolution( 
            /* [in] */ long PDFCompressionMonoResolution) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFCompressionTextCompression( 
            /* [retval][out] */ long *PDFCompressionTextCompression) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFCompressionTextCompression( 
            /* [in] */ long PDFCompressionTextCompression) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDisallowCopy( 
            /* [retval][out] */ long *PDFDisallowCopy) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFDisallowCopy( 
            /* [in] */ long PDFDisallowCopy) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDisallowModifyAnnotations( 
            /* [retval][out] */ long *PDFDisallowModifyAnnotations) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFDisallowModifyAnnotations( 
            /* [in] */ long PDFDisallowModifyAnnotations) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDisallowModifyContents( 
            /* [retval][out] */ long *PDFDisallowModifyContents) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFDisallowModifyContents( 
            /* [in] */ long PDFDisallowModifyContents) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFDisallowPrinting( 
            /* [retval][out] */ long *PDFDisallowPrinting) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFDisallowPrinting( 
            /* [in] */ long PDFDisallowPrinting) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFEncryptor( 
            /* [retval][out] */ long *PDFEncryptor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFEncryptor( 
            /* [in] */ long PDFEncryptor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFFontsEmbedAll( 
            /* [retval][out] */ long *PDFFontsEmbedAll) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFFontsEmbedAll( 
            /* [in] */ long PDFFontsEmbedAll) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFFontsSubSetFonts( 
            /* [retval][out] */ long *PDFFontsSubSetFonts) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFFontsSubSetFonts( 
            /* [in] */ long PDFFontsSubSetFonts) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFFontsSubSetFontsPercent( 
            /* [retval][out] */ long *PDFFontsSubSetFontsPercent) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFFontsSubSetFontsPercent( 
            /* [in] */ long PDFFontsSubSetFontsPercent) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFGeneralASCII85( 
            /* [retval][out] */ long *PDFGeneralASCII85) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFGeneralASCII85( 
            /* [in] */ long PDFGeneralASCII85) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFGeneralAutorotate( 
            /* [retval][out] */ long *PDFGeneralAutorotate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFGeneralAutorotate( 
            /* [in] */ long PDFGeneralAutorotate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFGeneralCompatibility( 
            /* [retval][out] */ long *PDFGeneralCompatibility) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFGeneralCompatibility( 
            /* [in] */ long PDFGeneralCompatibility) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFGeneralOverprint( 
            /* [retval][out] */ long *PDFGeneralOverprint) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFGeneralOverprint( 
            /* [in] */ long PDFGeneralOverprint) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFGeneralResolution( 
            /* [retval][out] */ long *PDFGeneralResolution) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFGeneralResolution( 
            /* [in] */ long PDFGeneralResolution) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFHighEncryption( 
            /* [retval][out] */ long *PDFHighEncryption) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFHighEncryption( 
            /* [in] */ long PDFHighEncryption) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFLowEncryption( 
            /* [retval][out] */ long *PDFLowEncryption) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFLowEncryption( 
            /* [in] */ long PDFLowEncryption) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFOptimize( 
            /* [retval][out] */ long *PDFOptimize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFOptimize( 
            /* [in] */ long PDFOptimize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFOwnerPass( 
            /* [retval][out] */ long *PDFOwnerPass) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFOwnerPass( 
            /* [in] */ long PDFOwnerPass) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFOwnerPasswordString( 
            /* [retval][out] */ BSTR *PDFOwnerPasswordString) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFOwnerPasswordString( 
            /* [in] */ BSTR PDFOwnerPasswordString) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFUserPass( 
            /* [retval][out] */ long *PDFUserPass) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFUserPass( 
            /* [in] */ long PDFUserPass) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFUserPasswordString( 
            /* [retval][out] */ BSTR *PDFUserPasswordString) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFUserPasswordString( 
            /* [in] */ BSTR PDFUserPasswordString) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PDFUseSecurity( 
            /* [retval][out] */ long *PDFUseSecurity) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PDFUseSecurity( 
            /* [in] */ long PDFUseSecurity) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PNGColorscount( 
            /* [retval][out] */ long *PNGColorscount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PNGColorscount( 
            /* [in] */ long PNGColorscount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSaving( 
            /* [retval][out] */ long *PrintAfterSaving) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSaving( 
            /* [in] */ long PrintAfterSaving) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSavingDuplex( 
            /* [retval][out] */ long *PrintAfterSavingDuplex) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSavingDuplex( 
            /* [in] */ long PrintAfterSavingDuplex) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSavingNoCancel( 
            /* [retval][out] */ long *PrintAfterSavingNoCancel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSavingNoCancel( 
            /* [in] */ long PrintAfterSavingNoCancel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSavingPrinter( 
            /* [retval][out] */ BSTR *PrintAfterSavingPrinter) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSavingPrinter( 
            /* [in] */ BSTR PrintAfterSavingPrinter) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSavingQueryUser( 
            /* [retval][out] */ long *PrintAfterSavingQueryUser) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSavingQueryUser( 
            /* [in] */ long PrintAfterSavingQueryUser) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrintAfterSavingTumble( 
            /* [retval][out] */ long *PrintAfterSavingTumble) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrintAfterSavingTumble( 
            /* [in] */ long PrintAfterSavingTumble) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterStop( 
            /* [retval][out] */ long *PrinterStop) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterStop( 
            /* [in] */ long PrinterStop) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PrinterTemppath( 
            /* [retval][out] */ BSTR *PrinterTemppath) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PrinterTemppath( 
            /* [in] */ BSTR PrinterTemppath) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcessPriority( 
            /* [retval][out] */ long *ProcessPriority) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ProcessPriority( 
            /* [in] */ long ProcessPriority) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramFont( 
            /* [retval][out] */ BSTR *ProgramFont) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ProgramFont( 
            /* [in] */ BSTR ProgramFont) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramFontCharset( 
            /* [retval][out] */ long *ProgramFontCharset) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ProgramFontCharset( 
            /* [in] */ long ProgramFontCharset) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramFontSize( 
            /* [retval][out] */ long *ProgramFontSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ProgramFontSize( 
            /* [in] */ long ProgramFontSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PSLanguageLevel( 
            /* [retval][out] */ long *PSLanguageLevel) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_PSLanguageLevel( 
            /* [in] */ long PSLanguageLevel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoveAllKnownFileExtensions( 
            /* [retval][out] */ long *RemoveAllKnownFileExtensions) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoveAllKnownFileExtensions( 
            /* [in] */ long RemoveAllKnownFileExtensions) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RemoveSpaces( 
            /* [retval][out] */ long *RemoveSpaces) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RemoveSpaces( 
            /* [in] */ long RemoveSpaces) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramAfterSaving( 
            /* [retval][out] */ long *RunProgramAfterSaving) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramAfterSaving( 
            /* [in] */ long RunProgramAfterSaving) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramAfterSavingProgramname( 
            /* [retval][out] */ BSTR *RunProgramAfterSavingProgramname) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramAfterSavingProgramname( 
            /* [in] */ BSTR RunProgramAfterSavingProgramname) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramAfterSavingProgramParameters( 
            /* [retval][out] */ BSTR *RunProgramAfterSavingProgramParameters) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramAfterSavingProgramParameters( 
            /* [in] */ BSTR RunProgramAfterSavingProgramParameters) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramAfterSavingWaitUntilReady( 
            /* [retval][out] */ long *RunProgramAfterSavingWaitUntilReady) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramAfterSavingWaitUntilReady( 
            /* [in] */ long RunProgramAfterSavingWaitUntilReady) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramAfterSavingWindowstyle( 
            /* [retval][out] */ long *RunProgramAfterSavingWindowstyle) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramAfterSavingWindowstyle( 
            /* [in] */ long RunProgramAfterSavingWindowstyle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramBeforeSaving( 
            /* [retval][out] */ long *RunProgramBeforeSaving) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramBeforeSaving( 
            /* [in] */ long RunProgramBeforeSaving) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramBeforeSavingProgramname( 
            /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramname) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramBeforeSavingProgramname( 
            /* [in] */ BSTR RunProgramBeforeSavingProgramname) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramBeforeSavingProgramParameters( 
            /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramParameters) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramBeforeSavingProgramParameters( 
            /* [in] */ BSTR RunProgramBeforeSavingProgramParameters) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RunProgramBeforeSavingWindowstyle( 
            /* [retval][out] */ long *RunProgramBeforeSavingWindowstyle) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_RunProgramBeforeSavingWindowstyle( 
            /* [in] */ long RunProgramBeforeSavingWindowstyle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SaveFilename( 
            /* [retval][out] */ BSTR *SaveFilename) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SaveFilename( 
            /* [in] */ BSTR SaveFilename) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SendEmailAfterAutoSaving( 
            /* [retval][out] */ long *SendEmailAfterAutoSaving) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SendEmailAfterAutoSaving( 
            /* [in] */ long SendEmailAfterAutoSaving) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SendMailMethod( 
            /* [retval][out] */ long *SendMailMethod) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SendMailMethod( 
            /* [in] */ long SendMailMethod) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowAnimation( 
            /* [retval][out] */ long *ShowAnimation) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_ShowAnimation( 
            /* [in] */ long ShowAnimation) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampFontColor( 
            /* [retval][out] */ BSTR *StampFontColor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampFontColor( 
            /* [in] */ BSTR StampFontColor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampFontname( 
            /* [retval][out] */ BSTR *StampFontname) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampFontname( 
            /* [in] */ BSTR StampFontname) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampFontsize( 
            /* [retval][out] */ long *StampFontsize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampFontsize( 
            /* [in] */ long StampFontsize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampOutlineFontthickness( 
            /* [retval][out] */ long *StampOutlineFontthickness) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampOutlineFontthickness( 
            /* [in] */ long StampOutlineFontthickness) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampString( 
            /* [retval][out] */ BSTR *StampString) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampString( 
            /* [in] */ BSTR StampString) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StampUseOutlineFont( 
            /* [retval][out] */ long *StampUseOutlineFont) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StampUseOutlineFont( 
            /* [in] */ long StampUseOutlineFont) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardAuthor( 
            /* [retval][out] */ BSTR *StandardAuthor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardAuthor( 
            /* [in] */ BSTR StandardAuthor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardCreationdate( 
            /* [retval][out] */ BSTR *StandardCreationdate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardCreationdate( 
            /* [in] */ BSTR StandardCreationdate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardDateformat( 
            /* [retval][out] */ BSTR *StandardDateformat) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardDateformat( 
            /* [in] */ BSTR StandardDateformat) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardKeywords( 
            /* [retval][out] */ BSTR *StandardKeywords) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardKeywords( 
            /* [in] */ BSTR StandardKeywords) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardMailDomain( 
            /* [retval][out] */ BSTR *StandardMailDomain) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardMailDomain( 
            /* [in] */ BSTR StandardMailDomain) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardModifydate( 
            /* [retval][out] */ BSTR *StandardModifydate) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardModifydate( 
            /* [in] */ BSTR StandardModifydate) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardSaveformat( 
            /* [retval][out] */ long *StandardSaveformat) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardSaveformat( 
            /* [in] */ long StandardSaveformat) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardSubject( 
            /* [retval][out] */ BSTR *StandardSubject) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardSubject( 
            /* [in] */ BSTR StandardSubject) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StandardTitle( 
            /* [retval][out] */ BSTR *StandardTitle) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StandardTitle( 
            /* [in] */ BSTR StandardTitle) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_StartStandardProgram( 
            /* [retval][out] */ long *StartStandardProgram) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_StartStandardProgram( 
            /* [in] */ long StartStandardProgram) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TIFFColorscount( 
            /* [retval][out] */ long *TIFFColorscount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TIFFColorscount( 
            /* [in] */ long TIFFColorscount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Toolbars( 
            /* [retval][out] */ long *Toolbars) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Toolbars( 
            /* [in] */ long Toolbars) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseAutosave( 
            /* [retval][out] */ long *UseAutosave) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseAutosave( 
            /* [in] */ long UseAutosave) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseAutosaveDirectory( 
            /* [retval][out] */ long *UseAutosaveDirectory) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseAutosaveDirectory( 
            /* [in] */ long UseAutosaveDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseCreationDateNow( 
            /* [retval][out] */ long *UseCreationDateNow) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseCreationDateNow( 
            /* [in] */ long UseCreationDateNow) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseStandardAuthor( 
            /* [retval][out] */ long *UseStandardAuthor) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseStandardAuthor( 
            /* [in] */ long UseStandardAuthor) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseCustomPaperSize( 
            /* [retval][out] */ BSTR *UseCustomPaperSize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseCustomPaperSize( 
            /* [in] */ BSTR UseCustomPaperSize) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_UseFixPapersize( 
            /* [retval][out] */ long *UseFixPapersize) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_UseFixPapersize( 
            /* [in] */ long UseFixPapersize) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _clsPDFCreatorOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _clsPDFCreatorOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _clsPDFCreatorOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _clsPDFCreatorOptions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdditionalGhostscriptParameters )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *AdditionalGhostscriptParameters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AdditionalGhostscriptParameters )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR AdditionalGhostscriptParameters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AdditionalGhostscriptSearchpath )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *AdditionalGhostscriptSearchpath);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AdditionalGhostscriptSearchpath )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR AdditionalGhostscriptSearchpath);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AddWindowsFontpath )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *AddWindowsFontpath);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AddWindowsFontpath )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long AddWindowsFontpath);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *AutosaveDirectory);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR AutosaveDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveFilename )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *AutosaveFilename);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveFilename )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR AutosaveFilename);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveFormat )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *AutosaveFormat);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveFormat )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long AutosaveFormat);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutosaveStartStandardProgram )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *AutosaveStartStandardProgram);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_AutosaveStartStandardProgram )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long AutosaveStartStandardProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapResolution )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *BitmapResolution);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapResolution )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long BitmapResolution);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BMPColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *BMPColorscount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BMPColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long BMPColorscount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClientComputerResolveIPAddress )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *ClientComputerResolveIPAddress);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ClientComputerResolveIPAddress )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long ClientComputerResolveIPAddress);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceHeightPoints )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *DeviceHeightPoints);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceHeightPoints )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double DeviceHeightPoints);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceWidthPoints )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *DeviceWidthPoints);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceWidthPoints )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double DeviceWidthPoints);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DirectoryGhostscriptBinaries )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *DirectoryGhostscriptBinaries);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DirectoryGhostscriptBinaries )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR DirectoryGhostscriptBinaries);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DirectoryGhostscriptFonts )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *DirectoryGhostscriptFonts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DirectoryGhostscriptFonts )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR DirectoryGhostscriptFonts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DirectoryGhostscriptLibraries )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *DirectoryGhostscriptLibraries);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DirectoryGhostscriptLibraries )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR DirectoryGhostscriptLibraries);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DirectoryGhostscriptResource )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *DirectoryGhostscriptResource);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DirectoryGhostscriptResource )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR DirectoryGhostscriptResource);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisableEmail )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *DisableEmail);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisableEmail )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long DisableEmail);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DontUseDocumentSettings )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *DontUseDocumentSettings);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DontUseDocumentSettings )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long DontUseDocumentSettings);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EPSLanguageLevel )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *EPSLanguageLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EPSLanguageLevel )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long EPSLanguageLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FilenameSubstitutions )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *FilenameSubstitutions);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FilenameSubstitutions )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR FilenameSubstitutions);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FilenameSubstitutionsOnlyInTitle )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *FilenameSubstitutionsOnlyInTitle);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FilenameSubstitutionsOnlyInTitle )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long FilenameSubstitutionsOnlyInTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_JPEGColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *JPEGColorscount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_JPEGColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long JPEGColorscount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_JPEGQuality )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *JPEGQuality);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_JPEGQuality )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long JPEGQuality);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *Language);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Language )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR Language);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastSaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *LastSaveDirectory);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LastSaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR LastSaveDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Logging )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *Logging);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Logging )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long Logging);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LogLines )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *LogLines);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LogLines )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long LogLines);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NoConfirmMessageSwitchingDefaultprinter )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *NoConfirmMessageSwitchingDefaultprinter);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NoConfirmMessageSwitchingDefaultprinter )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long NoConfirmMessageSwitchingDefaultprinter);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NoProcessingAtStartup )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *NoProcessingAtStartup);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NoProcessingAtStartup )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long NoProcessingAtStartup);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NoPSCheck )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *NoPSCheck);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_NoPSCheck )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long NoPSCheck);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OnePagePerFile )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *OnePagePerFile);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OnePagePerFile )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long OnePagePerFile);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OptionsDesign )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *OptionsDesign);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OptionsDesign )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long OptionsDesign);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OptionsEnabled )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *OptionsEnabled);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OptionsEnabled )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long OptionsEnabled);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OptionsVisible )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *OptionsVisible);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OptionsVisible )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long OptionsVisible);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Papersize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *Papersize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Papersize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR Papersize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PCXColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PCXColorscount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PCXColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PCXColorscount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFAllowAssembly )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFAllowAssembly);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFAllowAssembly )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFAllowAssembly);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFAllowDegradedPrinting )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFAllowDegradedPrinting);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFAllowDegradedPrinting )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFAllowDegradedPrinting);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFAllowFillIn )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFAllowFillIn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFAllowFillIn )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFAllowFillIn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFAllowScreenReaders )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFAllowScreenReaders);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFAllowScreenReaders )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFAllowScreenReaders);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFColorsCMYKToRGB )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFColorsCMYKToRGB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFColorsCMYKToRGB )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFColorsCMYKToRGB);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFColorsColorModel )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFColorsColorModel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFColorsColorModel )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFColorsColorModel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFColorsPreserveHalftone )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFColorsPreserveHalftone);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFColorsPreserveHalftone )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFColorsPreserveHalftone);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFColorsPreserveOverprint )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFColorsPreserveOverprint);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFColorsPreserveOverprint )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFColorsPreserveOverprint);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFColorsPreserveTransfer )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFColorsPreserveTransfer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFColorsPreserveTransfer )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFColorsPreserveTransfer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompression )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionColorCompression);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompression )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionColorCompression);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionColorCompressionChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionColorCompressionChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionJPEGHighFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGHighFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionJPEGHighFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionColorCompressionJPEGHighFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionJPEGLowFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGLowFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionJPEGLowFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionColorCompressionJPEGLowFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionJPEGMaximumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMaximumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionJPEGMaximumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionColorCompressionJPEGMaximumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionJPEGMediumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMediumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionJPEGMediumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionColorCompressionJPEGMediumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorCompressionJPEGMinimumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMinimumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorCompressionJPEGMinimumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionColorCompressionJPEGMinimumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorResample )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionColorResample);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorResample )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionColorResample);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionColorResampleChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionColorResampleChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionColorResolution )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionColorResolution);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionColorResolution )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionColorResolution);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompression )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionGreyCompression);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompression )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionGreyCompression);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionGreyCompressionChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionGreyCompressionChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionJPEGHighFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGHighFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionJPEGHighFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionGreyCompressionJPEGHighFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionJPEGLowFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGLowFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionJPEGLowFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionGreyCompressionJPEGLowFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionJPEGMaximumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMaximumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionJPEGMaximumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionGreyCompressionJPEGMaximumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionJPEGMediumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMediumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionJPEGMediumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionGreyCompressionJPEGMediumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyCompressionJPEGMinimumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMinimumFactor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyCompressionJPEGMinimumFactor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ double PDFCompressionGreyCompressionJPEGMinimumFactor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyResample )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionGreyResample);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyResample )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionGreyResample);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionGreyResampleChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionGreyResampleChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionGreyResolution )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionGreyResolution);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionGreyResolution )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionGreyResolution);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionMonoCompression )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionMonoCompression);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionMonoCompression )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionMonoCompression);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionMonoCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionMonoCompressionChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionMonoCompressionChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionMonoCompressionChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionMonoResample )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionMonoResample);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionMonoResample )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionMonoResample);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionMonoResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionMonoResampleChoice);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionMonoResampleChoice )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionMonoResampleChoice);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionMonoResolution )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionMonoResolution);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionMonoResolution )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionMonoResolution);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFCompressionTextCompression )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFCompressionTextCompression);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFCompressionTextCompression )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFCompressionTextCompression);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDisallowCopy )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFDisallowCopy);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFDisallowCopy )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFDisallowCopy);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDisallowModifyAnnotations )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFDisallowModifyAnnotations);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFDisallowModifyAnnotations )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFDisallowModifyAnnotations);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDisallowModifyContents )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFDisallowModifyContents);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFDisallowModifyContents )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFDisallowModifyContents);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFDisallowPrinting )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFDisallowPrinting);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFDisallowPrinting )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFDisallowPrinting);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFEncryptor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFEncryptor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFEncryptor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFEncryptor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFFontsEmbedAll )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFFontsEmbedAll);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFFontsEmbedAll )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFFontsEmbedAll);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFFontsSubSetFonts )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFFontsSubSetFonts);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFFontsSubSetFonts )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFFontsSubSetFonts);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFFontsSubSetFontsPercent )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFFontsSubSetFontsPercent);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFFontsSubSetFontsPercent )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFFontsSubSetFontsPercent);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFGeneralASCII85 )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFGeneralASCII85);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFGeneralASCII85 )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFGeneralASCII85);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFGeneralAutorotate )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFGeneralAutorotate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFGeneralAutorotate )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFGeneralAutorotate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFGeneralCompatibility )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFGeneralCompatibility);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFGeneralCompatibility )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFGeneralCompatibility);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFGeneralOverprint )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFGeneralOverprint);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFGeneralOverprint )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFGeneralOverprint);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFGeneralResolution )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFGeneralResolution);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFGeneralResolution )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFGeneralResolution);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFHighEncryption )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFHighEncryption);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFHighEncryption )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFHighEncryption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFLowEncryption )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFLowEncryption);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFLowEncryption )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFLowEncryption);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFOptimize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFOptimize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFOptimize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFOptimize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFOwnerPass )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFOwnerPass);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFOwnerPass )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFOwnerPass);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFOwnerPasswordString )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *PDFOwnerPasswordString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFOwnerPasswordString )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR PDFOwnerPasswordString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFUserPass )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFUserPass);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFUserPass )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFUserPass);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFUserPasswordString )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *PDFUserPasswordString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFUserPasswordString )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR PDFUserPasswordString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDFUseSecurity )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PDFUseSecurity);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PDFUseSecurity )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PDFUseSecurity);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PNGColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PNGColorscount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PNGColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PNGColorscount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSaving )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrintAfterSaving);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSaving )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrintAfterSaving);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSavingDuplex )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrintAfterSavingDuplex);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSavingDuplex )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrintAfterSavingDuplex);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSavingNoCancel )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrintAfterSavingNoCancel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSavingNoCancel )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrintAfterSavingNoCancel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSavingPrinter )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *PrintAfterSavingPrinter);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSavingPrinter )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR PrintAfterSavingPrinter);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSavingQueryUser )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrintAfterSavingQueryUser);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSavingQueryUser )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrintAfterSavingQueryUser);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrintAfterSavingTumble )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrintAfterSavingTumble);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrintAfterSavingTumble )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrintAfterSavingTumble);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterStop )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PrinterStop);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterStop )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PrinterStop);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrinterTemppath )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *PrinterTemppath);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrinterTemppath )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR PrinterTemppath);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcessPriority )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *ProcessPriority);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProcessPriority )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long ProcessPriority);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFont )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *ProgramFont);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProgramFont )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR ProgramFont);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFontCharset )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *ProgramFontCharset);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProgramFontCharset )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long ProgramFontCharset);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFontSize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *ProgramFontSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ProgramFontSize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long ProgramFontSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PSLanguageLevel )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *PSLanguageLevel);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PSLanguageLevel )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long PSLanguageLevel);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoveAllKnownFileExtensions )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RemoveAllKnownFileExtensions);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoveAllKnownFileExtensions )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RemoveAllKnownFileExtensions);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RemoveSpaces )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RemoveSpaces);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RemoveSpaces )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RemoveSpaces);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramAfterSaving )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RunProgramAfterSaving);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramAfterSaving )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RunProgramAfterSaving);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramAfterSavingProgramname )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *RunProgramAfterSavingProgramname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramAfterSavingProgramname )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR RunProgramAfterSavingProgramname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramAfterSavingProgramParameters )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *RunProgramAfterSavingProgramParameters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramAfterSavingProgramParameters )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR RunProgramAfterSavingProgramParameters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramAfterSavingWaitUntilReady )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RunProgramAfterSavingWaitUntilReady);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramAfterSavingWaitUntilReady )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RunProgramAfterSavingWaitUntilReady);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramAfterSavingWindowstyle )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RunProgramAfterSavingWindowstyle);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramAfterSavingWindowstyle )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RunProgramAfterSavingWindowstyle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramBeforeSaving )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RunProgramBeforeSaving);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramBeforeSaving )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RunProgramBeforeSaving);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramBeforeSavingProgramname )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramBeforeSavingProgramname )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR RunProgramBeforeSavingProgramname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramBeforeSavingProgramParameters )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramParameters);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramBeforeSavingProgramParameters )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR RunProgramBeforeSavingProgramParameters);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RunProgramBeforeSavingWindowstyle )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *RunProgramBeforeSavingWindowstyle);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_RunProgramBeforeSavingWindowstyle )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long RunProgramBeforeSavingWindowstyle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SaveFilename )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *SaveFilename);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SaveFilename )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR SaveFilename);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SendEmailAfterAutoSaving )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *SendEmailAfterAutoSaving);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SendEmailAfterAutoSaving )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long SendEmailAfterAutoSaving);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SendMailMethod )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *SendMailMethod);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SendMailMethod )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long SendMailMethod);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowAnimation )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *ShowAnimation);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ShowAnimation )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long ShowAnimation);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampFontColor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StampFontColor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampFontColor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StampFontColor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampFontname )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StampFontname);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampFontname )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StampFontname);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampFontsize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *StampFontsize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampFontsize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long StampFontsize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampOutlineFontthickness )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *StampOutlineFontthickness);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampOutlineFontthickness )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long StampOutlineFontthickness);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampString )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StampString);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampString )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StampString);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StampUseOutlineFont )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *StampUseOutlineFont);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StampUseOutlineFont )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long StampUseOutlineFont);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardAuthor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardAuthor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardAuthor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardAuthor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardCreationdate )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardCreationdate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardCreationdate )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardCreationdate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardDateformat )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardDateformat);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardDateformat )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardDateformat);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardKeywords )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardKeywords);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardKeywords )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardKeywords);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardMailDomain )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardMailDomain);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardMailDomain )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardMailDomain);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardModifydate )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardModifydate);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardModifydate )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardModifydate);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardSaveformat )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *StandardSaveformat);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardSaveformat )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long StandardSaveformat);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardSubject )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardSubject);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardSubject )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardSubject);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StandardTitle )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *StandardTitle);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StandardTitle )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR StandardTitle);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_StartStandardProgram )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *StartStandardProgram);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_StartStandardProgram )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long StartStandardProgram);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TIFFColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *TIFFColorscount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TIFFColorscount )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long TIFFColorscount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Toolbars )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *Toolbars);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Toolbars )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long Toolbars);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseAutosave )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *UseAutosave);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseAutosave )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long UseAutosave);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseAutosaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *UseAutosaveDirectory);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseAutosaveDirectory )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long UseAutosaveDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseCreationDateNow )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *UseCreationDateNow);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseCreationDateNow )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long UseCreationDateNow);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseStandardAuthor )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *UseStandardAuthor);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseStandardAuthor )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long UseStandardAuthor);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseCustomPaperSize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ BSTR *UseCustomPaperSize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseCustomPaperSize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ BSTR UseCustomPaperSize);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UseFixPapersize )( 
            _clsPDFCreatorOptions * This,
            /* [retval][out] */ long *UseFixPapersize);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UseFixPapersize )( 
            _clsPDFCreatorOptions * This,
            /* [in] */ long UseFixPapersize);
        
        END_INTERFACE
    } _clsPDFCreatorOptionsVtbl;

    interface _clsPDFCreatorOptions
    {
        CONST_VTBL struct _clsPDFCreatorOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _clsPDFCreatorOptions_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _clsPDFCreatorOptions_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _clsPDFCreatorOptions_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _clsPDFCreatorOptions_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _clsPDFCreatorOptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _clsPDFCreatorOptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _clsPDFCreatorOptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define _clsPDFCreatorOptions_get_AdditionalGhostscriptParameters(This,AdditionalGhostscriptParameters)	\
    (This)->lpVtbl -> get_AdditionalGhostscriptParameters(This,AdditionalGhostscriptParameters)

#define _clsPDFCreatorOptions_put_AdditionalGhostscriptParameters(This,AdditionalGhostscriptParameters)	\
    (This)->lpVtbl -> put_AdditionalGhostscriptParameters(This,AdditionalGhostscriptParameters)

#define _clsPDFCreatorOptions_get_AdditionalGhostscriptSearchpath(This,AdditionalGhostscriptSearchpath)	\
    (This)->lpVtbl -> get_AdditionalGhostscriptSearchpath(This,AdditionalGhostscriptSearchpath)

#define _clsPDFCreatorOptions_put_AdditionalGhostscriptSearchpath(This,AdditionalGhostscriptSearchpath)	\
    (This)->lpVtbl -> put_AdditionalGhostscriptSearchpath(This,AdditionalGhostscriptSearchpath)

#define _clsPDFCreatorOptions_get_AddWindowsFontpath(This,AddWindowsFontpath)	\
    (This)->lpVtbl -> get_AddWindowsFontpath(This,AddWindowsFontpath)

#define _clsPDFCreatorOptions_put_AddWindowsFontpath(This,AddWindowsFontpath)	\
    (This)->lpVtbl -> put_AddWindowsFontpath(This,AddWindowsFontpath)

#define _clsPDFCreatorOptions_get_AutosaveDirectory(This,AutosaveDirectory)	\
    (This)->lpVtbl -> get_AutosaveDirectory(This,AutosaveDirectory)

#define _clsPDFCreatorOptions_put_AutosaveDirectory(This,AutosaveDirectory)	\
    (This)->lpVtbl -> put_AutosaveDirectory(This,AutosaveDirectory)

#define _clsPDFCreatorOptions_get_AutosaveFilename(This,AutosaveFilename)	\
    (This)->lpVtbl -> get_AutosaveFilename(This,AutosaveFilename)

#define _clsPDFCreatorOptions_put_AutosaveFilename(This,AutosaveFilename)	\
    (This)->lpVtbl -> put_AutosaveFilename(This,AutosaveFilename)

#define _clsPDFCreatorOptions_get_AutosaveFormat(This,AutosaveFormat)	\
    (This)->lpVtbl -> get_AutosaveFormat(This,AutosaveFormat)

#define _clsPDFCreatorOptions_put_AutosaveFormat(This,AutosaveFormat)	\
    (This)->lpVtbl -> put_AutosaveFormat(This,AutosaveFormat)

#define _clsPDFCreatorOptions_get_AutosaveStartStandardProgram(This,AutosaveStartStandardProgram)	\
    (This)->lpVtbl -> get_AutosaveStartStandardProgram(This,AutosaveStartStandardProgram)

#define _clsPDFCreatorOptions_put_AutosaveStartStandardProgram(This,AutosaveStartStandardProgram)	\
    (This)->lpVtbl -> put_AutosaveStartStandardProgram(This,AutosaveStartStandardProgram)

#define _clsPDFCreatorOptions_get_BitmapResolution(This,BitmapResolution)	\
    (This)->lpVtbl -> get_BitmapResolution(This,BitmapResolution)

#define _clsPDFCreatorOptions_put_BitmapResolution(This,BitmapResolution)	\
    (This)->lpVtbl -> put_BitmapResolution(This,BitmapResolution)

#define _clsPDFCreatorOptions_get_BMPColorscount(This,BMPColorscount)	\
    (This)->lpVtbl -> get_BMPColorscount(This,BMPColorscount)

#define _clsPDFCreatorOptions_put_BMPColorscount(This,BMPColorscount)	\
    (This)->lpVtbl -> put_BMPColorscount(This,BMPColorscount)

#define _clsPDFCreatorOptions_get_ClientComputerResolveIPAddress(This,ClientComputerResolveIPAddress)	\
    (This)->lpVtbl -> get_ClientComputerResolveIPAddress(This,ClientComputerResolveIPAddress)

#define _clsPDFCreatorOptions_put_ClientComputerResolveIPAddress(This,ClientComputerResolveIPAddress)	\
    (This)->lpVtbl -> put_ClientComputerResolveIPAddress(This,ClientComputerResolveIPAddress)

#define _clsPDFCreatorOptions_get_DeviceHeightPoints(This,DeviceHeightPoints)	\
    (This)->lpVtbl -> get_DeviceHeightPoints(This,DeviceHeightPoints)

#define _clsPDFCreatorOptions_put_DeviceHeightPoints(This,DeviceHeightPoints)	\
    (This)->lpVtbl -> put_DeviceHeightPoints(This,DeviceHeightPoints)

#define _clsPDFCreatorOptions_get_DeviceWidthPoints(This,DeviceWidthPoints)	\
    (This)->lpVtbl -> get_DeviceWidthPoints(This,DeviceWidthPoints)

#define _clsPDFCreatorOptions_put_DeviceWidthPoints(This,DeviceWidthPoints)	\
    (This)->lpVtbl -> put_DeviceWidthPoints(This,DeviceWidthPoints)

#define _clsPDFCreatorOptions_get_DirectoryGhostscriptBinaries(This,DirectoryGhostscriptBinaries)	\
    (This)->lpVtbl -> get_DirectoryGhostscriptBinaries(This,DirectoryGhostscriptBinaries)

#define _clsPDFCreatorOptions_put_DirectoryGhostscriptBinaries(This,DirectoryGhostscriptBinaries)	\
    (This)->lpVtbl -> put_DirectoryGhostscriptBinaries(This,DirectoryGhostscriptBinaries)

#define _clsPDFCreatorOptions_get_DirectoryGhostscriptFonts(This,DirectoryGhostscriptFonts)	\
    (This)->lpVtbl -> get_DirectoryGhostscriptFonts(This,DirectoryGhostscriptFonts)

#define _clsPDFCreatorOptions_put_DirectoryGhostscriptFonts(This,DirectoryGhostscriptFonts)	\
    (This)->lpVtbl -> put_DirectoryGhostscriptFonts(This,DirectoryGhostscriptFonts)

#define _clsPDFCreatorOptions_get_DirectoryGhostscriptLibraries(This,DirectoryGhostscriptLibraries)	\
    (This)->lpVtbl -> get_DirectoryGhostscriptLibraries(This,DirectoryGhostscriptLibraries)

#define _clsPDFCreatorOptions_put_DirectoryGhostscriptLibraries(This,DirectoryGhostscriptLibraries)	\
    (This)->lpVtbl -> put_DirectoryGhostscriptLibraries(This,DirectoryGhostscriptLibraries)

#define _clsPDFCreatorOptions_get_DirectoryGhostscriptResource(This,DirectoryGhostscriptResource)	\
    (This)->lpVtbl -> get_DirectoryGhostscriptResource(This,DirectoryGhostscriptResource)

#define _clsPDFCreatorOptions_put_DirectoryGhostscriptResource(This,DirectoryGhostscriptResource)	\
    (This)->lpVtbl -> put_DirectoryGhostscriptResource(This,DirectoryGhostscriptResource)

#define _clsPDFCreatorOptions_get_DisableEmail(This,DisableEmail)	\
    (This)->lpVtbl -> get_DisableEmail(This,DisableEmail)

#define _clsPDFCreatorOptions_put_DisableEmail(This,DisableEmail)	\
    (This)->lpVtbl -> put_DisableEmail(This,DisableEmail)

#define _clsPDFCreatorOptions_get_DontUseDocumentSettings(This,DontUseDocumentSettings)	\
    (This)->lpVtbl -> get_DontUseDocumentSettings(This,DontUseDocumentSettings)

#define _clsPDFCreatorOptions_put_DontUseDocumentSettings(This,DontUseDocumentSettings)	\
    (This)->lpVtbl -> put_DontUseDocumentSettings(This,DontUseDocumentSettings)

#define _clsPDFCreatorOptions_get_EPSLanguageLevel(This,EPSLanguageLevel)	\
    (This)->lpVtbl -> get_EPSLanguageLevel(This,EPSLanguageLevel)

#define _clsPDFCreatorOptions_put_EPSLanguageLevel(This,EPSLanguageLevel)	\
    (This)->lpVtbl -> put_EPSLanguageLevel(This,EPSLanguageLevel)

#define _clsPDFCreatorOptions_get_FilenameSubstitutions(This,FilenameSubstitutions)	\
    (This)->lpVtbl -> get_FilenameSubstitutions(This,FilenameSubstitutions)

#define _clsPDFCreatorOptions_put_FilenameSubstitutions(This,FilenameSubstitutions)	\
    (This)->lpVtbl -> put_FilenameSubstitutions(This,FilenameSubstitutions)

#define _clsPDFCreatorOptions_get_FilenameSubstitutionsOnlyInTitle(This,FilenameSubstitutionsOnlyInTitle)	\
    (This)->lpVtbl -> get_FilenameSubstitutionsOnlyInTitle(This,FilenameSubstitutionsOnlyInTitle)

#define _clsPDFCreatorOptions_put_FilenameSubstitutionsOnlyInTitle(This,FilenameSubstitutionsOnlyInTitle)	\
    (This)->lpVtbl -> put_FilenameSubstitutionsOnlyInTitle(This,FilenameSubstitutionsOnlyInTitle)

#define _clsPDFCreatorOptions_get_JPEGColorscount(This,JPEGColorscount)	\
    (This)->lpVtbl -> get_JPEGColorscount(This,JPEGColorscount)

#define _clsPDFCreatorOptions_put_JPEGColorscount(This,JPEGColorscount)	\
    (This)->lpVtbl -> put_JPEGColorscount(This,JPEGColorscount)

#define _clsPDFCreatorOptions_get_JPEGQuality(This,JPEGQuality)	\
    (This)->lpVtbl -> get_JPEGQuality(This,JPEGQuality)

#define _clsPDFCreatorOptions_put_JPEGQuality(This,JPEGQuality)	\
    (This)->lpVtbl -> put_JPEGQuality(This,JPEGQuality)

#define _clsPDFCreatorOptions_get_Language(This,Language)	\
    (This)->lpVtbl -> get_Language(This,Language)

#define _clsPDFCreatorOptions_put_Language(This,Language)	\
    (This)->lpVtbl -> put_Language(This,Language)

#define _clsPDFCreatorOptions_get_LastSaveDirectory(This,LastSaveDirectory)	\
    (This)->lpVtbl -> get_LastSaveDirectory(This,LastSaveDirectory)

#define _clsPDFCreatorOptions_put_LastSaveDirectory(This,LastSaveDirectory)	\
    (This)->lpVtbl -> put_LastSaveDirectory(This,LastSaveDirectory)

#define _clsPDFCreatorOptions_get_Logging(This,Logging)	\
    (This)->lpVtbl -> get_Logging(This,Logging)

#define _clsPDFCreatorOptions_put_Logging(This,Logging)	\
    (This)->lpVtbl -> put_Logging(This,Logging)

#define _clsPDFCreatorOptions_get_LogLines(This,LogLines)	\
    (This)->lpVtbl -> get_LogLines(This,LogLines)

#define _clsPDFCreatorOptions_put_LogLines(This,LogLines)	\
    (This)->lpVtbl -> put_LogLines(This,LogLines)

#define _clsPDFCreatorOptions_get_NoConfirmMessageSwitchingDefaultprinter(This,NoConfirmMessageSwitchingDefaultprinter)	\
    (This)->lpVtbl -> get_NoConfirmMessageSwitchingDefaultprinter(This,NoConfirmMessageSwitchingDefaultprinter)

#define _clsPDFCreatorOptions_put_NoConfirmMessageSwitchingDefaultprinter(This,NoConfirmMessageSwitchingDefaultprinter)	\
    (This)->lpVtbl -> put_NoConfirmMessageSwitchingDefaultprinter(This,NoConfirmMessageSwitchingDefaultprinter)

#define _clsPDFCreatorOptions_get_NoProcessingAtStartup(This,NoProcessingAtStartup)	\
    (This)->lpVtbl -> get_NoProcessingAtStartup(This,NoProcessingAtStartup)

#define _clsPDFCreatorOptions_put_NoProcessingAtStartup(This,NoProcessingAtStartup)	\
    (This)->lpVtbl -> put_NoProcessingAtStartup(This,NoProcessingAtStartup)

#define _clsPDFCreatorOptions_get_NoPSCheck(This,NoPSCheck)	\
    (This)->lpVtbl -> get_NoPSCheck(This,NoPSCheck)

#define _clsPDFCreatorOptions_put_NoPSCheck(This,NoPSCheck)	\
    (This)->lpVtbl -> put_NoPSCheck(This,NoPSCheck)

#define _clsPDFCreatorOptions_get_OnePagePerFile(This,OnePagePerFile)	\
    (This)->lpVtbl -> get_OnePagePerFile(This,OnePagePerFile)

#define _clsPDFCreatorOptions_put_OnePagePerFile(This,OnePagePerFile)	\
    (This)->lpVtbl -> put_OnePagePerFile(This,OnePagePerFile)

#define _clsPDFCreatorOptions_get_OptionsDesign(This,OptionsDesign)	\
    (This)->lpVtbl -> get_OptionsDesign(This,OptionsDesign)

#define _clsPDFCreatorOptions_put_OptionsDesign(This,OptionsDesign)	\
    (This)->lpVtbl -> put_OptionsDesign(This,OptionsDesign)

#define _clsPDFCreatorOptions_get_OptionsEnabled(This,OptionsEnabled)	\
    (This)->lpVtbl -> get_OptionsEnabled(This,OptionsEnabled)

#define _clsPDFCreatorOptions_put_OptionsEnabled(This,OptionsEnabled)	\
    (This)->lpVtbl -> put_OptionsEnabled(This,OptionsEnabled)

#define _clsPDFCreatorOptions_get_OptionsVisible(This,OptionsVisible)	\
    (This)->lpVtbl -> get_OptionsVisible(This,OptionsVisible)

#define _clsPDFCreatorOptions_put_OptionsVisible(This,OptionsVisible)	\
    (This)->lpVtbl -> put_OptionsVisible(This,OptionsVisible)

#define _clsPDFCreatorOptions_get_Papersize(This,Papersize)	\
    (This)->lpVtbl -> get_Papersize(This,Papersize)

#define _clsPDFCreatorOptions_put_Papersize(This,Papersize)	\
    (This)->lpVtbl -> put_Papersize(This,Papersize)

#define _clsPDFCreatorOptions_get_PCXColorscount(This,PCXColorscount)	\
    (This)->lpVtbl -> get_PCXColorscount(This,PCXColorscount)

#define _clsPDFCreatorOptions_put_PCXColorscount(This,PCXColorscount)	\
    (This)->lpVtbl -> put_PCXColorscount(This,PCXColorscount)

#define _clsPDFCreatorOptions_get_PDFAllowAssembly(This,PDFAllowAssembly)	\
    (This)->lpVtbl -> get_PDFAllowAssembly(This,PDFAllowAssembly)

#define _clsPDFCreatorOptions_put_PDFAllowAssembly(This,PDFAllowAssembly)	\
    (This)->lpVtbl -> put_PDFAllowAssembly(This,PDFAllowAssembly)

#define _clsPDFCreatorOptions_get_PDFAllowDegradedPrinting(This,PDFAllowDegradedPrinting)	\
    (This)->lpVtbl -> get_PDFAllowDegradedPrinting(This,PDFAllowDegradedPrinting)

#define _clsPDFCreatorOptions_put_PDFAllowDegradedPrinting(This,PDFAllowDegradedPrinting)	\
    (This)->lpVtbl -> put_PDFAllowDegradedPrinting(This,PDFAllowDegradedPrinting)

#define _clsPDFCreatorOptions_get_PDFAllowFillIn(This,PDFAllowFillIn)	\
    (This)->lpVtbl -> get_PDFAllowFillIn(This,PDFAllowFillIn)

#define _clsPDFCreatorOptions_put_PDFAllowFillIn(This,PDFAllowFillIn)	\
    (This)->lpVtbl -> put_PDFAllowFillIn(This,PDFAllowFillIn)

#define _clsPDFCreatorOptions_get_PDFAllowScreenReaders(This,PDFAllowScreenReaders)	\
    (This)->lpVtbl -> get_PDFAllowScreenReaders(This,PDFAllowScreenReaders)

#define _clsPDFCreatorOptions_put_PDFAllowScreenReaders(This,PDFAllowScreenReaders)	\
    (This)->lpVtbl -> put_PDFAllowScreenReaders(This,PDFAllowScreenReaders)

#define _clsPDFCreatorOptions_get_PDFColorsCMYKToRGB(This,PDFColorsCMYKToRGB)	\
    (This)->lpVtbl -> get_PDFColorsCMYKToRGB(This,PDFColorsCMYKToRGB)

#define _clsPDFCreatorOptions_put_PDFColorsCMYKToRGB(This,PDFColorsCMYKToRGB)	\
    (This)->lpVtbl -> put_PDFColorsCMYKToRGB(This,PDFColorsCMYKToRGB)

#define _clsPDFCreatorOptions_get_PDFColorsColorModel(This,PDFColorsColorModel)	\
    (This)->lpVtbl -> get_PDFColorsColorModel(This,PDFColorsColorModel)

#define _clsPDFCreatorOptions_put_PDFColorsColorModel(This,PDFColorsColorModel)	\
    (This)->lpVtbl -> put_PDFColorsColorModel(This,PDFColorsColorModel)

#define _clsPDFCreatorOptions_get_PDFColorsPreserveHalftone(This,PDFColorsPreserveHalftone)	\
    (This)->lpVtbl -> get_PDFColorsPreserveHalftone(This,PDFColorsPreserveHalftone)

#define _clsPDFCreatorOptions_put_PDFColorsPreserveHalftone(This,PDFColorsPreserveHalftone)	\
    (This)->lpVtbl -> put_PDFColorsPreserveHalftone(This,PDFColorsPreserveHalftone)

#define _clsPDFCreatorOptions_get_PDFColorsPreserveOverprint(This,PDFColorsPreserveOverprint)	\
    (This)->lpVtbl -> get_PDFColorsPreserveOverprint(This,PDFColorsPreserveOverprint)

#define _clsPDFCreatorOptions_put_PDFColorsPreserveOverprint(This,PDFColorsPreserveOverprint)	\
    (This)->lpVtbl -> put_PDFColorsPreserveOverprint(This,PDFColorsPreserveOverprint)

#define _clsPDFCreatorOptions_get_PDFColorsPreserveTransfer(This,PDFColorsPreserveTransfer)	\
    (This)->lpVtbl -> get_PDFColorsPreserveTransfer(This,PDFColorsPreserveTransfer)

#define _clsPDFCreatorOptions_put_PDFColorsPreserveTransfer(This,PDFColorsPreserveTransfer)	\
    (This)->lpVtbl -> put_PDFColorsPreserveTransfer(This,PDFColorsPreserveTransfer)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompression(This,PDFCompressionColorCompression)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompression(This,PDFCompressionColorCompression)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompression(This,PDFCompressionColorCompression)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompression(This,PDFCompressionColorCompression)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionChoice(This,PDFCompressionColorCompressionChoice)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionChoice(This,PDFCompressionColorCompressionChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionChoice(This,PDFCompressionColorCompressionChoice)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionChoice(This,PDFCompressionColorCompressionChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGHighFactor(This,PDFCompressionColorCompressionJPEGHighFactor)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionJPEGHighFactor(This,PDFCompressionColorCompressionJPEGHighFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGHighFactor(This,PDFCompressionColorCompressionJPEGHighFactor)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionJPEGHighFactor(This,PDFCompressionColorCompressionJPEGHighFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGLowFactor(This,PDFCompressionColorCompressionJPEGLowFactor)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionJPEGLowFactor(This,PDFCompressionColorCompressionJPEGLowFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGLowFactor(This,PDFCompressionColorCompressionJPEGLowFactor)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionJPEGLowFactor(This,PDFCompressionColorCompressionJPEGLowFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMaximumFactor(This,PDFCompressionColorCompressionJPEGMaximumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionJPEGMaximumFactor(This,PDFCompressionColorCompressionJPEGMaximumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMaximumFactor(This,PDFCompressionColorCompressionJPEGMaximumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionJPEGMaximumFactor(This,PDFCompressionColorCompressionJPEGMaximumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMediumFactor(This,PDFCompressionColorCompressionJPEGMediumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionJPEGMediumFactor(This,PDFCompressionColorCompressionJPEGMediumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMediumFactor(This,PDFCompressionColorCompressionJPEGMediumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionJPEGMediumFactor(This,PDFCompressionColorCompressionJPEGMediumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMinimumFactor(This,PDFCompressionColorCompressionJPEGMinimumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionColorCompressionJPEGMinimumFactor(This,PDFCompressionColorCompressionJPEGMinimumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMinimumFactor(This,PDFCompressionColorCompressionJPEGMinimumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionColorCompressionJPEGMinimumFactor(This,PDFCompressionColorCompressionJPEGMinimumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionColorResample(This,PDFCompressionColorResample)	\
    (This)->lpVtbl -> get_PDFCompressionColorResample(This,PDFCompressionColorResample)

#define _clsPDFCreatorOptions_put_PDFCompressionColorResample(This,PDFCompressionColorResample)	\
    (This)->lpVtbl -> put_PDFCompressionColorResample(This,PDFCompressionColorResample)

#define _clsPDFCreatorOptions_get_PDFCompressionColorResampleChoice(This,PDFCompressionColorResampleChoice)	\
    (This)->lpVtbl -> get_PDFCompressionColorResampleChoice(This,PDFCompressionColorResampleChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionColorResampleChoice(This,PDFCompressionColorResampleChoice)	\
    (This)->lpVtbl -> put_PDFCompressionColorResampleChoice(This,PDFCompressionColorResampleChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionColorResolution(This,PDFCompressionColorResolution)	\
    (This)->lpVtbl -> get_PDFCompressionColorResolution(This,PDFCompressionColorResolution)

#define _clsPDFCreatorOptions_put_PDFCompressionColorResolution(This,PDFCompressionColorResolution)	\
    (This)->lpVtbl -> put_PDFCompressionColorResolution(This,PDFCompressionColorResolution)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompression(This,PDFCompressionGreyCompression)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompression(This,PDFCompressionGreyCompression)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompression(This,PDFCompressionGreyCompression)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompression(This,PDFCompressionGreyCompression)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionChoice(This,PDFCompressionGreyCompressionChoice)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionChoice(This,PDFCompressionGreyCompressionChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionChoice(This,PDFCompressionGreyCompressionChoice)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionChoice(This,PDFCompressionGreyCompressionChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGHighFactor(This,PDFCompressionGreyCompressionJPEGHighFactor)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionJPEGHighFactor(This,PDFCompressionGreyCompressionJPEGHighFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGHighFactor(This,PDFCompressionGreyCompressionJPEGHighFactor)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionJPEGHighFactor(This,PDFCompressionGreyCompressionJPEGHighFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGLowFactor(This,PDFCompressionGreyCompressionJPEGLowFactor)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionJPEGLowFactor(This,PDFCompressionGreyCompressionJPEGLowFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGLowFactor(This,PDFCompressionGreyCompressionJPEGLowFactor)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionJPEGLowFactor(This,PDFCompressionGreyCompressionJPEGLowFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMaximumFactor(This,PDFCompressionGreyCompressionJPEGMaximumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionJPEGMaximumFactor(This,PDFCompressionGreyCompressionJPEGMaximumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMaximumFactor(This,PDFCompressionGreyCompressionJPEGMaximumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionJPEGMaximumFactor(This,PDFCompressionGreyCompressionJPEGMaximumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMediumFactor(This,PDFCompressionGreyCompressionJPEGMediumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionJPEGMediumFactor(This,PDFCompressionGreyCompressionJPEGMediumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMediumFactor(This,PDFCompressionGreyCompressionJPEGMediumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionJPEGMediumFactor(This,PDFCompressionGreyCompressionJPEGMediumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMinimumFactor(This,PDFCompressionGreyCompressionJPEGMinimumFactor)	\
    (This)->lpVtbl -> get_PDFCompressionGreyCompressionJPEGMinimumFactor(This,PDFCompressionGreyCompressionJPEGMinimumFactor)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMinimumFactor(This,PDFCompressionGreyCompressionJPEGMinimumFactor)	\
    (This)->lpVtbl -> put_PDFCompressionGreyCompressionJPEGMinimumFactor(This,PDFCompressionGreyCompressionJPEGMinimumFactor)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyResample(This,PDFCompressionGreyResample)	\
    (This)->lpVtbl -> get_PDFCompressionGreyResample(This,PDFCompressionGreyResample)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyResample(This,PDFCompressionGreyResample)	\
    (This)->lpVtbl -> put_PDFCompressionGreyResample(This,PDFCompressionGreyResample)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyResampleChoice(This,PDFCompressionGreyResampleChoice)	\
    (This)->lpVtbl -> get_PDFCompressionGreyResampleChoice(This,PDFCompressionGreyResampleChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyResampleChoice(This,PDFCompressionGreyResampleChoice)	\
    (This)->lpVtbl -> put_PDFCompressionGreyResampleChoice(This,PDFCompressionGreyResampleChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionGreyResolution(This,PDFCompressionGreyResolution)	\
    (This)->lpVtbl -> get_PDFCompressionGreyResolution(This,PDFCompressionGreyResolution)

#define _clsPDFCreatorOptions_put_PDFCompressionGreyResolution(This,PDFCompressionGreyResolution)	\
    (This)->lpVtbl -> put_PDFCompressionGreyResolution(This,PDFCompressionGreyResolution)

#define _clsPDFCreatorOptions_get_PDFCompressionMonoCompression(This,PDFCompressionMonoCompression)	\
    (This)->lpVtbl -> get_PDFCompressionMonoCompression(This,PDFCompressionMonoCompression)

#define _clsPDFCreatorOptions_put_PDFCompressionMonoCompression(This,PDFCompressionMonoCompression)	\
    (This)->lpVtbl -> put_PDFCompressionMonoCompression(This,PDFCompressionMonoCompression)

#define _clsPDFCreatorOptions_get_PDFCompressionMonoCompressionChoice(This,PDFCompressionMonoCompressionChoice)	\
    (This)->lpVtbl -> get_PDFCompressionMonoCompressionChoice(This,PDFCompressionMonoCompressionChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionMonoCompressionChoice(This,PDFCompressionMonoCompressionChoice)	\
    (This)->lpVtbl -> put_PDFCompressionMonoCompressionChoice(This,PDFCompressionMonoCompressionChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionMonoResample(This,PDFCompressionMonoResample)	\
    (This)->lpVtbl -> get_PDFCompressionMonoResample(This,PDFCompressionMonoResample)

#define _clsPDFCreatorOptions_put_PDFCompressionMonoResample(This,PDFCompressionMonoResample)	\
    (This)->lpVtbl -> put_PDFCompressionMonoResample(This,PDFCompressionMonoResample)

#define _clsPDFCreatorOptions_get_PDFCompressionMonoResampleChoice(This,PDFCompressionMonoResampleChoice)	\
    (This)->lpVtbl -> get_PDFCompressionMonoResampleChoice(This,PDFCompressionMonoResampleChoice)

#define _clsPDFCreatorOptions_put_PDFCompressionMonoResampleChoice(This,PDFCompressionMonoResampleChoice)	\
    (This)->lpVtbl -> put_PDFCompressionMonoResampleChoice(This,PDFCompressionMonoResampleChoice)

#define _clsPDFCreatorOptions_get_PDFCompressionMonoResolution(This,PDFCompressionMonoResolution)	\
    (This)->lpVtbl -> get_PDFCompressionMonoResolution(This,PDFCompressionMonoResolution)

#define _clsPDFCreatorOptions_put_PDFCompressionMonoResolution(This,PDFCompressionMonoResolution)	\
    (This)->lpVtbl -> put_PDFCompressionMonoResolution(This,PDFCompressionMonoResolution)

#define _clsPDFCreatorOptions_get_PDFCompressionTextCompression(This,PDFCompressionTextCompression)	\
    (This)->lpVtbl -> get_PDFCompressionTextCompression(This,PDFCompressionTextCompression)

#define _clsPDFCreatorOptions_put_PDFCompressionTextCompression(This,PDFCompressionTextCompression)	\
    (This)->lpVtbl -> put_PDFCompressionTextCompression(This,PDFCompressionTextCompression)

#define _clsPDFCreatorOptions_get_PDFDisallowCopy(This,PDFDisallowCopy)	\
    (This)->lpVtbl -> get_PDFDisallowCopy(This,PDFDisallowCopy)

#define _clsPDFCreatorOptions_put_PDFDisallowCopy(This,PDFDisallowCopy)	\
    (This)->lpVtbl -> put_PDFDisallowCopy(This,PDFDisallowCopy)

#define _clsPDFCreatorOptions_get_PDFDisallowModifyAnnotations(This,PDFDisallowModifyAnnotations)	\
    (This)->lpVtbl -> get_PDFDisallowModifyAnnotations(This,PDFDisallowModifyAnnotations)

#define _clsPDFCreatorOptions_put_PDFDisallowModifyAnnotations(This,PDFDisallowModifyAnnotations)	\
    (This)->lpVtbl -> put_PDFDisallowModifyAnnotations(This,PDFDisallowModifyAnnotations)

#define _clsPDFCreatorOptions_get_PDFDisallowModifyContents(This,PDFDisallowModifyContents)	\
    (This)->lpVtbl -> get_PDFDisallowModifyContents(This,PDFDisallowModifyContents)

#define _clsPDFCreatorOptions_put_PDFDisallowModifyContents(This,PDFDisallowModifyContents)	\
    (This)->lpVtbl -> put_PDFDisallowModifyContents(This,PDFDisallowModifyContents)

#define _clsPDFCreatorOptions_get_PDFDisallowPrinting(This,PDFDisallowPrinting)	\
    (This)->lpVtbl -> get_PDFDisallowPrinting(This,PDFDisallowPrinting)

#define _clsPDFCreatorOptions_put_PDFDisallowPrinting(This,PDFDisallowPrinting)	\
    (This)->lpVtbl -> put_PDFDisallowPrinting(This,PDFDisallowPrinting)

#define _clsPDFCreatorOptions_get_PDFEncryptor(This,PDFEncryptor)	\
    (This)->lpVtbl -> get_PDFEncryptor(This,PDFEncryptor)

#define _clsPDFCreatorOptions_put_PDFEncryptor(This,PDFEncryptor)	\
    (This)->lpVtbl -> put_PDFEncryptor(This,PDFEncryptor)

#define _clsPDFCreatorOptions_get_PDFFontsEmbedAll(This,PDFFontsEmbedAll)	\
    (This)->lpVtbl -> get_PDFFontsEmbedAll(This,PDFFontsEmbedAll)

#define _clsPDFCreatorOptions_put_PDFFontsEmbedAll(This,PDFFontsEmbedAll)	\
    (This)->lpVtbl -> put_PDFFontsEmbedAll(This,PDFFontsEmbedAll)

#define _clsPDFCreatorOptions_get_PDFFontsSubSetFonts(This,PDFFontsSubSetFonts)	\
    (This)->lpVtbl -> get_PDFFontsSubSetFonts(This,PDFFontsSubSetFonts)

#define _clsPDFCreatorOptions_put_PDFFontsSubSetFonts(This,PDFFontsSubSetFonts)	\
    (This)->lpVtbl -> put_PDFFontsSubSetFonts(This,PDFFontsSubSetFonts)

#define _clsPDFCreatorOptions_get_PDFFontsSubSetFontsPercent(This,PDFFontsSubSetFontsPercent)	\
    (This)->lpVtbl -> get_PDFFontsSubSetFontsPercent(This,PDFFontsSubSetFontsPercent)

#define _clsPDFCreatorOptions_put_PDFFontsSubSetFontsPercent(This,PDFFontsSubSetFontsPercent)	\
    (This)->lpVtbl -> put_PDFFontsSubSetFontsPercent(This,PDFFontsSubSetFontsPercent)

#define _clsPDFCreatorOptions_get_PDFGeneralASCII85(This,PDFGeneralASCII85)	\
    (This)->lpVtbl -> get_PDFGeneralASCII85(This,PDFGeneralASCII85)

#define _clsPDFCreatorOptions_put_PDFGeneralASCII85(This,PDFGeneralASCII85)	\
    (This)->lpVtbl -> put_PDFGeneralASCII85(This,PDFGeneralASCII85)

#define _clsPDFCreatorOptions_get_PDFGeneralAutorotate(This,PDFGeneralAutorotate)	\
    (This)->lpVtbl -> get_PDFGeneralAutorotate(This,PDFGeneralAutorotate)

#define _clsPDFCreatorOptions_put_PDFGeneralAutorotate(This,PDFGeneralAutorotate)	\
    (This)->lpVtbl -> put_PDFGeneralAutorotate(This,PDFGeneralAutorotate)

#define _clsPDFCreatorOptions_get_PDFGeneralCompatibility(This,PDFGeneralCompatibility)	\
    (This)->lpVtbl -> get_PDFGeneralCompatibility(This,PDFGeneralCompatibility)

#define _clsPDFCreatorOptions_put_PDFGeneralCompatibility(This,PDFGeneralCompatibility)	\
    (This)->lpVtbl -> put_PDFGeneralCompatibility(This,PDFGeneralCompatibility)

#define _clsPDFCreatorOptions_get_PDFGeneralOverprint(This,PDFGeneralOverprint)	\
    (This)->lpVtbl -> get_PDFGeneralOverprint(This,PDFGeneralOverprint)

#define _clsPDFCreatorOptions_put_PDFGeneralOverprint(This,PDFGeneralOverprint)	\
    (This)->lpVtbl -> put_PDFGeneralOverprint(This,PDFGeneralOverprint)

#define _clsPDFCreatorOptions_get_PDFGeneralResolution(This,PDFGeneralResolution)	\
    (This)->lpVtbl -> get_PDFGeneralResolution(This,PDFGeneralResolution)

#define _clsPDFCreatorOptions_put_PDFGeneralResolution(This,PDFGeneralResolution)	\
    (This)->lpVtbl -> put_PDFGeneralResolution(This,PDFGeneralResolution)

#define _clsPDFCreatorOptions_get_PDFHighEncryption(This,PDFHighEncryption)	\
    (This)->lpVtbl -> get_PDFHighEncryption(This,PDFHighEncryption)

#define _clsPDFCreatorOptions_put_PDFHighEncryption(This,PDFHighEncryption)	\
    (This)->lpVtbl -> put_PDFHighEncryption(This,PDFHighEncryption)

#define _clsPDFCreatorOptions_get_PDFLowEncryption(This,PDFLowEncryption)	\
    (This)->lpVtbl -> get_PDFLowEncryption(This,PDFLowEncryption)

#define _clsPDFCreatorOptions_put_PDFLowEncryption(This,PDFLowEncryption)	\
    (This)->lpVtbl -> put_PDFLowEncryption(This,PDFLowEncryption)

#define _clsPDFCreatorOptions_get_PDFOptimize(This,PDFOptimize)	\
    (This)->lpVtbl -> get_PDFOptimize(This,PDFOptimize)

#define _clsPDFCreatorOptions_put_PDFOptimize(This,PDFOptimize)	\
    (This)->lpVtbl -> put_PDFOptimize(This,PDFOptimize)

#define _clsPDFCreatorOptions_get_PDFOwnerPass(This,PDFOwnerPass)	\
    (This)->lpVtbl -> get_PDFOwnerPass(This,PDFOwnerPass)

#define _clsPDFCreatorOptions_put_PDFOwnerPass(This,PDFOwnerPass)	\
    (This)->lpVtbl -> put_PDFOwnerPass(This,PDFOwnerPass)

#define _clsPDFCreatorOptions_get_PDFOwnerPasswordString(This,PDFOwnerPasswordString)	\
    (This)->lpVtbl -> get_PDFOwnerPasswordString(This,PDFOwnerPasswordString)

#define _clsPDFCreatorOptions_put_PDFOwnerPasswordString(This,PDFOwnerPasswordString)	\
    (This)->lpVtbl -> put_PDFOwnerPasswordString(This,PDFOwnerPasswordString)

#define _clsPDFCreatorOptions_get_PDFUserPass(This,PDFUserPass)	\
    (This)->lpVtbl -> get_PDFUserPass(This,PDFUserPass)

#define _clsPDFCreatorOptions_put_PDFUserPass(This,PDFUserPass)	\
    (This)->lpVtbl -> put_PDFUserPass(This,PDFUserPass)

#define _clsPDFCreatorOptions_get_PDFUserPasswordString(This,PDFUserPasswordString)	\
    (This)->lpVtbl -> get_PDFUserPasswordString(This,PDFUserPasswordString)

#define _clsPDFCreatorOptions_put_PDFUserPasswordString(This,PDFUserPasswordString)	\
    (This)->lpVtbl -> put_PDFUserPasswordString(This,PDFUserPasswordString)

#define _clsPDFCreatorOptions_get_PDFUseSecurity(This,PDFUseSecurity)	\
    (This)->lpVtbl -> get_PDFUseSecurity(This,PDFUseSecurity)

#define _clsPDFCreatorOptions_put_PDFUseSecurity(This,PDFUseSecurity)	\
    (This)->lpVtbl -> put_PDFUseSecurity(This,PDFUseSecurity)

#define _clsPDFCreatorOptions_get_PNGColorscount(This,PNGColorscount)	\
    (This)->lpVtbl -> get_PNGColorscount(This,PNGColorscount)

#define _clsPDFCreatorOptions_put_PNGColorscount(This,PNGColorscount)	\
    (This)->lpVtbl -> put_PNGColorscount(This,PNGColorscount)

#define _clsPDFCreatorOptions_get_PrintAfterSaving(This,PrintAfterSaving)	\
    (This)->lpVtbl -> get_PrintAfterSaving(This,PrintAfterSaving)

#define _clsPDFCreatorOptions_put_PrintAfterSaving(This,PrintAfterSaving)	\
    (This)->lpVtbl -> put_PrintAfterSaving(This,PrintAfterSaving)

#define _clsPDFCreatorOptions_get_PrintAfterSavingDuplex(This,PrintAfterSavingDuplex)	\
    (This)->lpVtbl -> get_PrintAfterSavingDuplex(This,PrintAfterSavingDuplex)

#define _clsPDFCreatorOptions_put_PrintAfterSavingDuplex(This,PrintAfterSavingDuplex)	\
    (This)->lpVtbl -> put_PrintAfterSavingDuplex(This,PrintAfterSavingDuplex)

#define _clsPDFCreatorOptions_get_PrintAfterSavingNoCancel(This,PrintAfterSavingNoCancel)	\
    (This)->lpVtbl -> get_PrintAfterSavingNoCancel(This,PrintAfterSavingNoCancel)

#define _clsPDFCreatorOptions_put_PrintAfterSavingNoCancel(This,PrintAfterSavingNoCancel)	\
    (This)->lpVtbl -> put_PrintAfterSavingNoCancel(This,PrintAfterSavingNoCancel)

#define _clsPDFCreatorOptions_get_PrintAfterSavingPrinter(This,PrintAfterSavingPrinter)	\
    (This)->lpVtbl -> get_PrintAfterSavingPrinter(This,PrintAfterSavingPrinter)

#define _clsPDFCreatorOptions_put_PrintAfterSavingPrinter(This,PrintAfterSavingPrinter)	\
    (This)->lpVtbl -> put_PrintAfterSavingPrinter(This,PrintAfterSavingPrinter)

#define _clsPDFCreatorOptions_get_PrintAfterSavingQueryUser(This,PrintAfterSavingQueryUser)	\
    (This)->lpVtbl -> get_PrintAfterSavingQueryUser(This,PrintAfterSavingQueryUser)

#define _clsPDFCreatorOptions_put_PrintAfterSavingQueryUser(This,PrintAfterSavingQueryUser)	\
    (This)->lpVtbl -> put_PrintAfterSavingQueryUser(This,PrintAfterSavingQueryUser)

#define _clsPDFCreatorOptions_get_PrintAfterSavingTumble(This,PrintAfterSavingTumble)	\
    (This)->lpVtbl -> get_PrintAfterSavingTumble(This,PrintAfterSavingTumble)

#define _clsPDFCreatorOptions_put_PrintAfterSavingTumble(This,PrintAfterSavingTumble)	\
    (This)->lpVtbl -> put_PrintAfterSavingTumble(This,PrintAfterSavingTumble)

#define _clsPDFCreatorOptions_get_PrinterStop(This,PrinterStop)	\
    (This)->lpVtbl -> get_PrinterStop(This,PrinterStop)

#define _clsPDFCreatorOptions_put_PrinterStop(This,PrinterStop)	\
    (This)->lpVtbl -> put_PrinterStop(This,PrinterStop)

#define _clsPDFCreatorOptions_get_PrinterTemppath(This,PrinterTemppath)	\
    (This)->lpVtbl -> get_PrinterTemppath(This,PrinterTemppath)

#define _clsPDFCreatorOptions_put_PrinterTemppath(This,PrinterTemppath)	\
    (This)->lpVtbl -> put_PrinterTemppath(This,PrinterTemppath)

#define _clsPDFCreatorOptions_get_ProcessPriority(This,ProcessPriority)	\
    (This)->lpVtbl -> get_ProcessPriority(This,ProcessPriority)

#define _clsPDFCreatorOptions_put_ProcessPriority(This,ProcessPriority)	\
    (This)->lpVtbl -> put_ProcessPriority(This,ProcessPriority)

#define _clsPDFCreatorOptions_get_ProgramFont(This,ProgramFont)	\
    (This)->lpVtbl -> get_ProgramFont(This,ProgramFont)

#define _clsPDFCreatorOptions_put_ProgramFont(This,ProgramFont)	\
    (This)->lpVtbl -> put_ProgramFont(This,ProgramFont)

#define _clsPDFCreatorOptions_get_ProgramFontCharset(This,ProgramFontCharset)	\
    (This)->lpVtbl -> get_ProgramFontCharset(This,ProgramFontCharset)

#define _clsPDFCreatorOptions_put_ProgramFontCharset(This,ProgramFontCharset)	\
    (This)->lpVtbl -> put_ProgramFontCharset(This,ProgramFontCharset)

#define _clsPDFCreatorOptions_get_ProgramFontSize(This,ProgramFontSize)	\
    (This)->lpVtbl -> get_ProgramFontSize(This,ProgramFontSize)

#define _clsPDFCreatorOptions_put_ProgramFontSize(This,ProgramFontSize)	\
    (This)->lpVtbl -> put_ProgramFontSize(This,ProgramFontSize)

#define _clsPDFCreatorOptions_get_PSLanguageLevel(This,PSLanguageLevel)	\
    (This)->lpVtbl -> get_PSLanguageLevel(This,PSLanguageLevel)

#define _clsPDFCreatorOptions_put_PSLanguageLevel(This,PSLanguageLevel)	\
    (This)->lpVtbl -> put_PSLanguageLevel(This,PSLanguageLevel)

#define _clsPDFCreatorOptions_get_RemoveAllKnownFileExtensions(This,RemoveAllKnownFileExtensions)	\
    (This)->lpVtbl -> get_RemoveAllKnownFileExtensions(This,RemoveAllKnownFileExtensions)

#define _clsPDFCreatorOptions_put_RemoveAllKnownFileExtensions(This,RemoveAllKnownFileExtensions)	\
    (This)->lpVtbl -> put_RemoveAllKnownFileExtensions(This,RemoveAllKnownFileExtensions)

#define _clsPDFCreatorOptions_get_RemoveSpaces(This,RemoveSpaces)	\
    (This)->lpVtbl -> get_RemoveSpaces(This,RemoveSpaces)

#define _clsPDFCreatorOptions_put_RemoveSpaces(This,RemoveSpaces)	\
    (This)->lpVtbl -> put_RemoveSpaces(This,RemoveSpaces)

#define _clsPDFCreatorOptions_get_RunProgramAfterSaving(This,RunProgramAfterSaving)	\
    (This)->lpVtbl -> get_RunProgramAfterSaving(This,RunProgramAfterSaving)

#define _clsPDFCreatorOptions_put_RunProgramAfterSaving(This,RunProgramAfterSaving)	\
    (This)->lpVtbl -> put_RunProgramAfterSaving(This,RunProgramAfterSaving)

#define _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramname(This,RunProgramAfterSavingProgramname)	\
    (This)->lpVtbl -> get_RunProgramAfterSavingProgramname(This,RunProgramAfterSavingProgramname)

#define _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramname(This,RunProgramAfterSavingProgramname)	\
    (This)->lpVtbl -> put_RunProgramAfterSavingProgramname(This,RunProgramAfterSavingProgramname)

#define _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramParameters(This,RunProgramAfterSavingProgramParameters)	\
    (This)->lpVtbl -> get_RunProgramAfterSavingProgramParameters(This,RunProgramAfterSavingProgramParameters)

#define _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramParameters(This,RunProgramAfterSavingProgramParameters)	\
    (This)->lpVtbl -> put_RunProgramAfterSavingProgramParameters(This,RunProgramAfterSavingProgramParameters)

#define _clsPDFCreatorOptions_get_RunProgramAfterSavingWaitUntilReady(This,RunProgramAfterSavingWaitUntilReady)	\
    (This)->lpVtbl -> get_RunProgramAfterSavingWaitUntilReady(This,RunProgramAfterSavingWaitUntilReady)

#define _clsPDFCreatorOptions_put_RunProgramAfterSavingWaitUntilReady(This,RunProgramAfterSavingWaitUntilReady)	\
    (This)->lpVtbl -> put_RunProgramAfterSavingWaitUntilReady(This,RunProgramAfterSavingWaitUntilReady)

#define _clsPDFCreatorOptions_get_RunProgramAfterSavingWindowstyle(This,RunProgramAfterSavingWindowstyle)	\
    (This)->lpVtbl -> get_RunProgramAfterSavingWindowstyle(This,RunProgramAfterSavingWindowstyle)

#define _clsPDFCreatorOptions_put_RunProgramAfterSavingWindowstyle(This,RunProgramAfterSavingWindowstyle)	\
    (This)->lpVtbl -> put_RunProgramAfterSavingWindowstyle(This,RunProgramAfterSavingWindowstyle)

#define _clsPDFCreatorOptions_get_RunProgramBeforeSaving(This,RunProgramBeforeSaving)	\
    (This)->lpVtbl -> get_RunProgramBeforeSaving(This,RunProgramBeforeSaving)

#define _clsPDFCreatorOptions_put_RunProgramBeforeSaving(This,RunProgramBeforeSaving)	\
    (This)->lpVtbl -> put_RunProgramBeforeSaving(This,RunProgramBeforeSaving)

#define _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramname(This,RunProgramBeforeSavingProgramname)	\
    (This)->lpVtbl -> get_RunProgramBeforeSavingProgramname(This,RunProgramBeforeSavingProgramname)

#define _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramname(This,RunProgramBeforeSavingProgramname)	\
    (This)->lpVtbl -> put_RunProgramBeforeSavingProgramname(This,RunProgramBeforeSavingProgramname)

#define _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramParameters(This,RunProgramBeforeSavingProgramParameters)	\
    (This)->lpVtbl -> get_RunProgramBeforeSavingProgramParameters(This,RunProgramBeforeSavingProgramParameters)

#define _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramParameters(This,RunProgramBeforeSavingProgramParameters)	\
    (This)->lpVtbl -> put_RunProgramBeforeSavingProgramParameters(This,RunProgramBeforeSavingProgramParameters)

#define _clsPDFCreatorOptions_get_RunProgramBeforeSavingWindowstyle(This,RunProgramBeforeSavingWindowstyle)	\
    (This)->lpVtbl -> get_RunProgramBeforeSavingWindowstyle(This,RunProgramBeforeSavingWindowstyle)

#define _clsPDFCreatorOptions_put_RunProgramBeforeSavingWindowstyle(This,RunProgramBeforeSavingWindowstyle)	\
    (This)->lpVtbl -> put_RunProgramBeforeSavingWindowstyle(This,RunProgramBeforeSavingWindowstyle)

#define _clsPDFCreatorOptions_get_SaveFilename(This,SaveFilename)	\
    (This)->lpVtbl -> get_SaveFilename(This,SaveFilename)

#define _clsPDFCreatorOptions_put_SaveFilename(This,SaveFilename)	\
    (This)->lpVtbl -> put_SaveFilename(This,SaveFilename)

#define _clsPDFCreatorOptions_get_SendEmailAfterAutoSaving(This,SendEmailAfterAutoSaving)	\
    (This)->lpVtbl -> get_SendEmailAfterAutoSaving(This,SendEmailAfterAutoSaving)

#define _clsPDFCreatorOptions_put_SendEmailAfterAutoSaving(This,SendEmailAfterAutoSaving)	\
    (This)->lpVtbl -> put_SendEmailAfterAutoSaving(This,SendEmailAfterAutoSaving)

#define _clsPDFCreatorOptions_get_SendMailMethod(This,SendMailMethod)	\
    (This)->lpVtbl -> get_SendMailMethod(This,SendMailMethod)

#define _clsPDFCreatorOptions_put_SendMailMethod(This,SendMailMethod)	\
    (This)->lpVtbl -> put_SendMailMethod(This,SendMailMethod)

#define _clsPDFCreatorOptions_get_ShowAnimation(This,ShowAnimation)	\
    (This)->lpVtbl -> get_ShowAnimation(This,ShowAnimation)

#define _clsPDFCreatorOptions_put_ShowAnimation(This,ShowAnimation)	\
    (This)->lpVtbl -> put_ShowAnimation(This,ShowAnimation)

#define _clsPDFCreatorOptions_get_StampFontColor(This,StampFontColor)	\
    (This)->lpVtbl -> get_StampFontColor(This,StampFontColor)

#define _clsPDFCreatorOptions_put_StampFontColor(This,StampFontColor)	\
    (This)->lpVtbl -> put_StampFontColor(This,StampFontColor)

#define _clsPDFCreatorOptions_get_StampFontname(This,StampFontname)	\
    (This)->lpVtbl -> get_StampFontname(This,StampFontname)

#define _clsPDFCreatorOptions_put_StampFontname(This,StampFontname)	\
    (This)->lpVtbl -> put_StampFontname(This,StampFontname)

#define _clsPDFCreatorOptions_get_StampFontsize(This,StampFontsize)	\
    (This)->lpVtbl -> get_StampFontsize(This,StampFontsize)

#define _clsPDFCreatorOptions_put_StampFontsize(This,StampFontsize)	\
    (This)->lpVtbl -> put_StampFontsize(This,StampFontsize)

#define _clsPDFCreatorOptions_get_StampOutlineFontthickness(This,StampOutlineFontthickness)	\
    (This)->lpVtbl -> get_StampOutlineFontthickness(This,StampOutlineFontthickness)

#define _clsPDFCreatorOptions_put_StampOutlineFontthickness(This,StampOutlineFontthickness)	\
    (This)->lpVtbl -> put_StampOutlineFontthickness(This,StampOutlineFontthickness)

#define _clsPDFCreatorOptions_get_StampString(This,StampString)	\
    (This)->lpVtbl -> get_StampString(This,StampString)

#define _clsPDFCreatorOptions_put_StampString(This,StampString)	\
    (This)->lpVtbl -> put_StampString(This,StampString)

#define _clsPDFCreatorOptions_get_StampUseOutlineFont(This,StampUseOutlineFont)	\
    (This)->lpVtbl -> get_StampUseOutlineFont(This,StampUseOutlineFont)

#define _clsPDFCreatorOptions_put_StampUseOutlineFont(This,StampUseOutlineFont)	\
    (This)->lpVtbl -> put_StampUseOutlineFont(This,StampUseOutlineFont)

#define _clsPDFCreatorOptions_get_StandardAuthor(This,StandardAuthor)	\
    (This)->lpVtbl -> get_StandardAuthor(This,StandardAuthor)

#define _clsPDFCreatorOptions_put_StandardAuthor(This,StandardAuthor)	\
    (This)->lpVtbl -> put_StandardAuthor(This,StandardAuthor)

#define _clsPDFCreatorOptions_get_StandardCreationdate(This,StandardCreationdate)	\
    (This)->lpVtbl -> get_StandardCreationdate(This,StandardCreationdate)

#define _clsPDFCreatorOptions_put_StandardCreationdate(This,StandardCreationdate)	\
    (This)->lpVtbl -> put_StandardCreationdate(This,StandardCreationdate)

#define _clsPDFCreatorOptions_get_StandardDateformat(This,StandardDateformat)	\
    (This)->lpVtbl -> get_StandardDateformat(This,StandardDateformat)

#define _clsPDFCreatorOptions_put_StandardDateformat(This,StandardDateformat)	\
    (This)->lpVtbl -> put_StandardDateformat(This,StandardDateformat)

#define _clsPDFCreatorOptions_get_StandardKeywords(This,StandardKeywords)	\
    (This)->lpVtbl -> get_StandardKeywords(This,StandardKeywords)

#define _clsPDFCreatorOptions_put_StandardKeywords(This,StandardKeywords)	\
    (This)->lpVtbl -> put_StandardKeywords(This,StandardKeywords)

#define _clsPDFCreatorOptions_get_StandardMailDomain(This,StandardMailDomain)	\
    (This)->lpVtbl -> get_StandardMailDomain(This,StandardMailDomain)

#define _clsPDFCreatorOptions_put_StandardMailDomain(This,StandardMailDomain)	\
    (This)->lpVtbl -> put_StandardMailDomain(This,StandardMailDomain)

#define _clsPDFCreatorOptions_get_StandardModifydate(This,StandardModifydate)	\
    (This)->lpVtbl -> get_StandardModifydate(This,StandardModifydate)

#define _clsPDFCreatorOptions_put_StandardModifydate(This,StandardModifydate)	\
    (This)->lpVtbl -> put_StandardModifydate(This,StandardModifydate)

#define _clsPDFCreatorOptions_get_StandardSaveformat(This,StandardSaveformat)	\
    (This)->lpVtbl -> get_StandardSaveformat(This,StandardSaveformat)

#define _clsPDFCreatorOptions_put_StandardSaveformat(This,StandardSaveformat)	\
    (This)->lpVtbl -> put_StandardSaveformat(This,StandardSaveformat)

#define _clsPDFCreatorOptions_get_StandardSubject(This,StandardSubject)	\
    (This)->lpVtbl -> get_StandardSubject(This,StandardSubject)

#define _clsPDFCreatorOptions_put_StandardSubject(This,StandardSubject)	\
    (This)->lpVtbl -> put_StandardSubject(This,StandardSubject)

#define _clsPDFCreatorOptions_get_StandardTitle(This,StandardTitle)	\
    (This)->lpVtbl -> get_StandardTitle(This,StandardTitle)

#define _clsPDFCreatorOptions_put_StandardTitle(This,StandardTitle)	\
    (This)->lpVtbl -> put_StandardTitle(This,StandardTitle)

#define _clsPDFCreatorOptions_get_StartStandardProgram(This,StartStandardProgram)	\
    (This)->lpVtbl -> get_StartStandardProgram(This,StartStandardProgram)

#define _clsPDFCreatorOptions_put_StartStandardProgram(This,StartStandardProgram)	\
    (This)->lpVtbl -> put_StartStandardProgram(This,StartStandardProgram)

#define _clsPDFCreatorOptions_get_TIFFColorscount(This,TIFFColorscount)	\
    (This)->lpVtbl -> get_TIFFColorscount(This,TIFFColorscount)

#define _clsPDFCreatorOptions_put_TIFFColorscount(This,TIFFColorscount)	\
    (This)->lpVtbl -> put_TIFFColorscount(This,TIFFColorscount)

#define _clsPDFCreatorOptions_get_Toolbars(This,Toolbars)	\
    (This)->lpVtbl -> get_Toolbars(This,Toolbars)

#define _clsPDFCreatorOptions_put_Toolbars(This,Toolbars)	\
    (This)->lpVtbl -> put_Toolbars(This,Toolbars)

#define _clsPDFCreatorOptions_get_UseAutosave(This,UseAutosave)	\
    (This)->lpVtbl -> get_UseAutosave(This,UseAutosave)

#define _clsPDFCreatorOptions_put_UseAutosave(This,UseAutosave)	\
    (This)->lpVtbl -> put_UseAutosave(This,UseAutosave)

#define _clsPDFCreatorOptions_get_UseAutosaveDirectory(This,UseAutosaveDirectory)	\
    (This)->lpVtbl -> get_UseAutosaveDirectory(This,UseAutosaveDirectory)

#define _clsPDFCreatorOptions_put_UseAutosaveDirectory(This,UseAutosaveDirectory)	\
    (This)->lpVtbl -> put_UseAutosaveDirectory(This,UseAutosaveDirectory)

#define _clsPDFCreatorOptions_get_UseCreationDateNow(This,UseCreationDateNow)	\
    (This)->lpVtbl -> get_UseCreationDateNow(This,UseCreationDateNow)

#define _clsPDFCreatorOptions_put_UseCreationDateNow(This,UseCreationDateNow)	\
    (This)->lpVtbl -> put_UseCreationDateNow(This,UseCreationDateNow)

#define _clsPDFCreatorOptions_get_UseStandardAuthor(This,UseStandardAuthor)	\
    (This)->lpVtbl -> get_UseStandardAuthor(This,UseStandardAuthor)

#define _clsPDFCreatorOptions_put_UseStandardAuthor(This,UseStandardAuthor)	\
    (This)->lpVtbl -> put_UseStandardAuthor(This,UseStandardAuthor)

#define _clsPDFCreatorOptions_get_UseCustomPaperSize(This,UseCustomPaperSize)	\
    (This)->lpVtbl -> get_UseCustomPaperSize(This,UseCustomPaperSize)

#define _clsPDFCreatorOptions_put_UseCustomPaperSize(This,UseCustomPaperSize)	\
    (This)->lpVtbl -> put_UseCustomPaperSize(This,UseCustomPaperSize)

#define _clsPDFCreatorOptions_get_UseFixPapersize(This,UseFixPapersize)	\
    (This)->lpVtbl -> get_UseFixPapersize(This,UseFixPapersize)

#define _clsPDFCreatorOptions_put_UseFixPapersize(This,UseFixPapersize)	\
    (This)->lpVtbl -> put_UseFixPapersize(This,UseFixPapersize)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AdditionalGhostscriptParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *AdditionalGhostscriptParameters);


void __RPC_STUB _clsPDFCreatorOptions_get_AdditionalGhostscriptParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AdditionalGhostscriptParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR AdditionalGhostscriptParameters);


void __RPC_STUB _clsPDFCreatorOptions_put_AdditionalGhostscriptParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AdditionalGhostscriptSearchpath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *AdditionalGhostscriptSearchpath);


void __RPC_STUB _clsPDFCreatorOptions_get_AdditionalGhostscriptSearchpath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AdditionalGhostscriptSearchpath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR AdditionalGhostscriptSearchpath);


void __RPC_STUB _clsPDFCreatorOptions_put_AdditionalGhostscriptSearchpath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AddWindowsFontpath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *AddWindowsFontpath);


void __RPC_STUB _clsPDFCreatorOptions_get_AddWindowsFontpath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AddWindowsFontpath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long AddWindowsFontpath);


void __RPC_STUB _clsPDFCreatorOptions_put_AddWindowsFontpath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AutosaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *AutosaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_get_AutosaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AutosaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR AutosaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_put_AutosaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AutosaveFilename_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *AutosaveFilename);


void __RPC_STUB _clsPDFCreatorOptions_get_AutosaveFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AutosaveFilename_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR AutosaveFilename);


void __RPC_STUB _clsPDFCreatorOptions_put_AutosaveFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AutosaveFormat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *AutosaveFormat);


void __RPC_STUB _clsPDFCreatorOptions_get_AutosaveFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AutosaveFormat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long AutosaveFormat);


void __RPC_STUB _clsPDFCreatorOptions_put_AutosaveFormat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_AutosaveStartStandardProgram_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *AutosaveStartStandardProgram);


void __RPC_STUB _clsPDFCreatorOptions_get_AutosaveStartStandardProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_AutosaveStartStandardProgram_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long AutosaveStartStandardProgram);


void __RPC_STUB _clsPDFCreatorOptions_put_AutosaveStartStandardProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_BitmapResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *BitmapResolution);


void __RPC_STUB _clsPDFCreatorOptions_get_BitmapResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_BitmapResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long BitmapResolution);


void __RPC_STUB _clsPDFCreatorOptions_put_BitmapResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_BMPColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *BMPColorscount);


void __RPC_STUB _clsPDFCreatorOptions_get_BMPColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_BMPColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long BMPColorscount);


void __RPC_STUB _clsPDFCreatorOptions_put_BMPColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ClientComputerResolveIPAddress_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *ClientComputerResolveIPAddress);


void __RPC_STUB _clsPDFCreatorOptions_get_ClientComputerResolveIPAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ClientComputerResolveIPAddress_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long ClientComputerResolveIPAddress);


void __RPC_STUB _clsPDFCreatorOptions_put_ClientComputerResolveIPAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DeviceHeightPoints_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *DeviceHeightPoints);


void __RPC_STUB _clsPDFCreatorOptions_get_DeviceHeightPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DeviceHeightPoints_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double DeviceHeightPoints);


void __RPC_STUB _clsPDFCreatorOptions_put_DeviceHeightPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DeviceWidthPoints_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *DeviceWidthPoints);


void __RPC_STUB _clsPDFCreatorOptions_get_DeviceWidthPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DeviceWidthPoints_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double DeviceWidthPoints);


void __RPC_STUB _clsPDFCreatorOptions_put_DeviceWidthPoints_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DirectoryGhostscriptBinaries_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *DirectoryGhostscriptBinaries);


void __RPC_STUB _clsPDFCreatorOptions_get_DirectoryGhostscriptBinaries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DirectoryGhostscriptBinaries_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR DirectoryGhostscriptBinaries);


void __RPC_STUB _clsPDFCreatorOptions_put_DirectoryGhostscriptBinaries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DirectoryGhostscriptFonts_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *DirectoryGhostscriptFonts);


void __RPC_STUB _clsPDFCreatorOptions_get_DirectoryGhostscriptFonts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DirectoryGhostscriptFonts_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR DirectoryGhostscriptFonts);


void __RPC_STUB _clsPDFCreatorOptions_put_DirectoryGhostscriptFonts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DirectoryGhostscriptLibraries_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *DirectoryGhostscriptLibraries);


void __RPC_STUB _clsPDFCreatorOptions_get_DirectoryGhostscriptLibraries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DirectoryGhostscriptLibraries_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR DirectoryGhostscriptLibraries);


void __RPC_STUB _clsPDFCreatorOptions_put_DirectoryGhostscriptLibraries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DirectoryGhostscriptResource_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *DirectoryGhostscriptResource);


void __RPC_STUB _clsPDFCreatorOptions_get_DirectoryGhostscriptResource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DirectoryGhostscriptResource_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR DirectoryGhostscriptResource);


void __RPC_STUB _clsPDFCreatorOptions_put_DirectoryGhostscriptResource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DisableEmail_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *DisableEmail);


void __RPC_STUB _clsPDFCreatorOptions_get_DisableEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DisableEmail_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long DisableEmail);


void __RPC_STUB _clsPDFCreatorOptions_put_DisableEmail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_DontUseDocumentSettings_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *DontUseDocumentSettings);


void __RPC_STUB _clsPDFCreatorOptions_get_DontUseDocumentSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_DontUseDocumentSettings_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long DontUseDocumentSettings);


void __RPC_STUB _clsPDFCreatorOptions_put_DontUseDocumentSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_EPSLanguageLevel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *EPSLanguageLevel);


void __RPC_STUB _clsPDFCreatorOptions_get_EPSLanguageLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_EPSLanguageLevel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long EPSLanguageLevel);


void __RPC_STUB _clsPDFCreatorOptions_put_EPSLanguageLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_FilenameSubstitutions_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *FilenameSubstitutions);


void __RPC_STUB _clsPDFCreatorOptions_get_FilenameSubstitutions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_FilenameSubstitutions_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR FilenameSubstitutions);


void __RPC_STUB _clsPDFCreatorOptions_put_FilenameSubstitutions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_FilenameSubstitutionsOnlyInTitle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *FilenameSubstitutionsOnlyInTitle);


void __RPC_STUB _clsPDFCreatorOptions_get_FilenameSubstitutionsOnlyInTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_FilenameSubstitutionsOnlyInTitle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long FilenameSubstitutionsOnlyInTitle);


void __RPC_STUB _clsPDFCreatorOptions_put_FilenameSubstitutionsOnlyInTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_JPEGColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *JPEGColorscount);


void __RPC_STUB _clsPDFCreatorOptions_get_JPEGColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_JPEGColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long JPEGColorscount);


void __RPC_STUB _clsPDFCreatorOptions_put_JPEGColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_JPEGQuality_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *JPEGQuality);


void __RPC_STUB _clsPDFCreatorOptions_get_JPEGQuality_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_JPEGQuality_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long JPEGQuality);


void __RPC_STUB _clsPDFCreatorOptions_put_JPEGQuality_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_Language_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *Language);


void __RPC_STUB _clsPDFCreatorOptions_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_Language_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR Language);


void __RPC_STUB _clsPDFCreatorOptions_put_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_LastSaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *LastSaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_get_LastSaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_LastSaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR LastSaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_put_LastSaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_Logging_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *Logging);


void __RPC_STUB _clsPDFCreatorOptions_get_Logging_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_Logging_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long Logging);


void __RPC_STUB _clsPDFCreatorOptions_put_Logging_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_LogLines_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *LogLines);


void __RPC_STUB _clsPDFCreatorOptions_get_LogLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_LogLines_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long LogLines);


void __RPC_STUB _clsPDFCreatorOptions_put_LogLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_NoConfirmMessageSwitchingDefaultprinter_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *NoConfirmMessageSwitchingDefaultprinter);


void __RPC_STUB _clsPDFCreatorOptions_get_NoConfirmMessageSwitchingDefaultprinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_NoConfirmMessageSwitchingDefaultprinter_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long NoConfirmMessageSwitchingDefaultprinter);


void __RPC_STUB _clsPDFCreatorOptions_put_NoConfirmMessageSwitchingDefaultprinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_NoProcessingAtStartup_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *NoProcessingAtStartup);


void __RPC_STUB _clsPDFCreatorOptions_get_NoProcessingAtStartup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_NoProcessingAtStartup_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long NoProcessingAtStartup);


void __RPC_STUB _clsPDFCreatorOptions_put_NoProcessingAtStartup_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_NoPSCheck_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *NoPSCheck);


void __RPC_STUB _clsPDFCreatorOptions_get_NoPSCheck_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_NoPSCheck_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long NoPSCheck);


void __RPC_STUB _clsPDFCreatorOptions_put_NoPSCheck_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_OnePagePerFile_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *OnePagePerFile);


void __RPC_STUB _clsPDFCreatorOptions_get_OnePagePerFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_OnePagePerFile_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long OnePagePerFile);


void __RPC_STUB _clsPDFCreatorOptions_put_OnePagePerFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_OptionsDesign_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *OptionsDesign);


void __RPC_STUB _clsPDFCreatorOptions_get_OptionsDesign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_OptionsDesign_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long OptionsDesign);


void __RPC_STUB _clsPDFCreatorOptions_put_OptionsDesign_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_OptionsEnabled_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *OptionsEnabled);


void __RPC_STUB _clsPDFCreatorOptions_get_OptionsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_OptionsEnabled_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long OptionsEnabled);


void __RPC_STUB _clsPDFCreatorOptions_put_OptionsEnabled_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_OptionsVisible_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *OptionsVisible);


void __RPC_STUB _clsPDFCreatorOptions_get_OptionsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_OptionsVisible_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long OptionsVisible);


void __RPC_STUB _clsPDFCreatorOptions_put_OptionsVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_Papersize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *Papersize);


void __RPC_STUB _clsPDFCreatorOptions_get_Papersize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_Papersize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR Papersize);


void __RPC_STUB _clsPDFCreatorOptions_put_Papersize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PCXColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PCXColorscount);


void __RPC_STUB _clsPDFCreatorOptions_get_PCXColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PCXColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PCXColorscount);


void __RPC_STUB _clsPDFCreatorOptions_put_PCXColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFAllowAssembly_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFAllowAssembly);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFAllowAssembly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFAllowAssembly_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFAllowAssembly);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFAllowAssembly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFAllowDegradedPrinting_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFAllowDegradedPrinting);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFAllowDegradedPrinting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFAllowDegradedPrinting_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFAllowDegradedPrinting);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFAllowDegradedPrinting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFAllowFillIn_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFAllowFillIn);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFAllowFillIn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFAllowFillIn_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFAllowFillIn);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFAllowFillIn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFAllowScreenReaders_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFAllowScreenReaders);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFAllowScreenReaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFAllowScreenReaders_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFAllowScreenReaders);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFAllowScreenReaders_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFColorsCMYKToRGB_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFColorsCMYKToRGB);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFColorsCMYKToRGB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFColorsCMYKToRGB_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFColorsCMYKToRGB);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFColorsCMYKToRGB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFColorsColorModel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFColorsColorModel);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFColorsColorModel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFColorsColorModel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFColorsColorModel);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFColorsColorModel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFColorsPreserveHalftone_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFColorsPreserveHalftone);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFColorsPreserveHalftone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFColorsPreserveHalftone_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFColorsPreserveHalftone);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFColorsPreserveHalftone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFColorsPreserveOverprint_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFColorsPreserveOverprint);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFColorsPreserveOverprint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFColorsPreserveOverprint_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFColorsPreserveOverprint);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFColorsPreserveOverprint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFColorsPreserveTransfer_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFColorsPreserveTransfer);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFColorsPreserveTransfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFColorsPreserveTransfer_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFColorsPreserveTransfer);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFColorsPreserveTransfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionColorCompression);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionColorCompression);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionColorCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionColorCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGHighFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionColorCompressionJPEGHighFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGHighFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGHighFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionColorCompressionJPEGHighFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGHighFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGLowFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionColorCompressionJPEGLowFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGLowFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGLowFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionColorCompressionJPEGLowFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGLowFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMaximumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMaximumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMaximumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMaximumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionColorCompressionJPEGMaximumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMaximumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMediumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMediumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMediumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMediumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionColorCompressionJPEGMediumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMediumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMinimumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionColorCompressionJPEGMinimumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorCompressionJPEGMinimumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMinimumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionColorCompressionJPEGMinimumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorCompressionJPEGMinimumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionColorResample);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionColorResample);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionColorResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionColorResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionColorResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionColorResolution);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionColorResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionColorResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionColorResolution);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionColorResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionGreyCompression);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionGreyCompression);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionGreyCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionGreyCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGHighFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGHighFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGHighFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGHighFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionGreyCompressionJPEGHighFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGHighFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGLowFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGLowFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGLowFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGLowFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionGreyCompressionJPEGLowFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGLowFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMaximumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMaximumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMaximumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMaximumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionGreyCompressionJPEGMaximumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMaximumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMediumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMediumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMediumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMediumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionGreyCompressionJPEGMediumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMediumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMinimumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ double *PDFCompressionGreyCompressionJPEGMinimumFactor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyCompressionJPEGMinimumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMinimumFactor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ double PDFCompressionGreyCompressionJPEGMinimumFactor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyCompressionJPEGMinimumFactor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionGreyResample);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionGreyResample);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionGreyResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionGreyResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionGreyResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionGreyResolution);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionGreyResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionGreyResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionGreyResolution);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionGreyResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionMonoCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionMonoCompression);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionMonoCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionMonoCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionMonoCompression);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionMonoCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionMonoCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionMonoCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionMonoCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionMonoCompressionChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionMonoCompressionChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionMonoCompressionChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionMonoResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionMonoResample);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionMonoResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionMonoResample_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionMonoResample);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionMonoResample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionMonoResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionMonoResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionMonoResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionMonoResampleChoice_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionMonoResampleChoice);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionMonoResampleChoice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionMonoResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionMonoResolution);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionMonoResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionMonoResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionMonoResolution);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionMonoResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFCompressionTextCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFCompressionTextCompression);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFCompressionTextCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFCompressionTextCompression_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFCompressionTextCompression);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFCompressionTextCompression_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFDisallowCopy_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFDisallowCopy);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFDisallowCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFDisallowCopy_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFDisallowCopy);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFDisallowCopy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFDisallowModifyAnnotations_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFDisallowModifyAnnotations);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFDisallowModifyAnnotations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFDisallowModifyAnnotations_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFDisallowModifyAnnotations);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFDisallowModifyAnnotations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFDisallowModifyContents_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFDisallowModifyContents);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFDisallowModifyContents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFDisallowModifyContents_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFDisallowModifyContents);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFDisallowModifyContents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFDisallowPrinting_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFDisallowPrinting);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFDisallowPrinting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFDisallowPrinting_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFDisallowPrinting);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFDisallowPrinting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFEncryptor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFEncryptor);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFEncryptor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFEncryptor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFEncryptor);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFEncryptor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFFontsEmbedAll_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFFontsEmbedAll);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFFontsEmbedAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFFontsEmbedAll_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFFontsEmbedAll);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFFontsEmbedAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFFontsSubSetFonts_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFFontsSubSetFonts);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFFontsSubSetFonts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFFontsSubSetFonts_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFFontsSubSetFonts);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFFontsSubSetFonts_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFFontsSubSetFontsPercent_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFFontsSubSetFontsPercent);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFFontsSubSetFontsPercent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFFontsSubSetFontsPercent_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFFontsSubSetFontsPercent);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFFontsSubSetFontsPercent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFGeneralASCII85_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFGeneralASCII85);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFGeneralASCII85_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFGeneralASCII85_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFGeneralASCII85);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFGeneralASCII85_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFGeneralAutorotate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFGeneralAutorotate);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFGeneralAutorotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFGeneralAutorotate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFGeneralAutorotate);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFGeneralAutorotate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFGeneralCompatibility_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFGeneralCompatibility);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFGeneralCompatibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFGeneralCompatibility_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFGeneralCompatibility);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFGeneralCompatibility_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFGeneralOverprint_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFGeneralOverprint);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFGeneralOverprint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFGeneralOverprint_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFGeneralOverprint);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFGeneralOverprint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFGeneralResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFGeneralResolution);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFGeneralResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFGeneralResolution_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFGeneralResolution);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFGeneralResolution_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFHighEncryption_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFHighEncryption);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFHighEncryption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFHighEncryption_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFHighEncryption);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFHighEncryption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFLowEncryption_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFLowEncryption);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFLowEncryption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFLowEncryption_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFLowEncryption);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFLowEncryption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFOptimize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFOptimize);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFOptimize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFOptimize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFOptimize);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFOptimize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFOwnerPass_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFOwnerPass);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFOwnerPass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFOwnerPass_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFOwnerPass);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFOwnerPass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFOwnerPasswordString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *PDFOwnerPasswordString);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFOwnerPasswordString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFOwnerPasswordString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR PDFOwnerPasswordString);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFOwnerPasswordString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFUserPass_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFUserPass);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFUserPass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFUserPass_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFUserPass);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFUserPass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFUserPasswordString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *PDFUserPasswordString);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFUserPasswordString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFUserPasswordString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR PDFUserPasswordString);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFUserPasswordString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PDFUseSecurity_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PDFUseSecurity);


void __RPC_STUB _clsPDFCreatorOptions_get_PDFUseSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PDFUseSecurity_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PDFUseSecurity);


void __RPC_STUB _clsPDFCreatorOptions_put_PDFUseSecurity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PNGColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PNGColorscount);


void __RPC_STUB _clsPDFCreatorOptions_get_PNGColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PNGColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PNGColorscount);


void __RPC_STUB _clsPDFCreatorOptions_put_PNGColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrintAfterSaving);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrintAfterSaving);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSavingDuplex_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrintAfterSavingDuplex);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSavingDuplex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSavingDuplex_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrintAfterSavingDuplex);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSavingDuplex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSavingNoCancel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrintAfterSavingNoCancel);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSavingNoCancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSavingNoCancel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrintAfterSavingNoCancel);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSavingNoCancel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSavingPrinter_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *PrintAfterSavingPrinter);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSavingPrinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSavingPrinter_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR PrintAfterSavingPrinter);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSavingPrinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSavingQueryUser_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrintAfterSavingQueryUser);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSavingQueryUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSavingQueryUser_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrintAfterSavingQueryUser);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSavingQueryUser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrintAfterSavingTumble_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrintAfterSavingTumble);


void __RPC_STUB _clsPDFCreatorOptions_get_PrintAfterSavingTumble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrintAfterSavingTumble_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrintAfterSavingTumble);


void __RPC_STUB _clsPDFCreatorOptions_put_PrintAfterSavingTumble_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrinterStop_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PrinterStop);


void __RPC_STUB _clsPDFCreatorOptions_get_PrinterStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrinterStop_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PrinterStop);


void __RPC_STUB _clsPDFCreatorOptions_put_PrinterStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PrinterTemppath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *PrinterTemppath);


void __RPC_STUB _clsPDFCreatorOptions_get_PrinterTemppath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PrinterTemppath_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR PrinterTemppath);


void __RPC_STUB _clsPDFCreatorOptions_put_PrinterTemppath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ProcessPriority_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *ProcessPriority);


void __RPC_STUB _clsPDFCreatorOptions_get_ProcessPriority_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ProcessPriority_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long ProcessPriority);


void __RPC_STUB _clsPDFCreatorOptions_put_ProcessPriority_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ProgramFont_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *ProgramFont);


void __RPC_STUB _clsPDFCreatorOptions_get_ProgramFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ProgramFont_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR ProgramFont);


void __RPC_STUB _clsPDFCreatorOptions_put_ProgramFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ProgramFontCharset_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *ProgramFontCharset);


void __RPC_STUB _clsPDFCreatorOptions_get_ProgramFontCharset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ProgramFontCharset_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long ProgramFontCharset);


void __RPC_STUB _clsPDFCreatorOptions_put_ProgramFontCharset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ProgramFontSize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *ProgramFontSize);


void __RPC_STUB _clsPDFCreatorOptions_get_ProgramFontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ProgramFontSize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long ProgramFontSize);


void __RPC_STUB _clsPDFCreatorOptions_put_ProgramFontSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_PSLanguageLevel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *PSLanguageLevel);


void __RPC_STUB _clsPDFCreatorOptions_get_PSLanguageLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_PSLanguageLevel_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long PSLanguageLevel);


void __RPC_STUB _clsPDFCreatorOptions_put_PSLanguageLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RemoveAllKnownFileExtensions_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RemoveAllKnownFileExtensions);


void __RPC_STUB _clsPDFCreatorOptions_get_RemoveAllKnownFileExtensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RemoveAllKnownFileExtensions_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RemoveAllKnownFileExtensions);


void __RPC_STUB _clsPDFCreatorOptions_put_RemoveAllKnownFileExtensions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RemoveSpaces_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RemoveSpaces);


void __RPC_STUB _clsPDFCreatorOptions_get_RemoveSpaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RemoveSpaces_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RemoveSpaces);


void __RPC_STUB _clsPDFCreatorOptions_put_RemoveSpaces_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramAfterSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RunProgramAfterSaving);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramAfterSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramAfterSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RunProgramAfterSaving);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramAfterSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *RunProgramAfterSavingProgramname);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR RunProgramAfterSavingProgramname);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *RunProgramAfterSavingProgramParameters);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramAfterSavingProgramParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR RunProgramAfterSavingProgramParameters);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramAfterSavingProgramParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramAfterSavingWaitUntilReady_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RunProgramAfterSavingWaitUntilReady);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramAfterSavingWaitUntilReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramAfterSavingWaitUntilReady_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RunProgramAfterSavingWaitUntilReady);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramAfterSavingWaitUntilReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramAfterSavingWindowstyle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RunProgramAfterSavingWindowstyle);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramAfterSavingWindowstyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramAfterSavingWindowstyle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RunProgramAfterSavingWindowstyle);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramAfterSavingWindowstyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramBeforeSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RunProgramBeforeSaving);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramBeforeSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramBeforeSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RunProgramBeforeSaving);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramBeforeSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramname);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR RunProgramBeforeSavingProgramname);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *RunProgramBeforeSavingProgramParameters);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramBeforeSavingProgramParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramParameters_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR RunProgramBeforeSavingProgramParameters);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramBeforeSavingProgramParameters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_RunProgramBeforeSavingWindowstyle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *RunProgramBeforeSavingWindowstyle);


void __RPC_STUB _clsPDFCreatorOptions_get_RunProgramBeforeSavingWindowstyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_RunProgramBeforeSavingWindowstyle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long RunProgramBeforeSavingWindowstyle);


void __RPC_STUB _clsPDFCreatorOptions_put_RunProgramBeforeSavingWindowstyle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_SaveFilename_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *SaveFilename);


void __RPC_STUB _clsPDFCreatorOptions_get_SaveFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_SaveFilename_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR SaveFilename);


void __RPC_STUB _clsPDFCreatorOptions_put_SaveFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_SendEmailAfterAutoSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *SendEmailAfterAutoSaving);


void __RPC_STUB _clsPDFCreatorOptions_get_SendEmailAfterAutoSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_SendEmailAfterAutoSaving_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long SendEmailAfterAutoSaving);


void __RPC_STUB _clsPDFCreatorOptions_put_SendEmailAfterAutoSaving_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_SendMailMethod_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *SendMailMethod);


void __RPC_STUB _clsPDFCreatorOptions_get_SendMailMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_SendMailMethod_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long SendMailMethod);


void __RPC_STUB _clsPDFCreatorOptions_put_SendMailMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_ShowAnimation_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *ShowAnimation);


void __RPC_STUB _clsPDFCreatorOptions_get_ShowAnimation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_ShowAnimation_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long ShowAnimation);


void __RPC_STUB _clsPDFCreatorOptions_put_ShowAnimation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampFontColor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StampFontColor);


void __RPC_STUB _clsPDFCreatorOptions_get_StampFontColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampFontColor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StampFontColor);


void __RPC_STUB _clsPDFCreatorOptions_put_StampFontColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampFontname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StampFontname);


void __RPC_STUB _clsPDFCreatorOptions_get_StampFontname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampFontname_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StampFontname);


void __RPC_STUB _clsPDFCreatorOptions_put_StampFontname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampFontsize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *StampFontsize);


void __RPC_STUB _clsPDFCreatorOptions_get_StampFontsize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampFontsize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long StampFontsize);


void __RPC_STUB _clsPDFCreatorOptions_put_StampFontsize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampOutlineFontthickness_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *StampOutlineFontthickness);


void __RPC_STUB _clsPDFCreatorOptions_get_StampOutlineFontthickness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampOutlineFontthickness_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long StampOutlineFontthickness);


void __RPC_STUB _clsPDFCreatorOptions_put_StampOutlineFontthickness_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StampString);


void __RPC_STUB _clsPDFCreatorOptions_get_StampString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampString_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StampString);


void __RPC_STUB _clsPDFCreatorOptions_put_StampString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StampUseOutlineFont_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *StampUseOutlineFont);


void __RPC_STUB _clsPDFCreatorOptions_get_StampUseOutlineFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StampUseOutlineFont_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long StampUseOutlineFont);


void __RPC_STUB _clsPDFCreatorOptions_put_StampUseOutlineFont_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardAuthor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardAuthor);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardAuthor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardAuthor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardAuthor);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardAuthor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardCreationdate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardCreationdate);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardCreationdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardCreationdate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardCreationdate);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardCreationdate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardDateformat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardDateformat);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardDateformat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardDateformat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardDateformat);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardDateformat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardKeywords_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardKeywords);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardKeywords_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardKeywords_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardKeywords);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardKeywords_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardMailDomain_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardMailDomain);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardMailDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardMailDomain_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardMailDomain);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardMailDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardModifydate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardModifydate);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardModifydate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardModifydate_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardModifydate);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardModifydate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardSaveformat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *StandardSaveformat);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardSaveformat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardSaveformat_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long StandardSaveformat);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardSaveformat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardSubject_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardSubject);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardSubject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardSubject_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardSubject);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardSubject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StandardTitle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *StandardTitle);


void __RPC_STUB _clsPDFCreatorOptions_get_StandardTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StandardTitle_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR StandardTitle);


void __RPC_STUB _clsPDFCreatorOptions_put_StandardTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_StartStandardProgram_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *StartStandardProgram);


void __RPC_STUB _clsPDFCreatorOptions_get_StartStandardProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_StartStandardProgram_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long StartStandardProgram);


void __RPC_STUB _clsPDFCreatorOptions_put_StartStandardProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_TIFFColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *TIFFColorscount);


void __RPC_STUB _clsPDFCreatorOptions_get_TIFFColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_TIFFColorscount_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long TIFFColorscount);


void __RPC_STUB _clsPDFCreatorOptions_put_TIFFColorscount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_Toolbars_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *Toolbars);


void __RPC_STUB _clsPDFCreatorOptions_get_Toolbars_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_Toolbars_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long Toolbars);


void __RPC_STUB _clsPDFCreatorOptions_put_Toolbars_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseAutosave_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *UseAutosave);


void __RPC_STUB _clsPDFCreatorOptions_get_UseAutosave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseAutosave_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long UseAutosave);


void __RPC_STUB _clsPDFCreatorOptions_put_UseAutosave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseAutosaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *UseAutosaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_get_UseAutosaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseAutosaveDirectory_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long UseAutosaveDirectory);


void __RPC_STUB _clsPDFCreatorOptions_put_UseAutosaveDirectory_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseCreationDateNow_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *UseCreationDateNow);


void __RPC_STUB _clsPDFCreatorOptions_get_UseCreationDateNow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseCreationDateNow_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long UseCreationDateNow);


void __RPC_STUB _clsPDFCreatorOptions_put_UseCreationDateNow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseStandardAuthor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *UseStandardAuthor);


void __RPC_STUB _clsPDFCreatorOptions_get_UseStandardAuthor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseStandardAuthor_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long UseStandardAuthor);


void __RPC_STUB _clsPDFCreatorOptions_put_UseStandardAuthor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseCustomPaperSize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ BSTR *UseCustomPaperSize);


void __RPC_STUB _clsPDFCreatorOptions_get_UseCustomPaperSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseCustomPaperSize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ BSTR UseCustomPaperSize);


void __RPC_STUB _clsPDFCreatorOptions_put_UseCustomPaperSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_get_UseFixPapersize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [retval][out] */ long *UseFixPapersize);


void __RPC_STUB _clsPDFCreatorOptions_get_UseFixPapersize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorOptions_put_UseFixPapersize_Proxy( 
    _clsPDFCreatorOptions * This,
    /* [in] */ long UseFixPapersize);


void __RPC_STUB _clsPDFCreatorOptions_put_UseFixPapersize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___clsPDFCreatorOptions_INTERFACE_DEFINED__ */


#ifndef ___clsPDFCreatorError_INTERFACE_DEFINED__
#define ___clsPDFCreatorError_INTERFACE_DEFINED__

/* interface _clsPDFCreatorError */
/* [object][oleautomation][nonextensible][dual][hidden][version][uuid] */ 


EXTERN_C const IID IID__clsPDFCreatorError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63BE3BC3-2B1D-4456-BFC7-900099F94AA2")
    _clsPDFCreatorError : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Number( 
            /* [retval][out] */ long *Number) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Number( 
            /* [in] */ long Number) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR Description) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _clsPDFCreatorErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _clsPDFCreatorError * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _clsPDFCreatorError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _clsPDFCreatorError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _clsPDFCreatorError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _clsPDFCreatorError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _clsPDFCreatorError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _clsPDFCreatorError * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Number )( 
            _clsPDFCreatorError * This,
            /* [retval][out] */ long *Number);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Number )( 
            _clsPDFCreatorError * This,
            /* [in] */ long Number);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            _clsPDFCreatorError * This,
            /* [retval][out] */ BSTR *Description);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            _clsPDFCreatorError * This,
            /* [in] */ BSTR Description);
        
        END_INTERFACE
    } _clsPDFCreatorErrorVtbl;

    interface _clsPDFCreatorError
    {
        CONST_VTBL struct _clsPDFCreatorErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _clsPDFCreatorError_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _clsPDFCreatorError_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _clsPDFCreatorError_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _clsPDFCreatorError_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _clsPDFCreatorError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _clsPDFCreatorError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _clsPDFCreatorError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define _clsPDFCreatorError_get_Number(This,Number)	\
    (This)->lpVtbl -> get_Number(This,Number)

#define _clsPDFCreatorError_put_Number(This,Number)	\
    (This)->lpVtbl -> put_Number(This,Number)

#define _clsPDFCreatorError_get_Description(This,Description)	\
    (This)->lpVtbl -> get_Description(This,Description)

#define _clsPDFCreatorError_put_Description(This,Description)	\
    (This)->lpVtbl -> put_Description(This,Description)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorError_get_Number_Proxy( 
    _clsPDFCreatorError * This,
    /* [retval][out] */ long *Number);


void __RPC_STUB _clsPDFCreatorError_get_Number_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorError_put_Number_Proxy( 
    _clsPDFCreatorError * This,
    /* [in] */ long Number);


void __RPC_STUB _clsPDFCreatorError_put_Number_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorError_get_Description_Proxy( 
    _clsPDFCreatorError * This,
    /* [retval][out] */ BSTR *Description);


void __RPC_STUB _clsPDFCreatorError_get_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorError_put_Description_Proxy( 
    _clsPDFCreatorError * This,
    /* [in] */ BSTR Description);


void __RPC_STUB _clsPDFCreatorError_put_Description_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___clsPDFCreatorError_INTERFACE_DEFINED__ */


#ifndef ___clsPDFCreatorInfoSpoolFile_INTERFACE_DEFINED__
#define ___clsPDFCreatorInfoSpoolFile_INTERFACE_DEFINED__

/* interface _clsPDFCreatorInfoSpoolFile */
/* [object][oleautomation][nonextensible][dual][hidden][version][uuid] */ 


EXTERN_C const IID IID__clsPDFCreatorInfoSpoolFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E2E2568-AA5B-4535-8291-C8930D1760C1")
    _clsPDFCreatorInfoSpoolFile : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_PORT( 
            /* [retval][out] */ BSTR *REDMON_PORT) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_PORT( 
            /* [in] */ BSTR REDMON_PORT) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_JOB( 
            /* [retval][out] */ BSTR *REDMON_JOB) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_JOB( 
            /* [in] */ BSTR REDMON_JOB) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_PRINTER( 
            /* [retval][out] */ BSTR *REDMON_PRINTER) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_PRINTER( 
            /* [in] */ BSTR REDMON_PRINTER) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_MACHINE( 
            /* [retval][out] */ BSTR *REDMON_MACHINE) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_MACHINE( 
            /* [in] */ BSTR REDMON_MACHINE) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_USER( 
            /* [retval][out] */ BSTR *REDMON_USER) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_USER( 
            /* [in] */ BSTR REDMON_USER) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_DOCNAME( 
            /* [retval][out] */ BSTR *REDMON_DOCNAME) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_DOCNAME( 
            /* [in] */ BSTR REDMON_DOCNAME) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_FILENAME( 
            /* [retval][out] */ BSTR *REDMON_FILENAME) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_FILENAME( 
            /* [in] */ BSTR REDMON_FILENAME) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_REDMON_SESSIONID( 
            /* [retval][out] */ BSTR *REDMON_SESSIONID) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_REDMON_SESSIONID( 
            /* [in] */ BSTR REDMON_SESSIONID) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpoolFilename( 
            /* [retval][out] */ BSTR *SpoolFilename) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpoolFilename( 
            /* [in] */ BSTR SpoolFilename) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SpoolerAccount( 
            /* [retval][out] */ BSTR *SpoolerAccount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_SpoolerAccount( 
            /* [in] */ BSTR SpoolerAccount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Computer( 
            /* [retval][out] */ BSTR *Computer) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Computer( 
            /* [in] */ BSTR Computer) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Created( 
            /* [retval][out] */ BSTR *Created) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Created( 
            /* [in] */ BSTR Created) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _clsPDFCreatorInfoSpoolFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _clsPDFCreatorInfoSpoolFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _clsPDFCreatorInfoSpoolFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_PORT )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_PORT);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_PORT )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_PORT);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_JOB )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_JOB);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_JOB )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_JOB);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_PRINTER )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_PRINTER);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_PRINTER )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_PRINTER);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_MACHINE )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_MACHINE);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_MACHINE )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_MACHINE);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_USER )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_USER);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_USER )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_USER);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_DOCNAME )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_DOCNAME);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_DOCNAME )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_DOCNAME);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_FILENAME )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_FILENAME);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_FILENAME )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_FILENAME);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_REDMON_SESSIONID )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *REDMON_SESSIONID);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_REDMON_SESSIONID )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR REDMON_SESSIONID);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpoolFilename )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *SpoolFilename);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpoolFilename )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR SpoolFilename);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SpoolerAccount )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *SpoolerAccount);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SpoolerAccount )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR SpoolerAccount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Computer )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *Computer);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Computer )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR Computer);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Created )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [retval][out] */ BSTR *Created);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Created )( 
            _clsPDFCreatorInfoSpoolFile * This,
            /* [in] */ BSTR Created);
        
        END_INTERFACE
    } _clsPDFCreatorInfoSpoolFileVtbl;

    interface _clsPDFCreatorInfoSpoolFile
    {
        CONST_VTBL struct _clsPDFCreatorInfoSpoolFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _clsPDFCreatorInfoSpoolFile_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _clsPDFCreatorInfoSpoolFile_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _clsPDFCreatorInfoSpoolFile_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _clsPDFCreatorInfoSpoolFile_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _clsPDFCreatorInfoSpoolFile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _clsPDFCreatorInfoSpoolFile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _clsPDFCreatorInfoSpoolFile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define _clsPDFCreatorInfoSpoolFile_get_REDMON_PORT(This,REDMON_PORT)	\
    (This)->lpVtbl -> get_REDMON_PORT(This,REDMON_PORT)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_PORT(This,REDMON_PORT)	\
    (This)->lpVtbl -> put_REDMON_PORT(This,REDMON_PORT)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_JOB(This,REDMON_JOB)	\
    (This)->lpVtbl -> get_REDMON_JOB(This,REDMON_JOB)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_JOB(This,REDMON_JOB)	\
    (This)->lpVtbl -> put_REDMON_JOB(This,REDMON_JOB)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_PRINTER(This,REDMON_PRINTER)	\
    (This)->lpVtbl -> get_REDMON_PRINTER(This,REDMON_PRINTER)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_PRINTER(This,REDMON_PRINTER)	\
    (This)->lpVtbl -> put_REDMON_PRINTER(This,REDMON_PRINTER)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_MACHINE(This,REDMON_MACHINE)	\
    (This)->lpVtbl -> get_REDMON_MACHINE(This,REDMON_MACHINE)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_MACHINE(This,REDMON_MACHINE)	\
    (This)->lpVtbl -> put_REDMON_MACHINE(This,REDMON_MACHINE)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_USER(This,REDMON_USER)	\
    (This)->lpVtbl -> get_REDMON_USER(This,REDMON_USER)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_USER(This,REDMON_USER)	\
    (This)->lpVtbl -> put_REDMON_USER(This,REDMON_USER)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_DOCNAME(This,REDMON_DOCNAME)	\
    (This)->lpVtbl -> get_REDMON_DOCNAME(This,REDMON_DOCNAME)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_DOCNAME(This,REDMON_DOCNAME)	\
    (This)->lpVtbl -> put_REDMON_DOCNAME(This,REDMON_DOCNAME)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_FILENAME(This,REDMON_FILENAME)	\
    (This)->lpVtbl -> get_REDMON_FILENAME(This,REDMON_FILENAME)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_FILENAME(This,REDMON_FILENAME)	\
    (This)->lpVtbl -> put_REDMON_FILENAME(This,REDMON_FILENAME)

#define _clsPDFCreatorInfoSpoolFile_get_REDMON_SESSIONID(This,REDMON_SESSIONID)	\
    (This)->lpVtbl -> get_REDMON_SESSIONID(This,REDMON_SESSIONID)

#define _clsPDFCreatorInfoSpoolFile_put_REDMON_SESSIONID(This,REDMON_SESSIONID)	\
    (This)->lpVtbl -> put_REDMON_SESSIONID(This,REDMON_SESSIONID)

#define _clsPDFCreatorInfoSpoolFile_get_SpoolFilename(This,SpoolFilename)	\
    (This)->lpVtbl -> get_SpoolFilename(This,SpoolFilename)

#define _clsPDFCreatorInfoSpoolFile_put_SpoolFilename(This,SpoolFilename)	\
    (This)->lpVtbl -> put_SpoolFilename(This,SpoolFilename)

#define _clsPDFCreatorInfoSpoolFile_get_SpoolerAccount(This,SpoolerAccount)	\
    (This)->lpVtbl -> get_SpoolerAccount(This,SpoolerAccount)

#define _clsPDFCreatorInfoSpoolFile_put_SpoolerAccount(This,SpoolerAccount)	\
    (This)->lpVtbl -> put_SpoolerAccount(This,SpoolerAccount)

#define _clsPDFCreatorInfoSpoolFile_get_Computer(This,Computer)	\
    (This)->lpVtbl -> get_Computer(This,Computer)

#define _clsPDFCreatorInfoSpoolFile_put_Computer(This,Computer)	\
    (This)->lpVtbl -> put_Computer(This,Computer)

#define _clsPDFCreatorInfoSpoolFile_get_Created(This,Created)	\
    (This)->lpVtbl -> get_Created(This,Created)

#define _clsPDFCreatorInfoSpoolFile_put_Created(This,Created)	\
    (This)->lpVtbl -> put_Created(This,Created)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_PORT_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_PORT);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_PORT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_PORT_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_PORT);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_PORT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_JOB_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_JOB);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_JOB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_JOB_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_JOB);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_JOB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_PRINTER_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_PRINTER);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_PRINTER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_PRINTER_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_PRINTER);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_PRINTER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_MACHINE_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_MACHINE);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_MACHINE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_MACHINE_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_MACHINE);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_MACHINE_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_USER_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_USER);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_USER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_USER_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_USER);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_USER_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_DOCNAME_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_DOCNAME);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_DOCNAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_DOCNAME_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_DOCNAME);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_DOCNAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_FILENAME_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_FILENAME);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_FILENAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_FILENAME_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_FILENAME);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_FILENAME_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_REDMON_SESSIONID_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *REDMON_SESSIONID);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_REDMON_SESSIONID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_REDMON_SESSIONID_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR REDMON_SESSIONID);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_REDMON_SESSIONID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_SpoolFilename_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *SpoolFilename);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_SpoolFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_SpoolFilename_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR SpoolFilename);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_SpoolFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_SpoolerAccount_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *SpoolerAccount);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_SpoolerAccount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_SpoolerAccount_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR SpoolerAccount);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_SpoolerAccount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_Computer_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *Computer);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_Computer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_Computer_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR Computer);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_Computer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_get_Created_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [retval][out] */ BSTR *Created);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_get_Created_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreatorInfoSpoolFile_put_Created_Proxy( 
    _clsPDFCreatorInfoSpoolFile * This,
    /* [in] */ BSTR Created);


void __RPC_STUB _clsPDFCreatorInfoSpoolFile_put_Created_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___clsPDFCreatorInfoSpoolFile_INTERFACE_DEFINED__ */


#ifndef ___clsPDFCreator_INTERFACE_DEFINED__
#define ___clsPDFCreator_INTERFACE_DEFINED__

/* interface _clsPDFCreator */
/* [object][oleautomation][nonextensible][dual][hidden][version][uuid] */ 


EXTERN_C const IID IID__clsPDFCreator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A2893D6-F5EF-4E30-9960-3418C58C17A4")
    _clsPDFCreator : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cError( 
            /* [retval][out] */ _clsPDFCreatorError **__MIDL_0010) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cErrorDetail( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0011) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cErrorClear( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cOutputFilename( 
            /* [retval][out] */ BSTR *__MIDL_0012) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPDFCreatorApplicationPath( 
            /* [retval][out] */ BSTR *__MIDL_0013) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cIsLogfileDialogDisplayed( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0014) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cIsOptionsDialogDisplayed( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0015) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cProgramRelease( 
            /* [defaultvalue][optional][in] */ VARIANT_BOOL WithBeta,
            /* [retval][out] */ BSTR *__MIDL_0016) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cProgramIsRunning( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0017) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cWindowsVersion( 
            /* [retval][out] */ BSTR *__MIDL_0018) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cVisible( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0019) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cVisible( 
            /* [in] */ VARIANT_BOOL __MIDL_0020) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cInstalledAsServer( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0021) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPrinterStop( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0022) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cPrinterStop( 
            /* [in] */ VARIANT_BOOL __MIDL_0023) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cOptionsNames( 
            /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0024) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cOption( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0025) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cOption( 
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT __MIDL_0026) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cOptions( 
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0027) = 0;
        
        virtual /* [propputref][id] */ HRESULT STDMETHODCALLTYPE putref_cOptions( 
            /* [in] */ _clsPDFCreatorOptions *__MIDL_0028) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cStandardOption( 
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0029) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cStandardOptions( 
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0030) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPrintjobInfos( 
            /* [in] */ BSTR PrintjobFilename,
            /* [retval][out] */ _clsPDFCreatorInfoSpoolFile **__MIDL_0031) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPrintjobInfo( 
            /* [in] */ BSTR PrintjobFilename,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ BSTR *__MIDL_0032) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cCountOfPrintjobs( 
            /* [retval][out] */ long *__MIDL_0033) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPrintjobFilename( 
            /* [in] */ long JobNumber,
            /* [retval][out] */ BSTR *__MIDL_0034) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cDefaultPrinter( 
            /* [retval][out] */ BSTR *__MIDL_0035) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cDefaultPrinter( 
            /* [in] */ BSTR __MIDL_0036) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cWindowState( 
            /* [retval][out] */ long *__MIDL_0037) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cWindowState( 
            /* [in] */ long __MIDL_0038) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cIsConverted( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0039) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_cIsConverted( 
            /* [in] */ VARIANT_BOOL __MIDL_0040) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cDeletePrintjob( 
            /* [in] */ long JobNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cMovePrintjobBottom( 
            /* [in] */ long JobNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cMovePrintjobTop( 
            /* [in] */ long JobNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cMovePrintjobUp( 
            /* [in] */ long JobNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cMovePrintjobDown( 
            /* [in] */ long JobNumber) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cClose( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0041) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cCloseRunningSession( 
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0042) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cStart( 
            /* [optional][in] */ BSTR Params,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL ForceInitialize,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0043) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cClearCache( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cClearLogfile( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cConvertPostscriptfile( 
            /* [in] */ BSTR InputFilename,
            /* [in] */ BSTR OutputFilename) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cTestEvent( 
            /* [in] */ BSTR EventName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cShowLogfileDialog( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cShowOptionsDialog( 
            /* [in] */ VARIANT_BOOL Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cSendMail( 
            /* [in] */ BSTR OutputFilename,
            /* [in] */ BSTR Recipients) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cIsPrintable( 
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0044) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cCombineAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cGetPDFCreatorPrinters( 
            /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0045) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cGetLogfile( 
            /* [retval][out] */ BSTR *__MIDL_0046) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cWriteToLogfile( 
            /* [in] */ BSTR LogStr) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cPrintFile( 
            /* [in] */ BSTR Filename) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cPrintPDFCreatorTestpage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cPrintPrinterTestpage( 
            /* [optional][in] */ BSTR Printername) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cReadOptions( 
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0047) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cSaveOptions( 
            /* [optional][in] */ VARIANT Options1) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cReadOptionsFromFile( 
            /* [in] */ BSTR INIFilename,
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0048) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cSaveOptionsToFile( 
            /* [in] */ BSTR INIFilename,
            /* [optional][in] */ VARIANT Options1) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_cPostscriptInfo( 
            /* [in] */ BSTR PostscriptFilename,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ BSTR *__MIDL_0049) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE cAddPrintjob( 
            /* [in] */ BSTR PostscriptFilename) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _clsPDFCreatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _clsPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _clsPDFCreator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _clsPDFCreator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _clsPDFCreator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _clsPDFCreator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _clsPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _clsPDFCreator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cError )( 
            _clsPDFCreator * This,
            /* [retval][out] */ _clsPDFCreatorError **__MIDL_0010);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cErrorDetail )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0011);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cErrorClear )( 
            _clsPDFCreator * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cOutputFilename )( 
            _clsPDFCreator * This,
            /* [retval][out] */ BSTR *__MIDL_0012);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPDFCreatorApplicationPath )( 
            _clsPDFCreator * This,
            /* [retval][out] */ BSTR *__MIDL_0013);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cIsLogfileDialogDisplayed )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0014);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cIsOptionsDialogDisplayed )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0015);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cProgramRelease )( 
            _clsPDFCreator * This,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL WithBeta,
            /* [retval][out] */ BSTR *__MIDL_0016);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cProgramIsRunning )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0017);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cWindowsVersion )( 
            _clsPDFCreator * This,
            /* [retval][out] */ BSTR *__MIDL_0018);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cVisible )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0019);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cVisible )( 
            _clsPDFCreator * This,
            /* [in] */ VARIANT_BOOL __MIDL_0020);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cInstalledAsServer )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0021);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPrinterStop )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0022);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cPrinterStop )( 
            _clsPDFCreator * This,
            /* [in] */ VARIANT_BOOL __MIDL_0023);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cOptionsNames )( 
            _clsPDFCreator * This,
            /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0024);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cOption )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0025);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cOption )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PropertyName,
            /* [in] */ VARIANT __MIDL_0026);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cOptions )( 
            _clsPDFCreator * This,
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0027);
        
        /* [propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_cOptions )( 
            _clsPDFCreator * This,
            /* [in] */ _clsPDFCreatorOptions *__MIDL_0028);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cStandardOption )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ VARIANT *__MIDL_0029);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cStandardOptions )( 
            _clsPDFCreator * This,
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0030);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPrintjobInfos )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PrintjobFilename,
            /* [retval][out] */ _clsPDFCreatorInfoSpoolFile **__MIDL_0031);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPrintjobInfo )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PrintjobFilename,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ BSTR *__MIDL_0032);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cCountOfPrintjobs )( 
            _clsPDFCreator * This,
            /* [retval][out] */ long *__MIDL_0033);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPrintjobFilename )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber,
            /* [retval][out] */ BSTR *__MIDL_0034);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cDefaultPrinter )( 
            _clsPDFCreator * This,
            /* [retval][out] */ BSTR *__MIDL_0035);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cDefaultPrinter )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR __MIDL_0036);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cWindowState )( 
            _clsPDFCreator * This,
            /* [retval][out] */ long *__MIDL_0037);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cWindowState )( 
            _clsPDFCreator * This,
            /* [in] */ long __MIDL_0038);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cIsConverted )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0039);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_cIsConverted )( 
            _clsPDFCreator * This,
            /* [in] */ VARIANT_BOOL __MIDL_0040);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cDeletePrintjob )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cMovePrintjobBottom )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cMovePrintjobTop )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cMovePrintjobUp )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cMovePrintjobDown )( 
            _clsPDFCreator * This,
            /* [in] */ long JobNumber);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cClose )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0041);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cCloseRunningSession )( 
            _clsPDFCreator * This,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0042);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cStart )( 
            _clsPDFCreator * This,
            /* [optional][in] */ BSTR Params,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL ForceInitialize,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0043);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cClearCache )( 
            _clsPDFCreator * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cClearLogfile )( 
            _clsPDFCreator * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cConvertPostscriptfile )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR InputFilename,
            /* [in] */ BSTR OutputFilename);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cTestEvent )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR EventName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cShowLogfileDialog )( 
            _clsPDFCreator * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cShowOptionsDialog )( 
            _clsPDFCreator * This,
            /* [in] */ VARIANT_BOOL Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cSendMail )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR OutputFilename,
            /* [in] */ BSTR Recipients);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cIsPrintable )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR Filename,
            /* [retval][out] */ VARIANT_BOOL *__MIDL_0044);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cCombineAll )( 
            _clsPDFCreator * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cGetPDFCreatorPrinters )( 
            _clsPDFCreator * This,
            /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0045);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cGetLogfile )( 
            _clsPDFCreator * This,
            /* [retval][out] */ BSTR *__MIDL_0046);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cWriteToLogfile )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR LogStr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cPrintFile )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR Filename);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cPrintPDFCreatorTestpage )( 
            _clsPDFCreator * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cPrintPrinterTestpage )( 
            _clsPDFCreator * This,
            /* [optional][in] */ BSTR Printername);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cReadOptions )( 
            _clsPDFCreator * This,
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0047);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cSaveOptions )( 
            _clsPDFCreator * This,
            /* [optional][in] */ VARIANT Options1);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cReadOptionsFromFile )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR INIFilename,
            /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0048);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cSaveOptionsToFile )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR INIFilename,
            /* [optional][in] */ VARIANT Options1);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_cPostscriptInfo )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PostscriptFilename,
            /* [in] */ BSTR PropertyName,
            /* [retval][out] */ BSTR *__MIDL_0049);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *cAddPrintjob )( 
            _clsPDFCreator * This,
            /* [in] */ BSTR PostscriptFilename);
        
        END_INTERFACE
    } _clsPDFCreatorVtbl;

    interface _clsPDFCreator
    {
        CONST_VTBL struct _clsPDFCreatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _clsPDFCreator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _clsPDFCreator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _clsPDFCreator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _clsPDFCreator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _clsPDFCreator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _clsPDFCreator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _clsPDFCreator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define _clsPDFCreator_get_cError(This,__MIDL_0010)	\
    (This)->lpVtbl -> get_cError(This,__MIDL_0010)

#define _clsPDFCreator_get_cErrorDetail(This,PropertyName,__MIDL_0011)	\
    (This)->lpVtbl -> get_cErrorDetail(This,PropertyName,__MIDL_0011)

#define _clsPDFCreator_cErrorClear(This)	\
    (This)->lpVtbl -> cErrorClear(This)

#define _clsPDFCreator_get_cOutputFilename(This,__MIDL_0012)	\
    (This)->lpVtbl -> get_cOutputFilename(This,__MIDL_0012)

#define _clsPDFCreator_get_cPDFCreatorApplicationPath(This,__MIDL_0013)	\
    (This)->lpVtbl -> get_cPDFCreatorApplicationPath(This,__MIDL_0013)

#define _clsPDFCreator_get_cIsLogfileDialogDisplayed(This,__MIDL_0014)	\
    (This)->lpVtbl -> get_cIsLogfileDialogDisplayed(This,__MIDL_0014)

#define _clsPDFCreator_get_cIsOptionsDialogDisplayed(This,__MIDL_0015)	\
    (This)->lpVtbl -> get_cIsOptionsDialogDisplayed(This,__MIDL_0015)

#define _clsPDFCreator_get_cProgramRelease(This,WithBeta,__MIDL_0016)	\
    (This)->lpVtbl -> get_cProgramRelease(This,WithBeta,__MIDL_0016)

#define _clsPDFCreator_get_cProgramIsRunning(This,__MIDL_0017)	\
    (This)->lpVtbl -> get_cProgramIsRunning(This,__MIDL_0017)

#define _clsPDFCreator_get_cWindowsVersion(This,__MIDL_0018)	\
    (This)->lpVtbl -> get_cWindowsVersion(This,__MIDL_0018)

#define _clsPDFCreator_get_cVisible(This,__MIDL_0019)	\
    (This)->lpVtbl -> get_cVisible(This,__MIDL_0019)

#define _clsPDFCreator_put_cVisible(This,__MIDL_0020)	\
    (This)->lpVtbl -> put_cVisible(This,__MIDL_0020)

#define _clsPDFCreator_get_cInstalledAsServer(This,__MIDL_0021)	\
    (This)->lpVtbl -> get_cInstalledAsServer(This,__MIDL_0021)

#define _clsPDFCreator_get_cPrinterStop(This,__MIDL_0022)	\
    (This)->lpVtbl -> get_cPrinterStop(This,__MIDL_0022)

#define _clsPDFCreator_put_cPrinterStop(This,__MIDL_0023)	\
    (This)->lpVtbl -> put_cPrinterStop(This,__MIDL_0023)

#define _clsPDFCreator_get_cOptionsNames(This,__MIDL_0024)	\
    (This)->lpVtbl -> get_cOptionsNames(This,__MIDL_0024)

#define _clsPDFCreator_get_cOption(This,PropertyName,__MIDL_0025)	\
    (This)->lpVtbl -> get_cOption(This,PropertyName,__MIDL_0025)

#define _clsPDFCreator_put_cOption(This,PropertyName,__MIDL_0026)	\
    (This)->lpVtbl -> put_cOption(This,PropertyName,__MIDL_0026)

#define _clsPDFCreator_get_cOptions(This,__MIDL_0027)	\
    (This)->lpVtbl -> get_cOptions(This,__MIDL_0027)

#define _clsPDFCreator_putref_cOptions(This,__MIDL_0028)	\
    (This)->lpVtbl -> putref_cOptions(This,__MIDL_0028)

#define _clsPDFCreator_get_cStandardOption(This,PropertyName,__MIDL_0029)	\
    (This)->lpVtbl -> get_cStandardOption(This,PropertyName,__MIDL_0029)

#define _clsPDFCreator_get_cStandardOptions(This,__MIDL_0030)	\
    (This)->lpVtbl -> get_cStandardOptions(This,__MIDL_0030)

#define _clsPDFCreator_get_cPrintjobInfos(This,PrintjobFilename,__MIDL_0031)	\
    (This)->lpVtbl -> get_cPrintjobInfos(This,PrintjobFilename,__MIDL_0031)

#define _clsPDFCreator_get_cPrintjobInfo(This,PrintjobFilename,PropertyName,__MIDL_0032)	\
    (This)->lpVtbl -> get_cPrintjobInfo(This,PrintjobFilename,PropertyName,__MIDL_0032)

#define _clsPDFCreator_get_cCountOfPrintjobs(This,__MIDL_0033)	\
    (This)->lpVtbl -> get_cCountOfPrintjobs(This,__MIDL_0033)

#define _clsPDFCreator_get_cPrintjobFilename(This,JobNumber,__MIDL_0034)	\
    (This)->lpVtbl -> get_cPrintjobFilename(This,JobNumber,__MIDL_0034)

#define _clsPDFCreator_get_cDefaultPrinter(This,__MIDL_0035)	\
    (This)->lpVtbl -> get_cDefaultPrinter(This,__MIDL_0035)

#define _clsPDFCreator_put_cDefaultPrinter(This,__MIDL_0036)	\
    (This)->lpVtbl -> put_cDefaultPrinter(This,__MIDL_0036)

#define _clsPDFCreator_get_cWindowState(This,__MIDL_0037)	\
    (This)->lpVtbl -> get_cWindowState(This,__MIDL_0037)

#define _clsPDFCreator_put_cWindowState(This,__MIDL_0038)	\
    (This)->lpVtbl -> put_cWindowState(This,__MIDL_0038)

#define _clsPDFCreator_get_cIsConverted(This,__MIDL_0039)	\
    (This)->lpVtbl -> get_cIsConverted(This,__MIDL_0039)

#define _clsPDFCreator_put_cIsConverted(This,__MIDL_0040)	\
    (This)->lpVtbl -> put_cIsConverted(This,__MIDL_0040)

#define _clsPDFCreator_cDeletePrintjob(This,JobNumber)	\
    (This)->lpVtbl -> cDeletePrintjob(This,JobNumber)

#define _clsPDFCreator_cMovePrintjobBottom(This,JobNumber)	\
    (This)->lpVtbl -> cMovePrintjobBottom(This,JobNumber)

#define _clsPDFCreator_cMovePrintjobTop(This,JobNumber)	\
    (This)->lpVtbl -> cMovePrintjobTop(This,JobNumber)

#define _clsPDFCreator_cMovePrintjobUp(This,JobNumber)	\
    (This)->lpVtbl -> cMovePrintjobUp(This,JobNumber)

#define _clsPDFCreator_cMovePrintjobDown(This,JobNumber)	\
    (This)->lpVtbl -> cMovePrintjobDown(This,JobNumber)

#define _clsPDFCreator_cClose(This,__MIDL_0041)	\
    (This)->lpVtbl -> cClose(This,__MIDL_0041)

#define _clsPDFCreator_cCloseRunningSession(This,__MIDL_0042)	\
    (This)->lpVtbl -> cCloseRunningSession(This,__MIDL_0042)

#define _clsPDFCreator_cStart(This,Params,ForceInitialize,__MIDL_0043)	\
    (This)->lpVtbl -> cStart(This,Params,ForceInitialize,__MIDL_0043)

#define _clsPDFCreator_cClearCache(This)	\
    (This)->lpVtbl -> cClearCache(This)

#define _clsPDFCreator_cClearLogfile(This)	\
    (This)->lpVtbl -> cClearLogfile(This)

#define _clsPDFCreator_cConvertPostscriptfile(This,InputFilename,OutputFilename)	\
    (This)->lpVtbl -> cConvertPostscriptfile(This,InputFilename,OutputFilename)

#define _clsPDFCreator_cTestEvent(This,EventName)	\
    (This)->lpVtbl -> cTestEvent(This,EventName)

#define _clsPDFCreator_cShowLogfileDialog(This,Value)	\
    (This)->lpVtbl -> cShowLogfileDialog(This,Value)

#define _clsPDFCreator_cShowOptionsDialog(This,Value)	\
    (This)->lpVtbl -> cShowOptionsDialog(This,Value)

#define _clsPDFCreator_cSendMail(This,OutputFilename,Recipients)	\
    (This)->lpVtbl -> cSendMail(This,OutputFilename,Recipients)

#define _clsPDFCreator_cIsPrintable(This,Filename,__MIDL_0044)	\
    (This)->lpVtbl -> cIsPrintable(This,Filename,__MIDL_0044)

#define _clsPDFCreator_cCombineAll(This)	\
    (This)->lpVtbl -> cCombineAll(This)

#define _clsPDFCreator_cGetPDFCreatorPrinters(This,__MIDL_0045)	\
    (This)->lpVtbl -> cGetPDFCreatorPrinters(This,__MIDL_0045)

#define _clsPDFCreator_cGetLogfile(This,__MIDL_0046)	\
    (This)->lpVtbl -> cGetLogfile(This,__MIDL_0046)

#define _clsPDFCreator_cWriteToLogfile(This,LogStr)	\
    (This)->lpVtbl -> cWriteToLogfile(This,LogStr)

#define _clsPDFCreator_cPrintFile(This,Filename)	\
    (This)->lpVtbl -> cPrintFile(This,Filename)

#define _clsPDFCreator_cPrintPDFCreatorTestpage(This)	\
    (This)->lpVtbl -> cPrintPDFCreatorTestpage(This)

#define _clsPDFCreator_cPrintPrinterTestpage(This,Printername)	\
    (This)->lpVtbl -> cPrintPrinterTestpage(This,Printername)

#define _clsPDFCreator_cReadOptions(This,__MIDL_0047)	\
    (This)->lpVtbl -> cReadOptions(This,__MIDL_0047)

#define _clsPDFCreator_cSaveOptions(This,Options1)	\
    (This)->lpVtbl -> cSaveOptions(This,Options1)

#define _clsPDFCreator_cReadOptionsFromFile(This,INIFilename,__MIDL_0048)	\
    (This)->lpVtbl -> cReadOptionsFromFile(This,INIFilename,__MIDL_0048)

#define _clsPDFCreator_cSaveOptionsToFile(This,INIFilename,Options1)	\
    (This)->lpVtbl -> cSaveOptionsToFile(This,INIFilename,Options1)

#define _clsPDFCreator_get_cPostscriptInfo(This,PostscriptFilename,PropertyName,__MIDL_0049)	\
    (This)->lpVtbl -> get_cPostscriptInfo(This,PostscriptFilename,PropertyName,__MIDL_0049)

#define _clsPDFCreator_cAddPrintjob(This,PostscriptFilename)	\
    (This)->lpVtbl -> cAddPrintjob(This,PostscriptFilename)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cError_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ _clsPDFCreatorError **__MIDL_0010);


void __RPC_STUB _clsPDFCreator_get_cError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cErrorDetail_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ VARIANT *__MIDL_0011);


void __RPC_STUB _clsPDFCreator_get_cErrorDetail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cErrorClear_Proxy( 
    _clsPDFCreator * This);


void __RPC_STUB _clsPDFCreator_cErrorClear_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cOutputFilename_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ BSTR *__MIDL_0012);


void __RPC_STUB _clsPDFCreator_get_cOutputFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPDFCreatorApplicationPath_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ BSTR *__MIDL_0013);


void __RPC_STUB _clsPDFCreator_get_cPDFCreatorApplicationPath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cIsLogfileDialogDisplayed_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0014);


void __RPC_STUB _clsPDFCreator_get_cIsLogfileDialogDisplayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cIsOptionsDialogDisplayed_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0015);


void __RPC_STUB _clsPDFCreator_get_cIsOptionsDialogDisplayed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cProgramRelease_Proxy( 
    _clsPDFCreator * This,
    /* [defaultvalue][optional][in] */ VARIANT_BOOL WithBeta,
    /* [retval][out] */ BSTR *__MIDL_0016);


void __RPC_STUB _clsPDFCreator_get_cProgramRelease_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cProgramIsRunning_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0017);


void __RPC_STUB _clsPDFCreator_get_cProgramIsRunning_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cWindowsVersion_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ BSTR *__MIDL_0018);


void __RPC_STUB _clsPDFCreator_get_cWindowsVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cVisible_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0019);


void __RPC_STUB _clsPDFCreator_get_cVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cVisible_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ VARIANT_BOOL __MIDL_0020);


void __RPC_STUB _clsPDFCreator_put_cVisible_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cInstalledAsServer_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0021);


void __RPC_STUB _clsPDFCreator_get_cInstalledAsServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPrinterStop_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0022);


void __RPC_STUB _clsPDFCreator_get_cPrinterStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cPrinterStop_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ VARIANT_BOOL __MIDL_0023);


void __RPC_STUB _clsPDFCreator_put_cPrinterStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cOptionsNames_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0024);


void __RPC_STUB _clsPDFCreator_get_cOptionsNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cOption_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ VARIANT *__MIDL_0025);


void __RPC_STUB _clsPDFCreator_get_cOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cOption_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PropertyName,
    /* [in] */ VARIANT __MIDL_0026);


void __RPC_STUB _clsPDFCreator_put_cOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cOptions_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0027);


void __RPC_STUB _clsPDFCreator_get_cOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propputref][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_putref_cOptions_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ _clsPDFCreatorOptions *__MIDL_0028);


void __RPC_STUB _clsPDFCreator_putref_cOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cStandardOption_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ VARIANT *__MIDL_0029);


void __RPC_STUB _clsPDFCreator_get_cStandardOption_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cStandardOptions_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0030);


void __RPC_STUB _clsPDFCreator_get_cStandardOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPrintjobInfos_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PrintjobFilename,
    /* [retval][out] */ _clsPDFCreatorInfoSpoolFile **__MIDL_0031);


void __RPC_STUB _clsPDFCreator_get_cPrintjobInfos_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPrintjobInfo_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PrintjobFilename,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ BSTR *__MIDL_0032);


void __RPC_STUB _clsPDFCreator_get_cPrintjobInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cCountOfPrintjobs_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ long *__MIDL_0033);


void __RPC_STUB _clsPDFCreator_get_cCountOfPrintjobs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPrintjobFilename_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber,
    /* [retval][out] */ BSTR *__MIDL_0034);


void __RPC_STUB _clsPDFCreator_get_cPrintjobFilename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cDefaultPrinter_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ BSTR *__MIDL_0035);


void __RPC_STUB _clsPDFCreator_get_cDefaultPrinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cDefaultPrinter_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR __MIDL_0036);


void __RPC_STUB _clsPDFCreator_put_cDefaultPrinter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cWindowState_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ long *__MIDL_0037);


void __RPC_STUB _clsPDFCreator_get_cWindowState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cWindowState_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long __MIDL_0038);


void __RPC_STUB _clsPDFCreator_put_cWindowState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cIsConverted_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0039);


void __RPC_STUB _clsPDFCreator_get_cIsConverted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propput][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_put_cIsConverted_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ VARIANT_BOOL __MIDL_0040);


void __RPC_STUB _clsPDFCreator_put_cIsConverted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cDeletePrintjob_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber);


void __RPC_STUB _clsPDFCreator_cDeletePrintjob_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cMovePrintjobBottom_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber);


void __RPC_STUB _clsPDFCreator_cMovePrintjobBottom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cMovePrintjobTop_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber);


void __RPC_STUB _clsPDFCreator_cMovePrintjobTop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cMovePrintjobUp_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber);


void __RPC_STUB _clsPDFCreator_cMovePrintjobUp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cMovePrintjobDown_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ long JobNumber);


void __RPC_STUB _clsPDFCreator_cMovePrintjobDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cClose_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0041);


void __RPC_STUB _clsPDFCreator_cClose_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cCloseRunningSession_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0042);


void __RPC_STUB _clsPDFCreator_cCloseRunningSession_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cStart_Proxy( 
    _clsPDFCreator * This,
    /* [optional][in] */ BSTR Params,
    /* [defaultvalue][optional][in] */ VARIANT_BOOL ForceInitialize,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0043);


void __RPC_STUB _clsPDFCreator_cStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cClearCache_Proxy( 
    _clsPDFCreator * This);


void __RPC_STUB _clsPDFCreator_cClearCache_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cClearLogfile_Proxy( 
    _clsPDFCreator * This);


void __RPC_STUB _clsPDFCreator_cClearLogfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cConvertPostscriptfile_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR InputFilename,
    /* [in] */ BSTR OutputFilename);


void __RPC_STUB _clsPDFCreator_cConvertPostscriptfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cTestEvent_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR EventName);


void __RPC_STUB _clsPDFCreator_cTestEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cShowLogfileDialog_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB _clsPDFCreator_cShowLogfileDialog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cShowOptionsDialog_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ VARIANT_BOOL Value);


void __RPC_STUB _clsPDFCreator_cShowOptionsDialog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cSendMail_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR OutputFilename,
    /* [in] */ BSTR Recipients);


void __RPC_STUB _clsPDFCreator_cSendMail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cIsPrintable_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR Filename,
    /* [retval][out] */ VARIANT_BOOL *__MIDL_0044);


void __RPC_STUB _clsPDFCreator_cIsPrintable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cCombineAll_Proxy( 
    _clsPDFCreator * This);


void __RPC_STUB _clsPDFCreator_cCombineAll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cGetPDFCreatorPrinters_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ /* external definition not present */ _Collection **__MIDL_0045);


void __RPC_STUB _clsPDFCreator_cGetPDFCreatorPrinters_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cGetLogfile_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ BSTR *__MIDL_0046);


void __RPC_STUB _clsPDFCreator_cGetLogfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cWriteToLogfile_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR LogStr);


void __RPC_STUB _clsPDFCreator_cWriteToLogfile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cPrintFile_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR Filename);


void __RPC_STUB _clsPDFCreator_cPrintFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cPrintPDFCreatorTestpage_Proxy( 
    _clsPDFCreator * This);


void __RPC_STUB _clsPDFCreator_cPrintPDFCreatorTestpage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cPrintPrinterTestpage_Proxy( 
    _clsPDFCreator * This,
    /* [optional][in] */ BSTR Printername);


void __RPC_STUB _clsPDFCreator_cPrintPrinterTestpage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cReadOptions_Proxy( 
    _clsPDFCreator * This,
    /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0047);


void __RPC_STUB _clsPDFCreator_cReadOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cSaveOptions_Proxy( 
    _clsPDFCreator * This,
    /* [optional][in] */ VARIANT Options1);


void __RPC_STUB _clsPDFCreator_cSaveOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cReadOptionsFromFile_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR INIFilename,
    /* [retval][out] */ _clsPDFCreatorOptions **__MIDL_0048);


void __RPC_STUB _clsPDFCreator_cReadOptionsFromFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cSaveOptionsToFile_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR INIFilename,
    /* [optional][in] */ VARIANT Options1);


void __RPC_STUB _clsPDFCreator_cSaveOptionsToFile_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_get_cPostscriptInfo_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PostscriptFilename,
    /* [in] */ BSTR PropertyName,
    /* [retval][out] */ BSTR *__MIDL_0049);


void __RPC_STUB _clsPDFCreator_get_cPostscriptInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE _clsPDFCreator_cAddPrintjob_Proxy( 
    _clsPDFCreator * This,
    /* [in] */ BSTR PostscriptFilename);


void __RPC_STUB _clsPDFCreator_cAddPrintjob_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___clsPDFCreator_INTERFACE_DEFINED__ */


#ifndef ____clsPDFCreator_DISPINTERFACE_DEFINED__
#define ____clsPDFCreator_DISPINTERFACE_DEFINED__

/* dispinterface __clsPDFCreator */
/* [nonextensible][hidden][version][uuid] */ 


EXTERN_C const IID DIID___clsPDFCreator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FD7E6F0F-EEF8-4667-818A-D4A23ECD649F")
    __clsPDFCreator : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct __clsPDFCreatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __clsPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __clsPDFCreator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __clsPDFCreator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __clsPDFCreator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __clsPDFCreator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __clsPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __clsPDFCreator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } __clsPDFCreatorVtbl;

    interface __clsPDFCreator
    {
        CONST_VTBL struct __clsPDFCreatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __clsPDFCreator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define __clsPDFCreator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define __clsPDFCreator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define __clsPDFCreator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define __clsPDFCreator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define __clsPDFCreator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define __clsPDFCreator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ____clsPDFCreator_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_clsPDFCreatorOptions;

#ifdef __cplusplus

class DECLSPEC_UUID("F8F15298-30FD-427C-BDFA-55E9AB615632")
clsPDFCreatorOptions;
#endif

EXTERN_C const CLSID CLSID_clsPDFCreatorError;

#ifdef __cplusplus

class DECLSPEC_UUID("082391C9-8188-4364-B4FD-66A1524B2097")
clsPDFCreatorError;
#endif

EXTERN_C const CLSID CLSID_clsPDFCreatorInfoSpoolFile;

#ifdef __cplusplus

class DECLSPEC_UUID("85BA86C8-F6FA-4731-BD3A-AD0E6E655BDD")
clsPDFCreatorInfoSpoolFile;
#endif

EXTERN_C const CLSID CLSID_clsPDFCreator;

#ifdef __cplusplus

class DECLSPEC_UUID("3A619AE4-50EC-46C8-B19E-BE8F50DD2F22")
clsPDFCreator;
#endif

#ifndef __IMFCSink_DISPINTERFACE_DEFINED__
#define __IMFCSink_DISPINTERFACE_DEFINED__

/* dispinterface IMFCSink */
/* [uuid] */ 


EXTERN_C const IID DIID_IMFCSink;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("88583FA3-A39F-428E-B9D0-6F15ED2B0848")
    IMFCSink : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IMFCSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMFCSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMFCSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMFCSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMFCSink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMFCSink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMFCSink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMFCSink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IMFCSinkVtbl;

    interface IMFCSink
    {
        CONST_VTBL struct IMFCSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFCSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMFCSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMFCSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMFCSink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMFCSink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMFCSink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMFCSink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IMFCSink_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MFCSink;

#ifdef __cplusplus

class DECLSPEC_UUID("CD7C3A49-D045-4049-AAB9-96AECAE1FE14")
MFCSink;
#endif

#ifndef __IPDFSink_DISPINTERFACE_DEFINED__
#define __IPDFSink_DISPINTERFACE_DEFINED__

/* dispinterface IPDFSink */
/* [uuid] */ 


EXTERN_C const IID DIID_IPDFSink;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F2F65D76-E4BF-4D1C-B1DD-6C2738664FFA")
    IPDFSink : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IPDFSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDFSink * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDFSink * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDFSink * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDFSink * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IPDFSinkVtbl;

    interface IPDFSink
    {
        CONST_VTBL struct IPDFSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDFSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPDFSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPDFSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPDFSink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPDFSink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPDFSink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPDFSink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IPDFSink_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PDFSink;

#ifdef __cplusplus

class DECLSPEC_UUID("0780FC23-9914-4A4E-AA97-9FE17D3A2831")
PDFSink;
#endif
#endif /* __PDFCreator_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


