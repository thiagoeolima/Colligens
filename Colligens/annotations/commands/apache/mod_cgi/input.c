int test(){

	apr_file_printf(stderr_log, "(%d)%s: %s\n", err, apr_strerror(err, errbuf, sizeof(errbuf)),
	#ifndef AP_UNSAFE_ERROR_LOG_UNESCAPED
	                    ap_escape_logitem(pool,
	#endif
	                    description
	#ifndef AP_UNSAFE_ERROR_LOG_UNESCAPED
	                    )
	#endif
	                    );

}
