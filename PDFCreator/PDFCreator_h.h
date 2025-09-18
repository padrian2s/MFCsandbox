

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Wed Aug 15 14:17:34 2007
 */
/* Compiler settings for .\PDFCreator.idl:
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

#ifndef __IPDFCreator_FWD_DEFINED__
#define __IPDFCreator_FWD_DEFINED__
typedef interface IPDFCreator IPDFCreator;
#endif 	/* __IPDFCreator_FWD_DEFINED__ */


#ifndef __PDFCreator_FWD_DEFINED__
#define __PDFCreator_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDFCreator PDFCreator;
#else
typedef struct PDFCreator PDFCreator;
#endif /* __cplusplus */

#endif 	/* __PDFCreator_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __PDFCreator_LIBRARY_DEFINED__
#define __PDFCreator_LIBRARY_DEFINED__

/* library PDFCreator */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_PDFCreator;

#ifndef __IPDFCreator_DISPINTERFACE_DEFINED__
#define __IPDFCreator_DISPINTERFACE_DEFINED__

/* dispinterface IPDFCreator */
/* [uuid] */ 


EXTERN_C const IID DIID_IPDFCreator;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4A42464A-C05A-4151-918C-87966E8AC568")
    IPDFCreator : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IPDFCreatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDFCreator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDFCreator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDFCreator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDFCreator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDFCreator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDFCreator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IPDFCreatorVtbl;

    interface IPDFCreator
    {
        CONST_VTBL struct IPDFCreatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDFCreator_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPDFCreator_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPDFCreator_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPDFCreator_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPDFCreator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPDFCreator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPDFCreator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IPDFCreator_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PDFCreator;

#ifdef __cplusplus

class DECLSPEC_UUID("D88E9723-9BA4-4B53-896A-9F50A3DF4281")
PDFCreator;
#endif
#endif /* __PDFCreator_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


