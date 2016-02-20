

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "NupicBridge.h"

#define TYPE_FORMAT_STRING_SIZE   1075                              
#define PROC_FORMAT_STRING_SIZE   235                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _NupicBridge_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } NupicBridge_MIDL_TYPE_FORMAT_STRING;

typedef struct _NupicBridge_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } NupicBridge_MIDL_PROC_FORMAT_STRING;

typedef struct _NupicBridge_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } NupicBridge_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const NupicBridge_MIDL_TYPE_FORMAT_STRING NupicBridge__MIDL_TypeFormatString;
extern const NupicBridge_MIDL_PROC_FORMAT_STRING NupicBridge__MIDL_ProcFormatString;
extern const NupicBridge_MIDL_EXPR_FORMAT_STRING NupicBridge__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INupicBridge_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INupicBridge_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const NupicBridge_MIDL_PROC_FORMAT_STRING NupicBridge__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure init */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter predictedField */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter stepsAhead */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure create_model */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelParamsDir */

/* 66 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure load_model */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x9 ),	/* 9 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 94 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x1 ),	/* 1 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelSaveDir */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 106 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure save_model */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0xa ),	/* 10 */
/* 122 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 130 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelSaveDir */

/* 138 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 140 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 142 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure step */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0xb ),	/* 11 */
/* 158 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 166 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter timestampStr */

/* 174 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter names */

/* 180 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter values */

/* 186 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	NdrFcShort( 0x416 ),	/* Type Offset=1046 */

	/* Parameter presult */

/* 192 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure test */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0xc ),	/* 12 */
/* 212 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 220 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const NupicBridge_MIDL_TYPE_FORMAT_STRING NupicBridge__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0x3d8 ),	/* Offset= 984 (1028) */
/* 46 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 48 */	NdrFcShort( 0x18 ),	/* 24 */
/* 50 */	NdrFcShort( 0xa ),	/* 10 */
/* 52 */	NdrFcLong( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x5a ),	/* Offset= 90 (146) */
/* 58 */	NdrFcLong( 0xd ),	/* 13 */
/* 62 */	NdrFcShort( 0x90 ),	/* Offset= 144 (206) */
/* 64 */	NdrFcLong( 0x9 ),	/* 9 */
/* 68 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (262) */
/* 70 */	NdrFcLong( 0xc ),	/* 12 */
/* 74 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (774) */
/* 76 */	NdrFcLong( 0x24 ),	/* 36 */
/* 80 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (822) */
/* 82 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 86 */	NdrFcShort( 0x302 ),	/* Offset= 770 (856) */
/* 88 */	NdrFcLong( 0x10 ),	/* 16 */
/* 92 */	NdrFcShort( 0x31c ),	/* Offset= 796 (888) */
/* 94 */	NdrFcLong( 0x2 ),	/* 2 */
/* 98 */	NdrFcShort( 0x336 ),	/* Offset= 822 (920) */
/* 100 */	NdrFcLong( 0x3 ),	/* 3 */
/* 104 */	NdrFcShort( 0x350 ),	/* Offset= 848 (952) */
/* 106 */	NdrFcLong( 0x14 ),	/* 20 */
/* 110 */	NdrFcShort( 0x36a ),	/* Offset= 874 (984) */
/* 112 */	NdrFcShort( 0xffff ),	/* Offset= -1 (111) */
/* 114 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 124 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 126 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x1 ),	/* 1 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	0x12, 0x0,	/* FC_UP */
/* 140 */	NdrFcShort( 0xff86 ),	/* Offset= -122 (18) */
/* 142 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 158 */	0x11, 0x0,	/* FC_RP */
/* 160 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (114) */
/* 162 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 164 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 166 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 178 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 180 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 182 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 184 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 192 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 194 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 198 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (166) */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x6 ),	/* Offset= 6 (218) */
/* 214 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	
			0x11, 0x0,	/* FC_RP */
/* 220 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (184) */
/* 222 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 224 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 234 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 236 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 238 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 240 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 250 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 254 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 256 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 258 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (222) */
/* 260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x6 ),	/* Offset= 6 (274) */
/* 270 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 272 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 274 */	
			0x11, 0x0,	/* FC_RP */
