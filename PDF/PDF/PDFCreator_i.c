

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_PDFCreator,0x1CE9DC08,0x9FBC,0x45C6,0x8A,0x7C,0x4F,0xE1,0xE2,0x08,0xA6,0x13);


MIDL_DEFINE_GUID(IID, IID__clsPDFCreatorOptions,0xEDD16D7E,0x7339,0x4C43,0xBA,0x18,0xF0,0x00,0x77,0x16,0x5F,0xFE);


MIDL_DEFINE_GUID(IID, IID__clsPDFCreatorError,0x63BE3BC3,0x2B1D,0x4456,0xBF,0xC7,0x90,0x00,0x99,0xF9,0x4A,0xA2);


MIDL_DEFINE_GUID(IID, IID__clsPDFCreatorInfoSpoolFile,0x2E2E2568,0xAA5B,0x4535,0x82,0x91,0xC8,0x93,0x0D,0x17,0x60,0xC1);


MIDL_DEFINE_GUID(IID, IID__clsPDFCreator,0x5A2893D6,0xF5EF,0x4E30,0x99,0x60,0x34,0x18,0xC5,0x8C,0x17,0xA4);


MIDL_DEFINE_GUID(IID, DIID___clsPDFCreator,0xFD7E6F0F,0xEEF8,0x4667,0x81,0x8A,0xD4,0xA2,0x3E,0xCD,0x64,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_clsPDFCreatorOptions,0xF8F15298,0x30FD,0x427C,0xBD,0xFA,0x55,0xE9,0xAB,0x61,0x56,0x32);


MIDL_DEFINE_GUID(CLSID, CLSID_clsPDFCreatorError,0x082391C9,0x8188,0x4364,0xB4,0xFD,0x66,0xA1,0x52,0x4B,0x20,0x97);


MIDL_DEFINE_GUID(CLSID, CLSID_clsPDFCreatorInfoSpoolFile,0x85BA86C8,0xF6FA,0x4731,0xBD,0x3A,0xAD,0x0E,0x6E,0x65,0x5B,0xDD);


MIDL_DEFINE_GUID(CLSID, CLSID_clsPDFCreator,0x3A619AE4,0x50EC,0x46C8,0xB1,0x9E,0xBE,0x8F,0x50,0xDD,0x2F,0x22);


MIDL_DEFINE_GUID(IID, DIID_IMFCSink,0x88583FA3,0xA39F,0x428E,0xB9,0xD0,0x6F,0x15,0xED,0x2B,0x08,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_MFCSink,0xCD7C3A49,0xD045,0x4049,0xAA,0xB9,0x96,0xAE,0xCA,0xE1,0xFE,0x14);


MIDL_DEFINE_GUID(IID, DIID_IPDFSink,0xF2F65D76,0xE4BF,0x4D1C,0xB1,0xDD,0x6C,0x27,0x38,0x66,0x4F,0xFA);


MIDL_DEFINE_GUID(CLSID, CLSID_PDFSink,0x0780FC23,0x9914,0x4A4E,0xAA,0x97,0x9F,0xE1,0x7D,0x3A,0x28,0x31);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

