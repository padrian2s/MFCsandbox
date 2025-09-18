/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Mar 17 00:46:37 2001
 */
/* Compiler settings for D:\Submission\VBeventswithVC\VBActiveX\VBEvents.IDL:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID LIBID_VBEvents = {0xBB7B028D,0x7863,0x4916,{0x8E,0x21,0xCA,0xFE,0xF7,0xAA,0xF0,0x4E}};


const IID IID__clsEventSrc = {0x128D13FE,0x16F7,0x4AC0,{0xBF,0xBE,0x55,0x75,0x67,0xFA,0x1A,0x58}};


const IID DIID___clsEventSrc = {0x5EEE17B4,0x95A5,0x4818,{0xB7,0x1E,0x84,0x28,0xD4,0x34,0x26,0x8B}};


const CLSID CLSID_clsEventSrc = {0x46F0E144,0xB78D,0x4912,{0xA6,0x3F,0xAE,0x7E,0xFB,0x79,0x61,0xCF}};


#ifdef __cplusplus
}
#endif

