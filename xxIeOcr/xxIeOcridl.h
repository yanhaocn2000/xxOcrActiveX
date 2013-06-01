

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __xxIeOcridl_h__
#define __xxIeOcridl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DxxIeOcr_FWD_DEFINED__
#define ___DxxIeOcr_FWD_DEFINED__
typedef interface _DxxIeOcr _DxxIeOcr;
#endif 	/* ___DxxIeOcr_FWD_DEFINED__ */


#ifndef ___DxxIeOcrEvents_FWD_DEFINED__
#define ___DxxIeOcrEvents_FWD_DEFINED__
typedef interface _DxxIeOcrEvents _DxxIeOcrEvents;
#endif 	/* ___DxxIeOcrEvents_FWD_DEFINED__ */


#ifndef __xxIeOcr_FWD_DEFINED__
#define __xxIeOcr_FWD_DEFINED__

#ifdef __cplusplus
typedef class xxIeOcr xxIeOcr;
#else
typedef struct xxIeOcr xxIeOcr;
#endif /* __cplusplus */

#endif 	/* __xxIeOcr_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __xxIeOcrLib_LIBRARY_DEFINED__
#define __xxIeOcrLib_LIBRARY_DEFINED__

/* library xxIeOcrLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_xxIeOcrLib;

#ifndef ___DxxIeOcr_DISPINTERFACE_DEFINED__
#define ___DxxIeOcr_DISPINTERFACE_DEFINED__

/* dispinterface _DxxIeOcr */
/* [uuid] */ 


EXTERN_C const IID DIID__DxxIeOcr;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7EAAAC8B-2B3B-4DC5-A8DD-CB4511721FF3")
    _DxxIeOcr : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DxxIeOcrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DxxIeOcr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DxxIeOcr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DxxIeOcr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DxxIeOcr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DxxIeOcr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DxxIeOcr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DxxIeOcr * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DxxIeOcrVtbl;

    interface _DxxIeOcr
    {
        CONST_VTBL struct _DxxIeOcrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DxxIeOcr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DxxIeOcr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DxxIeOcr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DxxIeOcr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DxxIeOcr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DxxIeOcr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DxxIeOcr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DxxIeOcr_DISPINTERFACE_DEFINED__ */


#ifndef ___DxxIeOcrEvents_DISPINTERFACE_DEFINED__
#define ___DxxIeOcrEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DxxIeOcrEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DxxIeOcrEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1750CCDE-572C-440B-83AF-D60B85BAB4BF")
    _DxxIeOcrEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DxxIeOcrEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DxxIeOcrEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DxxIeOcrEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DxxIeOcrEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DxxIeOcrEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DxxIeOcrEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DxxIeOcrEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DxxIeOcrEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DxxIeOcrEventsVtbl;

    interface _DxxIeOcrEvents
    {
        CONST_VTBL struct _DxxIeOcrEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DxxIeOcrEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DxxIeOcrEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DxxIeOcrEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DxxIeOcrEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DxxIeOcrEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DxxIeOcrEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DxxIeOcrEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DxxIeOcrEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_xxIeOcr;

#ifdef __cplusplus

class DECLSPEC_UUID("32B6C7B0-80C4-4797-9FA7-A24236C1B0AB")
xxIeOcr;
#endif
#endif /* __xxIeOcrLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


