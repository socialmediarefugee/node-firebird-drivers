/*
 *	PROGRAM:		Firebird RDBMS definitions
 *	MODULE:			firebird.h
 *	DESCRIPTION:	Main Firebird header.
 *
 *  The contents of this file are subject to the Initial
 *  Developer's Public License Version 1.0 (the "License");
 *  you may not use this file except in compliance with the
 *  License. You may obtain a copy of the License at
 *  http://www.ibphoenix.com/main.nfs?a=ibphoenix&page=ibp_idpl.
 *
 *  Software distributed under the License is distributed AS IS,
 *  WITHOUT WARRANTY OF ANY KIND, either express or implied.
 *  See the License for the specific language governing rights
 *  and limitations under the License.
 *
 *  The Original Code was created by Mark O'Donohue, Mike Nordell and John Bellardo
 *  for the Firebird Open Source RDBMS project.
 *
 *  Copyright (c) 2001
 *       Mark O'Donohue <mark.odonohue@ludwig.edu.au>
 *       Mike Nordell   <tamlin@algonet.se>
 *       John Bellardo  <bellardo@cs.ucsd.edu>
  *  and all contributors signed below.
 *
 *  All Rights Reserved.
 *  Contributor(s): ______________________________________.
 *
 *		Alex Peshkov
 */

#ifndef INCLUDE_Firebird_H
#define INCLUDE_Firebird_H

#ifdef _MSC_VER
#include "gen/autoconfig_msvc.h"
#else
#include "gen/autoconfig.h"
#endif

// Using our debugging code is pointless when we may use Valgrind features
#if defined(DEV_BUILD) && !defined(USE_VALGRIND)
#define DEBUG_GDS_ALLOC
#endif

//#if defined(SOLX86)
// this pragmas is used only with gcc 2.95!
//#define __PRAGMA_REDEFINE_EXTNAME
//#define __EXTENSIONS__
//
//#endif

//
// Macro for function attribute definition
//
#if defined(__GNUC__)
#define ATTRIBUTE_FORMAT(a, b) __attribute__ ((format(printf, a, b)))
#else
#define ATTRIBUTE_FORMAT(a, b)
#endif

#ifdef __cplusplus
#include "../common/common.h"
#endif

#ifdef NULL
#undef NULL
#endif

#define NULL nullptr

#if defined(WIN_NT)
#define TRUSTED_AUTH
#endif

// We do not use std::string
#define U_HAVE_STD_STRING 0

#endif // INCLUDE_Firebird_H
