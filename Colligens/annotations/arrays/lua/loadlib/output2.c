int main () {

typedef int luaL_Reg;

#if defined(LUA_COMPAT_MODULE)
	#define ELEMS1 {"module", ll_module},
#endif

#if !defined(LUA_COMPAT_MODULE)
	#define ELEMS1 ""
#endif

static const luaL_Reg ll_funcs[] = {
		ELEMS1
{"require", ll_require}, 
{NULL, NULL}};
}
