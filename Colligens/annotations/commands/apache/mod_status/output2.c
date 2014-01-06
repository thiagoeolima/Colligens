int test () {

#if defined(HAVE_TIMES)
ap_rprintf (r, "] ""u%g s%g cu%g cs%g"(ws_record ->times .tms_utime / tick)(ws_record ->times .tms_stime / tick)(ws_record ->times .tms_cutime / tick)(ws_record ->times .tms_cstime / tick)"\n %ld %ld (", (long), apr_time_sec ((nowtime - ws_record ->last_used)), (long), req_time);
#endif

#if !defined(HAVE_TIMES)
ap_rprintf (r, "] ""\n %ld %ld (", (long), apr_time_sec ((nowtime - ws_record ->last_used)), (long), req_time);
#endif

}