/* 276 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (240) */
/* 278 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 280 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 282 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 284 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 286 */	NdrFcShort( 0x2 ),	/* Offset= 2 (288) */
/* 288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 290 */	NdrFcShort( 0x2f ),	/* 47 */
/* 292 */	NdrFcLong( 0x14 ),	/* 20 */
/* 296 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 298 */	NdrFcLong( 0x3 ),	/* 3 */
/* 302 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 304 */	NdrFcLong( 0x11 ),	/* 17 */
/* 308 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 310 */	NdrFcLong( 0x2 ),	/* 2 */
/* 314 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 316 */	NdrFcLong( 0x4 ),	/* 4 */
/* 320 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 322 */	NdrFcLong( 0x5 ),	/* 5 */
/* 326 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 328 */	NdrFcLong( 0xb ),	/* 11 */
/* 332 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 334 */	NdrFcLong( 0xa ),	/* 10 */
/* 338 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 340 */	NdrFcLong( 0x6 ),	/* 6 */
/* 344 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (576) */
/* 346 */	NdrFcLong( 0x7 ),	/* 7 */
/* 350 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 352 */	NdrFcLong( 0x8 ),	/* 8 */
/* 356 */	NdrFcShort( 0xfe9e ),	/* Offset= -354 (2) */
/* 358 */	NdrFcLong( 0xd ),	/* 13 */
/* 362 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (166) */
/* 364 */	NdrFcLong( 0x9 ),	/* 9 */
/* 368 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (222) */
/* 370 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 374 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (582) */
/* 376 */	NdrFcLong( 0x24 ),	/* 36 */
/* 380 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (590) */
/* 382 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 386 */	NdrFcShort( 0xcc ),	/* Offset= 204 (590) */
/* 388 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 392 */	NdrFcShort( 0xfc ),	/* Offset= 252 (644) */
/* 394 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 398 */	NdrFcShort( 0xfa ),	/* Offset= 250 (648) */
/* 400 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 404 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (652) */
/* 406 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 410 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (656) */
/* 412 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 416 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (660) */
/* 418 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 422 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (664) */
/* 424 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 428 */	NdrFcShort( 0xdc ),	/* Offset= 220 (648) */
/* 430 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 434 */	NdrFcShort( 0xda ),	/* Offset= 218 (652) */
/* 436 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 440 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (668) */
/* 442 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 446 */	NdrFcShort( 0xda ),	/* Offset= 218 (664) */
/* 448 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 452 */	NdrFcShort( 0xdc ),	/* Offset= 220 (672) */
/* 454 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 458 */	NdrFcShort( 0xda ),	/* Offset= 218 (676) */
/* 460 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 464 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (680) */
/* 466 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 470 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (684) */
/* 472 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 476 */	NdrFcShort( 0xdc ),	/* Offset= 220 (696) */
/* 478 */	NdrFcLong( 0x10 ),	/* 16 */
/* 482 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 484 */	NdrFcLong( 0x12 ),	/* 18 */
/* 488 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 490 */	NdrFcLong( 0x13 ),	/* 19 */
/* 494 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 496 */	NdrFcLong( 0x15 ),	/* 21 */
/* 500 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 502 */	NdrFcLong( 0x16 ),	/* 22 */
/* 506 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 508 */	NdrFcLong( 0x17 ),	/* 23 */
/* 512 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 514 */	NdrFcLong( 0xe ),	/* 14 */
/* 518 */	NdrFcShort( 0xba ),	/* Offset= 186 (704) */
/* 520 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 524 */	NdrFcShort( 0xbe ),	/* Offset= 190 (714) */
/* 526 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 530 */	NdrFcShort( 0xbc ),	/* Offset= 188 (718) */
/* 532 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 536 */	NdrFcShort( 0x70 ),	/* Offset= 112 (648) */
/* 538 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 542 */	NdrFcShort( 0x6e ),	/* Offset= 110 (652) */
/* 544 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 548 */	NdrFcShort( 0x6c ),	/* Offset= 108 (656) */
/* 550 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 554 */	NdrFcShort( 0x62 ),	/* Offset= 98 (652) */
/* 556 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 560 */	NdrFcShort( 0x5c ),	/* Offset= 92 (652) */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x0 ),	/* Offset= 0 (566) */
/* 568 */	NdrFcLong( 0x1 ),	/* 1 */
/* 572 */	NdrFcShort( 0x0 ),	/* Offset= 0 (572) */
/* 574 */	NdrFcShort( 0xffff ),	/* Offset= -1 (573) */
/* 576 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 580 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 582 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 584 */	NdrFcShort( 0x2 ),	/* Offset= 2 (586) */
/* 586 */	
			0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1028) */
/* 590 */	
			0x12, 0x0,	/* FC_UP */
/* 592 */	NdrFcShort( 0x20 ),	/* Offset= 32 (624) */
/* 594 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 596 */	NdrFcLong( 0x2f ),	/* 47 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 608 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 610 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 612 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 616 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 618 */	NdrFcShort( 0x4 ),	/* 4 */
/* 620 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 622 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x10 ),	/* 16 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0xa ),	/* Offset= 10 (640) */
/* 632 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 634 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 636 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (594) */
/* 638 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 640 */	
			0x12, 0x0,	/* FC_UP */
/* 642 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (612) */
/* 644 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 646 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 648 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 650 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 652 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 654 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 658 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 662 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 666 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 668 */	
			0x12, 0x0,	/* FC_UP */
/* 670 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (576) */
/* 672 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 674 */	NdrFcShort( 0xfd60 ),	/* Offset= -672 (2) */
/* 676 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 678 */	NdrFcShort( 0xfe00 ),	/* Offset= -512 (166) */
/* 680 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 682 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (222) */
/* 684 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 686 */	NdrFcShort( 0x2 ),	/* Offset= 2 (688) */
/* 688 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 690 */	NdrFcShort( 0x2 ),	/* Offset= 2 (692) */
/* 692 */	
			0x12, 0x0,	/* FC_UP */
