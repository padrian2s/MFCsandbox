

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Mon Aug 27 15:40:36 2007
 */
/* Compiler settings for \MFCsandbox\VBEventswithVC\VBeventswithVC\VBActiveX\VBEvents.IDL:
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


#ifndef __VBEvents_h__
#define __VBEvents_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___clsEventSrc_FWD_DEFINED__
#define ___clsEventSrc_FWD_DEFINED__
typedef interface _clsEventSrc _clsEventSrc;
#endif 	/* ___clsEventSrc_FWD_DEFINED__ */


#ifndef ____clsEventSrc_FWD_DEFINED__
#define ____clsEventSrc_FWD_DEFINED__
typedef interface __clsEventSrc __clsEventSrc;
#endif 	/* ____clsEventSrc_FWD_DEFINED__ */


#ifndef __clsEventSrc_FWD_DEFINED__
#define __clsEventSrc_FWD_DEFINED__

#ifdef __cplusplus
typedef class clsEventSrc clsEventSrc;
#else
typedef struct clsEventSrc clsEventSrc;
#endif /* __cplusplus */

#endif 	/* __clsEventSrc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __VBEvents_LIBRARY_DEFINED__
#define __VBEvents_LIBRARY_DEFINED__

/* library VBEvents */
/* [version][uuid] */ 




EXTERN_C const IID LIBID_VBEvents;

#ifndef ___clsEventSrc_INTERFACE_DEFINED__
#define ___clsEventSrc_INTERFACE_DEFINED__

/* interface _clsEventSrc */
/* [object][oleautomation][nonextensible][dual][hidden][version][uuid] */ 


EXTERN_C const IID IID__clsEventSrc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("128D13FE-16F7-4AC0-BFBE-557567FA1A58")
    _clsEventSrc : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE prcFireEvent( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _clsEventSrcVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _clsEventSrc * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _clsEventSrc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _clsEventSrc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _clsEventSrc * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _clsEventSrc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _clsEventSrc * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _clsEventSrc * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *prcFireEvent )( 
            _clsEventSrc * This);
        
        END_INTERFACE
    } _clsEventSrcVtbl;

    interface _clsEventSrc
    {
        CONST_VTBL struct _clsEventSrcVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _clsEventSrc_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _clsEventSrc_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _clsEventSrc_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _clsEventSrc_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _clsEventSrc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _clsEventSrc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _clsEventSrc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define _clsEventSrc_prcFireEvent(This)	\
    (This)->lpVtbl -> prcFireEvent(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [id] */ HRESULT STDMETHODCALLTYPE _clsEventSrc_prcFireEvent_Proxy( 
    _clsEventSrc * This);


void __RPC_STUB _clsEventSrc_prcFireEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* ___clsEventSrc_INTERFACE_DEFINED__ */


#ifndef ____clsEventSrc_DISPINTERFACE_DEFINED__
#define ____clsEventSrc_DISPINTERFACE_DEFINED__

/* dispinterface __clsEventSrc */
/* [nonextensible][hidden][version][uuid] */ 


EXTERN_C const IID DIID___clsEventSrc;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5EEE17B4-95A5-4818-B71E-8428D434268B")
    __clsEventSrc : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct __clsEventSrcVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __clsEventSrc * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __clsEventSrc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __clsEventSrc * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __clsEventSrc * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __clsEventSrc * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __clsEventSrc * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __clsEventSrc * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } __clsEventSrcVtbl;

    interface __clsEventSrc
    {
        CONST_VTBL struct __clsEventSrcVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __clsEventSrc_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define __clsEventSrc_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define __clsEventSrc_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define __clsEventSrc_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define __clsEventSrc_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define __clsEventSrc_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define __clsEventSrc_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ____clsEventSrc_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_clsEventSrc;

#ifdef __cplusplus

class DECLSPEC_UUID("46F0E144-B78D-4912-A63F-AE7EFB7961CF")
clsEventSrc;
#endif
#endif /* __VBEvents_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


