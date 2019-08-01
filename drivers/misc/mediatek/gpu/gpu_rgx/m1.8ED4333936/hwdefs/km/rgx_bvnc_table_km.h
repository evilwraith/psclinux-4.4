/*************************************************************************/ /*!
@Title          Hardware definition file rgx_bvnc_table_km.h
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

/**************************************************
*       Auto generated file by BVNCTableGen.py    *
*       This file should not be edited manually   *
**************************************************/

#ifndef _RGX_BVNC_TABLE_KM_H_
#define _RGX_BVNC_TABLE_KM_H_

#include "img_types.h"
#include "rgxdefs_km.h"

#define	CSF_MAX_VALUE	(1)
static IMG_UINT32 CSF[] = {2, };

#define	FBCDCArch_MAX_VALUE	(3)
static IMG_UINT32 FBCDCArch[] = {1, 2, 3, };

#define	MCRMB_MAX_VALUE	(2)
static IMG_UINT32 MCRMB[] = {3, 8, };

#define	MCRMS_MAX_VALUE	(5)
static IMG_UINT32 MCRMS[] = {0, 32, 48, 64, 256, };

#define	MDCC_MAX_VALUE	(1)
static IMG_UINT32 MDCC[] = {4, };

#define	NC_MAX_VALUE	(7)
static IMG_UINT32 NC[] = {1, 2, 4, 6, 8, 12, 16, };

#define	NIIP_MAX_VALUE	(10)
static IMG_UINT32 NIIP[] = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, };

#define	PBW_MAX_VALUE	(3)
static IMG_UINT32 PBW[] = {32, 38, 40, };

#define	STEA_MAX_VALUE	(3)
static IMG_UINT32 STEA[] = {1, 2, 4, };

#define	SVCEA_MAX_VALUE	(4)
static IMG_UINT32 SVCEA[] = {1, 2, 3, 4, };

#define	SLCB_MAX_VALUE	(3)
static IMG_UINT32 SLCB[] = {1, 2, 4, };

#define	SLCCLSb_MAX_VALUE	(2)
static IMG_UINT32 SLCCLSb[] = {512, 1024, };

#define	SLCSKB_MAX_VALUE	(7)
static IMG_UINT32 SLCSKB[] = {0, 16, 32, 64, 128, 256, 512, };

#define	VASB_MAX_VALUE	(1)
static IMG_UINT32 VASB[] = {40, };

#define	META_MAX_VALUE	(4)
static IMG_UINT32 META[] = {LTP217, LTP218, MTP218, MTP219, };


IMG_UINT64    gaFeatures[][3]=
{
	{ 0x0001000000020000, 0x0000000040020415, 0x0000000200884020, },
	{ 0x0001000000020005, 0x0000000040020415, 0x0000000200884020, },
	{ 0x0001000000020014, 0x0000000040020415, 0x0000000200884020, },
	{ 0x000100000002001e, 0x0000000040020415, 0x0000000200884020, },
	{ 0x0001000000040005, 0x0000000040020414, 0x0000000200888020, },
	{ 0x0001000000040006, 0x0000000040020414, 0x0000000200888020, },
	{ 0x000100000004000c, 0x0000000040020414, 0x0000000280888020, },
	{ 0x000100000004000f, 0x0000000040020415, 0x0000000280888020, },
	{ 0x0001000000040013, 0x0000000040020415, 0x0000000200888020, },
	{ 0x0004000000020033, 0x00000012c002045f, 0x0000000200944214, },
	{ 0x0004000000020039, 0x00000012c002065f, 0x0000000200944214, },
	{ 0x000400000002003a, 0x00000012c002065f, 0x0000000200944214, },
	{ 0x0004000000040035, 0x00000012c002045f, 0x0000000200948214, },
	{ 0x0004000000040037, 0x00000012c002045e, 0x0000000200948214, },
	{ 0x000400000006003e, 0x00000012c002065f, 0x000000022094c214, },
	{ 0x000500000001002e, 0x00000000000a0445, 0x0000000080800000, },
	{ 0x0006000000040023, 0x00000012c006045f, 0x0000000200948214, },
	{ 0x0008000000020027, 0x0000000fa8738e3f, 0x00000002108c4658, },
	{ 0x000a00000002001a, 0x0000000fbcf38ebf, 0x0000000210944878, },
	{ 0x000a000000040019, 0x0000000fbcf38ebf, 0x0000000320948878, },
	{ 0x000c000000010014, 0x0000000000080005, 0x0000000000800000, },
	{ 0x000c000000010030, 0x0000000000080005, 0x0000000000800000, },
	{ 0x000f000000010040, 0x00000000000a0645, 0x0000000180840000, },
	{ 0x001600000015000b, 0x00000000130a7605, 0x0000000000000000, },
	{ 0x0016000000150010, 0x00000000130a7605, 0x0000000000000000, },
	{ 0x0016000000160016, 0x00000000010a7605, 0x0000000080000000, },
	{ 0x0016000000160017, 0x00000000110a7605, 0x0000000080000000, },
	{ 0x0016000000160019, 0x00000000110a7605, 0x0000000080000000, },
	{ 0x001600000016001b, 0x00000000110a7605, 0x0000000080000000, },
	{ 0x001600000016001d, 0x00000000110a7605, 0x0000000080000000, },
	{ 0x0016000000360018, 0x00000000010a7605, 0x0000000180080000, },
	{ 0x0016000000360019, 0x00000000110a7605, 0x0000000180080000, },
	{ 0x001600000036001e, 0x00000000110a7605, 0x00000001800c0000, },
	{ 0x001600000036014a, 0x00000000110a7605, 0x00000001800c0000, },
	{ 0x0016000000d00138, 0x00000000110a7605, 0x00000001800c4000, },
	{ 0x0016000000d00139, 0x00000000110a7605, 0x00000001800c4000, },
};

