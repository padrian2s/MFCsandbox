

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Wed Oct 17 13:50:39 2007
 */
/* Compiler settings for .\myExcel.idl:
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


#ifndef __myExcel_h_h__
#define __myExcel_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ImyExcel_FWD_DEFINED__
#define __ImyExcel_FWD_DEFINED__
typedef interface ImyExcel ImyExcel;
#endif 	/* __ImyExcel_FWD_DEFINED__ */


#ifndef __myExcel_FWD_DEFINED__
#define __myExcel_FWD_DEFINED__

#ifdef __cplusplus
typedef class myExcel myExcel;
#else
typedef struct myExcel myExcel;
#endif /* __cplusplus */

#endif 	/* __myExcel_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __myExcel_LIBRARY_DEFINED__
#define __myExcel_LIBRARY_DEFINED__

/* library myExcel */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_myExcel;

#ifndef __ImyExcel_DISPINTERFACE_DEFINED__
#define __ImyExcel_DISPINTERFACE_DEFINED__

/* dispinterface ImyExcel */
/* [uuid] */ 


EXTERN_C const IID DIID_ImyExcel;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("093C96E3-0563-4717-AA0E-ABE05A3D2A51")
    ImyExcel : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ImyExcelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ImyExcel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ImyExcel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ImyExcel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ImyExcel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ImyExcel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ImyExcel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ImyExcel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } ImyExcelVtbl;

    interface ImyExcel
    {
        CONST_VTBL struct ImyExcelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ImyExcel_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ImyExcel_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ImyExcel_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ImyExcel_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ImyExcel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ImyExcel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ImyExcel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ImyExcel_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_myExcel;

#ifdef __cplusplus

class DECLSPEC_UUID("DA29EBF7-D010-4DFD-A113-F33D5D6B2D93")
myExcel;
#endif
#endif /* __myExcel_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


