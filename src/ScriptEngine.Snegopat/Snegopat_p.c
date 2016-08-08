

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Aug 09 00:25:14 2016
 */
/* Compiler settings for Snegopat.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#include "Snegopat_h.h"

#define TYPE_FORMAT_STRING_SIZE   1105                              
#define PROC_FORMAT_STRING_SIZE   343                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _Snegopat_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Snegopat_MIDL_TYPE_FORMAT_STRING;

typedef struct _Snegopat_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Snegopat_MIDL_PROC_FORMAT_STRING;

typedef struct _Snegopat_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Snegopat_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Snegopat_MIDL_TYPE_FORMAT_STRING Snegopat__MIDL_TypeFormatString;
extern const Snegopat_MIDL_PROC_FORMAT_STRING Snegopat__MIDL_ProcFormatString;
extern const Snegopat_MIDL_EXPR_FORMAT_STRING Snegopat__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAddinLoader_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAddinLoader_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAddinMacroses_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAddinMacroses_ProxyInfo;


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


static const Snegopat_MIDL_PROC_FORMAT_STRING Snegopat__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure proto */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure load */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 52 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uri */

/* 60 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter fullPath */

/* 66 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter uniqueName */

/* 72 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter displayName */

/* 78 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Parameter result */

/* 84 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure canUnload */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x5 ),	/* 5 */
/* 104 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x22 ),	/* 34 */
/* 110 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 112 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fullPath */

/* 120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter addin */

/* 126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter result */

/* 132 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 136 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unload */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x6 ),	/* 6 */
/* 152 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x22 ),	/* 34 */
/* 158 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 160 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fullPath */

/* 168 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 170 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 172 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter addin */

/* 174 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 176 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 178 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter result */

/* 180 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 182 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 184 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 188 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure loadCommandName */

/* 192 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x7 ),	/* 7 */
/* 200 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 206 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 208 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 210 */	NdrFcShort( 0x1 ),	/* 1 */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */

/* 216 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 218 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 220 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 224 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectLoadURI */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 242 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 244 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */

/* 252 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 254 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 256 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure macroses */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 280 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter result */

/* 288 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 290 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 292 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 296 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure invokeMacros */

/* 300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 308 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 316 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter MacrosName */

/* 324 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter result */

/* 330 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Snegopat_MIDL_TYPE_FORMAT_STRING Snegopat__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x1c ),	/* Offset= 28 (32) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xe ),	/* Offset= 14 (22) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (10) */
/* 28 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x4 ),	/* 4 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffde ),	/* Offset= -34 (6) */
/* 42 */	
			0x12, 0x0,	/* FC_UP */
/* 44 */	NdrFcShort( 0xffea ),	/* Offset= -22 (22) */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (42) */
/* 56 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 84 */	NdrFcShort( 0x3e0 ),	/* Offset= 992 (1076) */
/* 86 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 88 */	NdrFcShort( 0x2 ),	/* Offset= 2 (90) */
/* 90 */	
			0x13, 0x0,	/* FC_OP */
/* 92 */	NdrFcShort( 0x3c6 ),	/* Offset= 966 (1058) */
/* 94 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 96 */	NdrFcShort( 0x18 ),	/* 24 */
/* 98 */	NdrFcShort( 0xa ),	/* 10 */
/* 100 */	NdrFcLong( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0x5a ),	/* Offset= 90 (194) */
/* 106 */	NdrFcLong( 0xd ),	/* 13 */
/* 110 */	NdrFcShort( 0x7e ),	/* Offset= 126 (236) */
/* 112 */	NdrFcLong( 0x9 ),	/* 9 */
/* 116 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (292) */
/* 118 */	NdrFcLong( 0xc ),	/* 12 */
/* 122 */	NdrFcShort( 0x2aa ),	/* Offset= 682 (804) */
/* 124 */	NdrFcLong( 0x24 ),	/* 36 */
/* 128 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (852) */
/* 130 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 134 */	NdrFcShort( 0x2f0 ),	/* Offset= 752 (886) */
/* 136 */	NdrFcLong( 0x10 ),	/* 16 */
/* 140 */	NdrFcShort( 0x30a ),	/* Offset= 778 (918) */
/* 142 */	NdrFcLong( 0x2 ),	/* 2 */
/* 146 */	NdrFcShort( 0x324 ),	/* Offset= 804 (950) */
/* 148 */	NdrFcLong( 0x3 ),	/* 3 */
/* 152 */	NdrFcShort( 0x33e ),	/* Offset= 830 (982) */
/* 154 */	NdrFcLong( 0x14 ),	/* 20 */
/* 158 */	NdrFcShort( 0x358 ),	/* Offset= 856 (1014) */
/* 160 */	NdrFcShort( 0xffff ),	/* Offset= -1 (159) */
/* 162 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 172 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 174 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	0x13, 0x0,	/* FC_OP */
/* 188 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (22) */
/* 190 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 192 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 194 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 200 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 206 */	0x11, 0x0,	/* FC_RP */
/* 208 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (162) */
/* 210 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 214 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 224 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 228 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 230 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 232 */	NdrFcShort( 0xff54 ),	/* Offset= -172 (60) */
/* 234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 236 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x6 ),	/* Offset= 6 (248) */
/* 244 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x11, 0x0,	/* FC_RP */
/* 250 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (214) */
/* 252 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 254 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 264 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 266 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 268 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 270 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 280 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 284 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 288 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (252) */
/* 290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 292 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x6 ),	/* Offset= 6 (304) */
/* 300 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 302 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 304 */	
			0x11, 0x0,	/* FC_RP */
