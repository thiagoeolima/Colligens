int main () {

typedef int luaL_Reg;

#if defined(LUA_COMPAT_LOADSTRING)
	#define ELEMS1 {"loadstring", luaB_load},
#endif

#if !defined(LUA_COMPAT_LOADSTRING)
	#define ELEMS1 ""
#endif

static const luaL_Reg base_funcs[] = {
{"assert", luaB_assert}, 
{"collectgarbage", luaB_collectgarbage}, 
{"dofile", luaB_dofile}, 
{"error", luaB_error}, 
{"getmetatable", luaB_getmetatable}, 
{"ipairs", luaB_ipairs}, 
{"loadfile", luaB_loadfile}, 
{"load", luaB_load},
ELEMS1
{"next", luaB_next}, 
{"pairs", luaB_pairs}, 
{"pcall", luaB_pcall}, 
{"print", luaB_print}, 
{"rawequal", luaB_rawequal}, 
{"rawlen", luaB_rawlen}, 
{"rawget", luaB_rawget}, 
{"rawset", luaB_rawset}, 
{"select", luaB_select}, 
{"setmetatable", luaB_setmetatable}, 
{"tonumber", luaB_tonumber}, 
{"tostring", luaB_tostring}, 
{"type", luaB_type}, 
{"xpcall", luaB_xpcall}, 
{NULL, NULL}};
}