IMG_UINT64    gaErnsBrns[][2]=
{
	{ 0x0001002100020005, 0x000000000080024c, },
	{ 0x0001002700040013, 0x0000000000800249, },
	{ 0x0001003000020000, 0x0000000000800249, },
	{ 0x000100480004000c, 0x0000000000800201, },
	{ 0x0001004b00020014, 0x0000000000800241, },
	{ 0x0001004b0002001e, 0x0000000000800241, },
	{ 0x0001004c00040006, 0x0000000000800289, },
	{ 0x000100510004000f, 0x0000000000800249, },
	{ 0x0001005200040005, 0x0000000000800201, },
	{ 0x0004001d00020033, 0x0000000002820121, },
	{ 0x0004001f00040037, 0x0000000002820121, },
	{ 0x0004002800020033, 0x0000000002820121, },
	{ 0x0004002900020039, 0x0000000002820121, },
	{ 0x0004002a00040035, 0x0000000002820121, },
	{ 0x0004002b0006003e, 0x0000000002820121, },
	{ 0x0004002d0002003a, 0x0000000002800121, },
	{ 0x0004002e0006003e, 0x0000000002020121, },
	{ 0x000500090001002e, 0x0000000000000009, },
	{ 0x0005000b0001002e, 0x0000000000000041, },
	{ 0x0006002200040023, 0x0000000002800121, },
	{ 0x0008002f00020027, 0x0000000000007121, },
	{ 0x0008003000020027, 0x0000000000007121, },
	{ 0x000a001600040019, 0x0000000000017121, },
	{ 0x000a001e0002001a, 0x0000000000017121, },
	{ 0x000a002000040019, 0x0000000000017121, },
	{ 0x000a002100040019, 0x0000000000017121, },
	{ 0x000c000400010030, 0x0000000000000009, },
	{ 0x000c000500010014, 0x0000000000000001, },
	{ 0x000f000500010040, 0x0000000000000001, },
	{ 0x0016001200160016, 0x0000000028000101, },
	{ 0x0016001a00360018, 0x000000002c000101, },
	{ 0x0016001c00160017, 0x000000002c000101, },
	{ 0x0016001d0016001b, 0x000000002c000101, },
	{ 0x0016001e00360019, 0x000000002c000101, },
	{ 0x001600210015000b, 0x000000002c000101, },
	{ 0x001600230016001b, 0x000000002c000101, },
	{ 0x001600280036001e, 0x000000002c000101, },
	{ 0x001600290036014a, 0x0000000028000121, },
	{ 0x0016002c00160019, 0x000000002c000101, },
	{ 0x0016002d0016001d, 0x000000002c000101, },
	{ 0x0016002e0036014a, 0x0000000028000121, },
	{ 0x0016002f00d00138, 0x0000000020000121, },
	{ 0x001600300036001e, 0x000000002c000101, },
	{ 0x0016003100150010, 0x000000002c000101, },
	{ 0x001600320016001d, 0x000000002c000101, },
	{ 0x0016003600d00139, 0x0000000000000121, },
	{ 0x001600370036001e, 0x000000000c000101, },
	{ 0x001600390036001e, 0x000000001c000101, },
	{ 0x0016003a00160019, 0x0000000014000101, },
};


#endif /*_RGX_BVNC_TABLE_KM_H_ */



