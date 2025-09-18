

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Mon Aug 27 15:08:00 2007
 */
/* Compiler settings for .\TEST.ODL:
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


#ifndef __itest_h__
#define __itest_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITest_FWD_DEFINED__
#define __ITest_FWD_DEFINED__
typedef interface ITest ITest;
#endif 	/* __ITest_FWD_DEFINED__ */


#ifndef __CTestDoc_FWD_DEFINED__
#define __CTestDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CTestDoc CTestDoc;
#else
typedef struct CTestDoc CTestDoc;
#endif /* __cplusplus */

#endif 	/* __CTestDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __Test_LIBRARY_DEFINED__
#define __Test_LIBRARY_DEFINED__

/* library Test */
/* [lcid][version][uuid] */ 


DEFINE_GUID(LIBID_Test,0xC04AADF0,0x2A82,0x11CF,0x84,0xF5,0x00,0xAA,0x00,0xC0,0x06,0xCF);

#ifndef __ITest_INTERFACE_DEFINED__
#define __ITest_INTERFACE_DEFINED__

/* interface ITest */
/* [object][dual][oleautomation][uuid] */ 


DEFINE_GUID(IID_ITest,0xC04AADF1,0x2A82,0x11CF,0x84,0xF5,0x00,0xAA,0x00,0xC0,0x06,0xCF);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C04AADF1-2A82-11CF-84F5-00AA00C006CF")
    ITest : public IDispatch
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TestProperty( 
            /* [in] */ short nNewValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TestProperty( 
            /* [retval][out] */ short *retval) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TestMethod( 
            /* [in] */ short n,
            /* [retval][out] */ short *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITest * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITest * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TestProperty )( 
            ITest * This,
            /* [in] */ short nNewValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TestProperty )( 
            ITest * This,
            /* [retval][out] */ short *retval);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TestMethod )( 
            ITest * This,
            /* [in] */ short n,
            /* [retval][out] */ short *retval);
        
        END_INTERFACE
    } ITestVtbl;

    interface ITest
    {
        CONST_VTBL struct ITestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITest_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITest_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITest_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITest_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define ITest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define ITest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define ITest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define ITest_put_TestProperty(This,nNewValue)	\
    (This)->lpVtbl -> put_TestProperty(This,nNewValue)

#define ITest_get_TestProperty(This,retval)	\
    (This)->lpVtbl -> get_TestProperty(This,retval)

#define ITest_TestMethod(This,n,retval)	\
    (This)->lpVtbl -> TestMethod(This,n,retval)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [propput][id] */ HRESULT STDMETHODCALLTYPE ITest_put_TestProperty_Proxy( 
    ITest * This,
    /* [in] */ short nNewValue);


void __RPC_STUB ITest_put_TestProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [propget][id] */ HRESULT STDMETHODCALLTYPE ITest_get_TestProperty_Proxy( 
    ITest * This,
    /* [retval][out] */ short *retval);


void __RPC_STUB ITest_get_TestProperty_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ITest_TestMethod_Proxy( 
    ITest * This,
    /* [in] */ short n,
    /* [retval][out] */ short *retval);


void __RPC_STUB ITest_TestMethod_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITest_INTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_CTestDoc,0x943B3F80,0xCD85,0x11CE,0x81,0x5A,0x00,0xAA,0x00,0x60,0xD7,0x33);

#ifdef __cplusplus

class DECLSPEC_UUID("943B3F80-CD85-11CE-815A-00AA0060D733")
CTestDoc;
#endif
#endif /* __Test_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


