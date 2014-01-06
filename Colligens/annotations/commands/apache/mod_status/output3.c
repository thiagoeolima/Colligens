int test () {

#if defined(HAVE_TIMES)
ap_rprintf (r, "\n</td>""<td>%.2f</td>"(ws_record ->times .tms_utime + ws_record ->times .tms_stime + ws_record ->times .tms_cutime + ws_record ->times .tms_cstime / tick)"<td>%ld</td><td>%ld", (long), apr_time_sec ((nowtime - ws_record ->last_used)), (long), req_time);
#endif

#if !defined(HAVE_TIMES)
ap_rprintf (r, "\n</td>""<td>%ld</td><td>%ld", (long), apr_time_sec ((nowtime - ws_record ->last_used)), (long), req_time);
#endif

}
