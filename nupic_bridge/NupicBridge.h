

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for NupicBridge.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0613 
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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __NupicBridge_h__
#define __NupicBridge_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INupicBridge_FWD_DEFINED__
#define __INupicBridge_FWD_DEFINED__
typedef interface INupicBridge INupicBridge;

#endif 	/* __INupicBridge_FWD_DEFINED__ */


#ifndef __NupicBridge_FWD_DEFINED__
#define __NupicBridge_FWD_DEFINED__

#ifdef __cplusplus
typedef class NupicBridge NupicBridge;
#else
typedef struct NupicBridge NupicBridge;
#endif /* __cplusplus */

#endif 	/* __NupicBridge_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __INupicBridge_INTERFACE_DEFINED__
#define __INupicBridge_INTERFACE_DEFINED__

/* interface INupicBridge */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_INupicBridge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3C40F9C-97DE-4B31-9C81-8C5E9C1F78DD")
    INupicBridge : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE init( 
            /* [in] */ BSTR predictedField,
            /* [in] */ int stepsAhead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE create_model( 
            /* [in] */ BSTR modelParamsDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE load_model( 
            /* [in] */ BSTR modelSaveDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE save_model( 
            /* [in] */ BSTR modelSaveDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE step( 
            /* [in] */ BSTR timestampStr,
            /* [in] */ SAFEARRAY * names,
            /* [in] */ SAFEARRAY * values,
            /* [retval][out] */ VARIANT *presult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE test( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INupicBridgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INupicBridge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INupicBridge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INupicBridge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INupicBridge * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INupicBridge * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INupicBridge * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INupicBridge * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *init )( 
            INupicBridge * This,
            /* [in] */ BSTR predictedField,
            /* [in] */ int stepsAhead);
        
        HRESULT ( STDMETHODCALLTYPE *create_model )( 
            INupicBridge * This,
            /* [in] */ BSTR modelParamsDir);
        
        HRESULT ( STDMETHODCALLTYPE *load_model )( 
            INupicBridge * This,
            /* [in] */ BSTR modelSaveDir);
        
        HRESULT ( STDMETHODCALLTYPE *save_model )( 
            INupicBridge * This,
            /* [in] */ BSTR modelSaveDir);
        
        HRESULT ( STDMETHODCALLTYPE *step )( 
            INupicBridge * This,
            /* [in] */ BSTR timestampStr,
            /* [in] */ SAFEARRAY * names,
            /* [in] */ SAFEARRAY * values,
            /* [retval][out] */ VARIANT *presult);
        
        HRESULT ( STDMETHODCALLTYPE *test )( 
            INupicBridge * This);
        
        END_INTERFACE
    } INupicBridgeVtbl;

    interface INupicBridge
    {
        CONST_VTBL struct INupicBridgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INupicBridge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INupicBridge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INupicBridge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INupicBridge_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INupicBridge_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INupicBridge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INupicBridge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INupicBridge_init(This,predictedField,stepsAhead)	\
    ( (This)->lpVtbl -> init(This,predictedField,stepsAhead) ) 

#define INupicBridge_create_model(This,modelParamsDir)	\
    ( (This)->lpVtbl -> create_model(This,modelParamsDir) ) 

#define INupicBridge_load_model(This,modelSaveDir)	\
    ( (This)->lpVtbl -> load_model(This,modelSaveDir) ) 

#define INupicBridge_save_model(This,modelSaveDir)	\
    ( (This)->lpVtbl -> save_model(This,modelSaveDir) ) 

#define INupicBridge_step(This,timestampStr,names,values,presult)	\
    ( (This)->lpVtbl -> step(This,timestampStr,names,values,presult) ) 

#define INupicBridge_test(This)	\
    ( (This)->lpVtbl -> test(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INupicBridge_INTERFACE_DEFINED__ */



#ifndef __NupicBridgeTypeLib_LIBRARY_DEFINED__
#define __NupicBridgeTypeLib_LIBRARY_DEFINED__

/* library NupicBridgeTypeLib */
/* [uuid] */ 


EXTERN_C const IID LIBID_NupicBridgeTypeLib;

EXTERN_C const CLSID CLSID_NupicBridge;

#ifdef __cplusplus

class DECLSPEC_UUID("3894DAC0-35C3-4BCD-9CAB-76B2CFCD0B67")
NupicBridge;
#endif
#endif /* __NupicBridgeTypeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