/* 306 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (270) */
/* 308 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 310 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 312 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 314 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 316 */	NdrFcShort( 0x2 ),	/* Offset= 2 (318) */
/* 318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 320 */	NdrFcShort( 0x2f ),	/* 47 */
/* 322 */	NdrFcLong( 0x14 ),	/* 20 */
/* 326 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 328 */	NdrFcLong( 0x3 ),	/* 3 */
/* 332 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 334 */	NdrFcLong( 0x11 ),	/* 17 */
/* 338 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 340 */	NdrFcLong( 0x2 ),	/* 2 */
/* 344 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 346 */	NdrFcLong( 0x4 ),	/* 4 */
/* 350 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 352 */	NdrFcLong( 0x5 ),	/* 5 */
/* 356 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 358 */	NdrFcLong( 0xb ),	/* 11 */
/* 362 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 364 */	NdrFcLong( 0xa ),	/* 10 */
/* 368 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 370 */	NdrFcLong( 0x6 ),	/* 6 */
/* 374 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (606) */
/* 376 */	NdrFcLong( 0x7 ),	/* 7 */
/* 380 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 382 */	NdrFcLong( 0x8 ),	/* 8 */
/* 386 */	NdrFcShort( 0xfe84 ),	/* Offset= -380 (6) */
/* 388 */	NdrFcLong( 0xd ),	/* 13 */
/* 392 */	NdrFcShort( 0xfeb4 ),	/* Offset= -332 (60) */
/* 394 */	NdrFcLong( 0x9 ),	/* 9 */
/* 398 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (252) */
/* 400 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 404 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (612) */
/* 406 */	NdrFcLong( 0x24 ),	/* 36 */
/* 410 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (620) */
/* 412 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 416 */	NdrFcShort( 0xcc ),	/* Offset= 204 (620) */
/* 418 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 422 */	NdrFcShort( 0xfc ),	/* Offset= 252 (674) */
/* 424 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 428 */	NdrFcShort( 0xfa ),	/* Offset= 250 (678) */
/* 430 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 434 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (682) */
/* 436 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 440 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (686) */
/* 442 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 446 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (690) */
/* 448 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 452 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (694) */
/* 454 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 458 */	NdrFcShort( 0xdc ),	/* Offset= 220 (678) */
/* 460 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 464 */	NdrFcShort( 0xda ),	/* Offset= 218 (682) */
/* 466 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 470 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (698) */
/* 472 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 476 */	NdrFcShort( 0xda ),	/* Offset= 218 (694) */
/* 478 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 482 */	NdrFcShort( 0xdc ),	/* Offset= 220 (702) */
/* 484 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 488 */	NdrFcShort( 0xda ),	/* Offset= 218 (706) */
/* 490 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 494 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (710) */
/* 496 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 500 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (714) */
/* 502 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 506 */	NdrFcShort( 0xdc ),	/* Offset= 220 (726) */
/* 508 */	NdrFcLong( 0x10 ),	/* 16 */
/* 512 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 514 */	NdrFcLong( 0x12 ),	/* 18 */
/* 518 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 520 */	NdrFcLong( 0x13 ),	/* 19 */
/* 524 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 526 */	NdrFcLong( 0x15 ),	/* 21 */
/* 530 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 532 */	NdrFcLong( 0x16 ),	/* 22 */
/* 536 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 538 */	NdrFcLong( 0x17 ),	/* 23 */
/* 542 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 544 */	NdrFcLong( 0xe ),	/* 14 */
/* 548 */	NdrFcShort( 0xba ),	/* Offset= 186 (734) */
/* 550 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 554 */	NdrFcShort( 0xbe ),	/* Offset= 190 (744) */
/* 556 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 560 */	NdrFcShort( 0xbc ),	/* Offset= 188 (748) */
/* 562 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 566 */	NdrFcShort( 0x70 ),	/* Offset= 112 (678) */
/* 568 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 572 */	NdrFcShort( 0x6e ),	/* Offset= 110 (682) */
/* 574 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 578 */	NdrFcShort( 0x6c ),	/* Offset= 108 (686) */
/* 580 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 584 */	NdrFcShort( 0x62 ),	/* Offset= 98 (682) */
/* 586 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 590 */	NdrFcShort( 0x5c ),	/* Offset= 92 (682) */
/* 592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* Offset= 0 (596) */
/* 598 */	NdrFcLong( 0x1 ),	/* 1 */
/* 602 */	NdrFcShort( 0x0 ),	/* Offset= 0 (602) */
/* 604 */	NdrFcShort( 0xffff ),	/* Offset= -1 (603) */
/* 606 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 608 */	NdrFcShort( 0x8 ),	/* 8 */
/* 610 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 612 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (616) */
/* 616 */	
			0x13, 0x0,	/* FC_OP */
