int test () {

#if defined(HAVE_FAM_H)
log_error_write (srv, "input.c", 3, "sb", "server.stat-cache-engine can be one of \"disable\", \"simple\","" \"fam\","" but not:", stat_cache_string);
#endif

#if !defined(HAVE_FAM_H)
log_error_write (srv, "input.c", 3, "sb", "server.stat-cache-engine can be one of \"disable\", \"simple\","" but not:", stat_cache_string);
#endif

}
