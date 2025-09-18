/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue May 18 13:46:53 2004
 */
/* Compiler settings for g:\Main\Control\Control.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
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

const IID IID_IEventControl = {0x23FDAB0E,0x506F,0x4B8E,{0xB3,0xC2,0x1C,0x50,0xEF,0x71,0x05,0x5B}};


const IID LIBID_CONTROLLib = {0x847E9C38,0xFD1F,0x4637,{0x91,0x81,0xBC,0x5C,0xB8,0xA3,0xAA,0xBB}};


const IID DIID__IEventControlEvents = {0xC29AFB4B,0x0F35,0x48F4,{0xAB,0xA7,0x49,0xEE,0x56,0x56,0x34,0x41}};


const CLSID CLSID_EventControl = {0x7CE7C2B3,0x122D,0x4343,{0x8C,0x18,0xF1,0x54,0xDF,0x04,0x91,0x6B}};


#ifdef __cplusplus
}
#endif

