

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue May 28 23:19:08 2013
 */
/* Compiler settings for xxIeOcr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

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

MIDL_DEFINE_GUID(IID, LIBID_xxIeOcrLib,0x8C9E3330,0x6B81,0x4E49,0xBA,0xE8,0xC6,0xE0,0x5B,0x53,0xC0,0x32);


MIDL_DEFINE_GUID(IID, DIID__DxxIeOcr,0x7EAAAC8B,0x2B3B,0x4DC5,0xA8,0xDD,0xCB,0x45,0x11,0x72,0x1F,0xF3);


MIDL_DEFINE_GUID(IID, DIID__DxxIeOcrEvents,0x1750CCDE,0x572C,0x440B,0x83,0xAF,0xD6,0x0B,0x85,0xBA,0xB4,0xBF);


MIDL_DEFINE_GUID(CLSID, CLSID_xxIeOcr,0x32B6C7B0,0x80C4,0x4797,0x9F,0xA7,0xA2,0x42,0x36,0xC1,0xB0,0xAB);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