/* 694 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1028) */
/* 696 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 698 */	NdrFcShort( 0x2 ),	/* Offset= 2 (700) */
/* 700 */	
			0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0x14 ),	/* Offset= 20 (722) */
/* 704 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 708 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 710 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 712 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 714 */	
			0x12, 0x0,	/* FC_UP */
/* 716 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (704) */
/* 718 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 720 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 722 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 724 */	NdrFcShort( 0x20 ),	/* 32 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* Offset= 0 (728) */
/* 730 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 732 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 734 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 736 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 738 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (278) */
/* 740 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 742 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 746 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 752 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 754 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x1 ),	/* 1 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	0x12, 0x0,	/* FC_UP */
/* 768 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (722) */
/* 770 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 772 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 774 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x6 ),	/* Offset= 6 (786) */
/* 782 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 786 */	
			0x11, 0x0,	/* FC_RP */
/* 788 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (742) */
/* 790 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 792 */	NdrFcShort( 0x4 ),	/* 4 */
/* 794 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 800 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 802 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 804 */	NdrFcShort( 0x4 ),	/* 4 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	0x12, 0x0,	/* FC_UP */
/* 816 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (624) */
/* 818 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x6 ),	/* Offset= 6 (834) */
/* 830 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 834 */	
			0x11, 0x0,	/* FC_RP */
/* 836 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (790) */
/* 838 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 844 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 848 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 850 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 852 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (838) */
			0x5b,		/* FC_END */
/* 856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x18 ),	/* 24 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0xa ),	/* Offset= 10 (872) */
/* 864 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 866 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 868 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (844) */
/* 870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 872 */	
			0x11, 0x0,	/* FC_RP */
/* 874 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (184) */
/* 876 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 880 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 886 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 888 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 894 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 896 */	NdrFcShort( 0x4 ),	/* 4 */
/* 898 */	NdrFcShort( 0x4 ),	/* 4 */
/* 900 */	0x12, 0x0,	/* FC_UP */
/* 902 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (876) */
/* 904 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 906 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 908 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 910 */	NdrFcShort( 0x2 ),	/* 2 */
/* 912 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 918 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 920 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 926 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	0x12, 0x0,	/* FC_UP */
/* 934 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (908) */
/* 936 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 938 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 940 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 944 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 950 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 952 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 958 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	0x12, 0x0,	/* FC_UP */
/* 966 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (940) */
/* 968 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 970 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 972 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 982 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 984 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 996 */	0x12, 0x0,	/* FC_UP */
/* 998 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (972) */
/* 1000 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1002 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1004 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1010 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1012 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1018 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1020 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1022 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1024 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1004) */
/* 1026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1028 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1030 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1032 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1012) */
/* 1034 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1034) */
/* 1036 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1038 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1040 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1042 */	NdrFcShort( 0xfc1c ),	/* Offset= -996 (46) */
/* 1044 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1046 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0xfc08 ),	/* Offset= -1016 (38) */
/* 1056 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1058 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1064) */
/* 1060 */	
			0x13, 0x0,	/* FC_OP */
/* 1062 */	NdrFcShort( 0xfeac ),	/* Offset= -340 (722) */
/* 1064 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1066 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1068 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1060) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: INupicBridge, ver. 0.0,
   GUID={0xF3C40F9C,0x97DE,0x4B31,{0x9C,0x81,0x8C,0x5E,0x9C,0x1F,0x78,0xDD}} */

#pragma code_seg(".orpc")
static const unsigned short INupicBridge_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42,
    78,
    114,
    150,
    204
    };

static const MIDL_STUBLESS_PROXY_INFO INupicBridge_ProxyInfo =
    {
    &Object_StubDesc,
    NupicBridge__MIDL_ProcFormatString.Format,
    &INupicBridge_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO INupicBridge_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    NupicBridge__MIDL_ProcFormatString.Format,
    &INupicBridge_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _INupicBridgeProxyVtbl = 
{
    &INupicBridge_ProxyInfo,
    &IID_INupicBridge,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::init */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::create_model */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::load_model */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::save_model */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::step */ ,
    (void *) (INT_PTR) -1 /* INupicBridge::test */
};


static const PRPC_STUB_FUNCTION INupicBridge_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _INupicBridgeStubVtbl =
{
    &IID_INupicBridge,
    &INupicBridge_ServerInfo,
    13,
    &INupicBridge_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    NupicBridge__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8000265, /* MIDL Version 8.0.613 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _NupicBridge_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_INupicBridgeProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _NupicBridge_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_INupicBridgeStubVtbl,
    0
};

PCInterfaceName const _NupicBridge_InterfaceNamesList[] = 
{
    "INupicBridge",
    0
};

const IID *  const _NupicBridge_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _NupicBridge_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _NupicBridge, pIID, n)

int __stdcall _NupicBridge_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_NupicBridge_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo NupicBridge_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _NupicBridge_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _NupicBridge_StubVtblList,
    (const PCInterfaceName * ) & _NupicBridge_InterfaceNamesList,
    (const IID ** ) & _NupicBridge_BaseIIDList,
    & _NupicBridge_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