/* 618 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1058) */
/* 620 */	
			0x13, 0x0,	/* FC_OP */
/* 622 */	NdrFcShort( 0x20 ),	/* Offset= 32 (654) */
/* 624 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 626 */	NdrFcLong( 0x2f ),	/* 47 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 640 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 642 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 650 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 652 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 654 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 656 */	NdrFcShort( 0x10 ),	/* 16 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xa ),	/* Offset= 10 (670) */
/* 662 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 664 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 666 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (624) */
/* 668 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 670 */	
			0x13, 0x0,	/* FC_OP */
/* 672 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (642) */
/* 674 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 676 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 678 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 680 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 682 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 684 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 686 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 688 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 690 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 692 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 694 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 696 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 698 */	
			0x13, 0x0,	/* FC_OP */
/* 700 */	NdrFcShort( 0xffa2 ),	/* Offset= -94 (606) */
/* 702 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 704 */	NdrFcShort( 0xfd46 ),	/* Offset= -698 (6) */
/* 706 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 708 */	NdrFcShort( 0xfd78 ),	/* Offset= -648 (60) */
/* 710 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 712 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (252) */
/* 714 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 716 */	NdrFcShort( 0x2 ),	/* Offset= 2 (718) */
/* 718 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 720 */	NdrFcShort( 0x2 ),	/* Offset= 2 (722) */
/* 722 */	
			0x13, 0x0,	/* FC_OP */
/* 724 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1058) */
/* 726 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (730) */
/* 730 */	
			0x13, 0x0,	/* FC_OP */
/* 732 */	NdrFcShort( 0x14 ),	/* Offset= 20 (752) */
/* 734 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 736 */	NdrFcShort( 0x10 ),	/* 16 */
/* 738 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 740 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 742 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 744 */	
			0x13, 0x0,	/* FC_OP */
/* 746 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (734) */
/* 748 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 750 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 754 */	NdrFcShort( 0x20 ),	/* 32 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* Offset= 0 (758) */
/* 760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 762 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 764 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 766 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (308) */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x4 ),	/* 4 */
/* 776 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 782 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 784 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 786 */	NdrFcShort( 0x4 ),	/* 4 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	0x13, 0x0,	/* FC_OP */
/* 798 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (752) */
/* 800 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 802 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 804 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x6 ),	/* Offset= 6 (816) */
/* 812 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 814 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 816 */	
			0x11, 0x0,	/* FC_RP */
/* 818 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (772) */
/* 820 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0x4 ),	/* 4 */
/* 824 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 830 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 832 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 844 */	0x13, 0x0,	/* FC_OP */
/* 846 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (654) */
/* 848 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 850 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 852 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x6 ),	/* Offset= 6 (864) */
/* 860 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 862 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 864 */	
			0x11, 0x0,	/* FC_RP */
/* 866 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (820) */
/* 868 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 874 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 876 */	NdrFcShort( 0x10 ),	/* 16 */
/* 878 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 880 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 882 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (868) */
			0x5b,		/* FC_END */
/* 886 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x18 ),	/* 24 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0xa ),	/* Offset= 10 (902) */
/* 894 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 896 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (874) */
/* 900 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 902 */	
			0x11, 0x0,	/* FC_RP */
