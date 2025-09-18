/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Mar 17 00:46:37 2001
 */
/* Compiler settings for D:\Submission\VBeventswithVC\VBActiveX\VBEvents.IDL:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __VBEvents_h__
#define __VBEvents_h__

#ifdef __cplusplus
extern "C"{
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


void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 


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
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _clsEventSrc __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _clsEventSrc __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _clsEventSrc __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _clsEventSrc __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _clsEventSrc __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _clsEventSrc __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _clsEventSrc __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *prcFireEvent )( 
            _clsEventSrc __RPC_FAR * This);
        
        END_INTERFACE
    } _clsEventSrcVtbl;

    interface _clsEventSrc
    {
        CONST_VTBL struct _clsEventSrcVtbl __RPC_FAR *lpVtbl;
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
    _clsEventSrc __RPC_FAR * This);


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
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            __clsEventSrc __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            __clsEventSrc __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            __clsEventSrc __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            __clsEventSrc __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            __clsEventSrc __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            __clsEventSrc __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            __clsEventSrc __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } __clsEventSrcVtbl;

    interface __clsEventSrc
    {
        CONST_VTBL struct __clsEventSrcVtbl __RPC_FAR *lpVtbl;
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
