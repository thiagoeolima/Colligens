int main (){
	typedef int luaL_Reg;
	static const luaL_Reg pk_funcs[] = {
	  {"loadlib", ll_loadlib},
	  {"searchpath", ll_searchpath},
	#if defined(LUA_COMPAT_MODULE)
	  {"seeall", ll_seeall},
	#endif
	  {NULL, NULL}
	};

}
