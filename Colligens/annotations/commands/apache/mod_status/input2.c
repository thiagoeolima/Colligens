int test(){

	ap_rprintf(r, "] "
	#ifdef HAVE_TIMES
	                               "u%g s%g cu%g cs%g"
	#endif
	                               "\n %ld %ld (",
	#ifdef HAVE_TIMES
	                               ws_record->times.tms_utime / tick, ws_record->times.tms_stime / tick, ws_record->times.tms_cutime / tick, ws_record->times.tms_cstime / tick,
	#endif
	                               (long)apr_time_sec(nowtime - ws_record->last_used), (long) req_time);

}