/* 904 */	NdrFcShort( 0xfd4e ),	/* Offset= -690 (214) */
/* 906 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 908 */	NdrFcShort( 0x1 ),	/* 1 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 918 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 930 */	0x13, 0x0,	/* FC_OP */
/* 932 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (906) */
/* 934 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 938 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 940 */	NdrFcShort( 0x2 ),	/* 2 */
/* 942 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 948 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 950 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 958 */	NdrFcShort( 0x4 ),	/* 4 */
/* 960 */	NdrFcShort( 0x4 ),	/* 4 */
/* 962 */	0x13, 0x0,	/* FC_OP */
/* 964 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (938) */
/* 966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 968 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 970 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 980 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 982 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 986 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 988 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 994 */	0x13, 0x0,	/* FC_OP */
/* 996 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (970) */
/* 998 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1000 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1002 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1012 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1014 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1026 */	0x13, 0x0,	/* FC_OP */
/* 1028 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (1002) */
/* 1030 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1032 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1034 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1038 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1040 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1042 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1048 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1050 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1052 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1054 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1034) */
/* 1056 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1058 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1060 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1062 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1042) */
/* 1064 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1064) */
/* 1066 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1068 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1070 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1072 */	NdrFcShort( 0xfc2e ),	/* Offset= -978 (94) */
/* 1074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1076 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0xfc1a ),	/* Offset= -998 (86) */
/* 1086 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1088 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1094) */
/* 1090 */	
			0x13, 0x0,	/* FC_OP */
/* 1092 */	NdrFcShort( 0xfeac ),	/* Offset= -340 (752) */
/* 1094 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1096 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1098 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1102 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1090) */

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



/* Standard interface: __MIDL_itf_Snegopat_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAddinLoader, ver. 1.0,
   GUID={0x2BEEF9E6,0xAF34,0x4593,{0x9E,0x73,0x3D,0x07,0xEA,0xA4,0xCF,0x0D}} */

#pragma code_seg(".orpc")
static const unsigned short IAddinLoader_FormatStringOffsetTable[] =
    {
    0,
    36,
    96,
    144,
    192,
    228
    };

static const MIDL_STUBLESS_PROXY_INFO IAddinLoader_ProxyInfo =
    {
    &Object_StubDesc,
    Snegopat__MIDL_ProcFormatString.Format,
    &IAddinLoader_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAddinLoader_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Snegopat__MIDL_ProcFormatString.Format,
    &IAddinLoader_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IAddinLoaderProxyVtbl = 
{
    &IAddinLoader_ProxyInfo,
    &IID_IAddinLoader,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAddinLoader::proto */ ,
    (void *) (INT_PTR) -1 /* IAddinLoader::load */ ,
    (void *) (INT_PTR) -1 /* IAddinLoader::canUnload */ ,
    (void *) (INT_PTR) -1 /* IAddinLoader::unload */ ,
    (void *) (INT_PTR) -1 /* IAddinLoader::loadCommandName */ ,
    (void *) (INT_PTR) -1 /* IAddinLoader::selectLoadURI */
};

const CInterfaceStubVtbl _IAddinLoaderStubVtbl =
{
    &IID_IAddinLoader,
    &IAddinLoader_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAddinMacroses, ver. 1.0,
   GUID={0x0CCEA8E6,0xD187,0x4B84,{0xB7,0x4D,0x85,0x07,0x9F,0x8E,0x20,0x08}} */

#pragma code_seg(".orpc")
static const unsigned short IAddinMacroses_FormatStringOffsetTable[] =
    {
    264,
    300
    };

static const MIDL_STUBLESS_PROXY_INFO IAddinMacroses_ProxyInfo =
    {
    &Object_StubDesc,
    Snegopat__MIDL_ProcFormatString.Format,
    &IAddinMacroses_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAddinMacroses_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Snegopat__MIDL_ProcFormatString.Format,
    &IAddinMacroses_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IAddinMacrosesProxyVtbl = 
{
    &IAddinMacroses_ProxyInfo,
    &IID_IAddinMacroses,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAddinMacroses::macroses */ ,
    (void *) (INT_PTR) -1 /* IAddinMacroses::invokeMacros */
};

const CInterfaceStubVtbl _IAddinMacrosesStubVtbl =
{
    &IID_IAddinMacroses,
    &IAddinMacroses_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
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
    Snegopat__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Snegopat_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAddinMacrosesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAddinLoaderProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Snegopat_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAddinMacrosesStubVtbl,
    ( CInterfaceStubVtbl *) &_IAddinLoaderStubVtbl,
    0
};

PCInterfaceName const _Snegopat_InterfaceNamesList[] = 
{
    "IAddinMacroses",
    "IAddinLoader",
    0
};


#define _Snegopat_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Snegopat, pIID, n)

int __stdcall _Snegopat_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Snegopat, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Snegopat, 2, *pIndex )
    
}

const ExtendedProxyFileInfo Snegopat_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Snegopat_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Snegopat_StubVtblList,
    (const PCInterfaceName * ) & _Snegopat_InterfaceNamesList,
    0, /* no delegation */
    & _Snegopat_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

