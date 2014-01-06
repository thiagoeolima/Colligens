int main () {

typedef int luaL_Reg;

#if defined(LUA_COMPAT_MAXN)
	#define ELEMS1 {"maxn", maxn},
#endif

#if !defined(LUA_COMPAT_MAXN)
	#define ELEMS1 ""
#endif

static const luaL_Reg tab_funcs[] = {
{"concat", tconcat},
ELEMS1
{"insert", tinsert}, 
{"pack", pack}, 
{"unpack", unpack}, 
{"remove", tremove}, 
{"sort", sort}, 
{NULL, NULL}};
}
