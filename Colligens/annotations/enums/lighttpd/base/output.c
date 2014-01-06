int test () {

#if defined(HAVE_FAM_H)
#define ELEMS1 STAT_CACHE_ENGINE_FAM 
#endif

#if !defined(HAVE_FAM_H)
#define ELEMS1 ""
#endif

enum {STAT_CACHE_ENGINE_UNSET,
	STAT_CACHE_ENGINE_NONE,
	STAT_CACHE_ENGINE_SIMPLE,
	ELEMS1}
stat_cache_engine;
}
