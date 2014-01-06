int test(){

	ap_rprintf(r, "\n</td>"
	#ifdef HAVE_TIMES
	                               "<td>%.2f</td>"
	#endif
	                               "<td>%ld</td><td>%ld",
	#ifdef HAVE_TIMES
	                               (ws_record->times.tms_utime + ws_record->times.tms_stime + ws_record->times.tms_cutime + ws_record->times.tms_cstime) / tick,
	#endif
	                               (long)apr_time_sec(nowtime - ws_record->last_used), (long)req_time);

}
