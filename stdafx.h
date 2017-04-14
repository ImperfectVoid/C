// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

__declspec( dllexport ) int init ( lua_State *L );
static int l_cond ( lua_State * L );
