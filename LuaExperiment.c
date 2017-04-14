// LuaExperiment.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#ifdef __cplusplus
extern "C" {
#endif

	static const luaL_Reg lib[] = {
		{ "cond", l_cond },
		/*{ "bor", l_bor },
		{ "band", l_band },
		{ "bxor", l_bxor },
		{ "bnot", l_bnot },
		{ "lshift", l_lshift },
		{ "rshift", l_rshift },*/
		{ NULL, NULL }
	};

	__declspec( dllexport ) int init ( lua_State *L )
	{
		luaL_newlib ( L, lib );
		return 1;
	}

	static int l_cond ( lua_State *L )
	{
		lua_toboolean ( L, 1 ) ? lua_pushvalue ( L, 2 ) : lua_pushvalue ( L, 3 );
		return 1;
	}
#ifdef __cplusplus
}
#endif
