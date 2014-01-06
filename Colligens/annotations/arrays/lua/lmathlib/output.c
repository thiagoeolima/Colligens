int main () {

typedef int luaL_Reg;

#if defined(LUA_COMPAT_LOG10)
	#define ELEMS1 {"log10", math_log10},
#endif

#if !defined(LUA_COMPAT_LOG10)
	#define ELEMS1 ""
#endif

static const luaL_Reg mathlib[] = {
{"abs", math_abs}, 
{"acos", math_acos}, 
{"asin", math_asin}, 
{"atan2", math_atan2}, 
{"atan", math_atan}, 
{"ceil", math_ceil}, 
{"cosh", math_cosh}, 
{"cos", math_cos}, 
{"deg", math_deg}, 
{"exp", math_exp}, 
{"floor", math_floor}, 
{"fmod", math_fmod}, 
{"frexp", math_frexp}, 
{"ldexp", math_ldexp},
ELEMS1
{"log", math_log}, 
{"max", math_max}, 
{"min", math_min}, 
{"modf", math_modf}, 
{"pow", math_pow}, 
{"rad", math_rad}, 
{"random", math_random}, 
{"randomseed", math_randomseed}, 
{"sinh", math_sinh}, 
{"sin", math_sin}, 
{"sqrt", math_sqrt}, 
{"tanh", math_tanh}, 
{"tan", math_tan}, 
{NULL, NULL}};
}
