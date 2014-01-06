int test(){

	enum { STAT_CACHE_ENGINE_UNSET,
				STAT_CACHE_ENGINE_NONE,
				STAT_CACHE_ENGINE_SIMPLE
	#ifdef HAVE_FAM_H
				, STAT_CACHE_ENGINE_FAM
	#endif
		} stat_cache_engine;

}
