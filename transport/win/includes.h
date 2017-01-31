/*
 * Copyright © 2012-2015 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the “License”); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an “AS IS” BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */


/*
* Module Name: REST engine socket library
*
* Filename: includes.h
*
* Abstract:
*
* REST Engine main module include file
*
*/

#pragma once
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#include <windows.h>
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int8 uint8_t;
#include <stdlib.h>
#include <stddef.h>
#include <tchar.h>
#include <errno.h>
#include <assert.h>
#include <Ws2tcpip.h>
#include <stdio.h>
#include "openssl\ssl.h"
#include "openssl\err.h"
#include <vmsock.h>
#include <vmrestdefines.h>
#include <vmrestcommon.h>
#include <vmsockapi.h>

#include "defines.h"
#include "structs.h"
#include "externs.h"
#include "prototypes.h"

