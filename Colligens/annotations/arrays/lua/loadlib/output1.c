int main () {

typedef int luaL_Reg;

#if defined(LUA_COMPAT_MODULE)
	#define ELEMS1 {"seeall", ll_seeall},
#endif

#if !defined(LUA_COMPAT_MODULE)
	#define ELEMS1 ""
#endif

static const luaL_Reg pk_funcs[] = {
{"loadlib", ll_loadlib}, 
{"searchpath", ll_searchpath},
ELEMS1
{NULL, NULL}};
}
