int test(){

	log_error_write(srv, __FILE__, __LINE__, "sb",
					"server.stat-cache-engine can be one of \"disable\", \"simple\","
	#ifdef HAVE_FAM_H
					" \"fam\","
	#endif
					" but not:", stat_cache_string);
}
