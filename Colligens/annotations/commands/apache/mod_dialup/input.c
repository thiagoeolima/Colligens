int test(){

	rv = apr_file_open(&fd, r->filename, APR_READ | APR_BINARY
	#ifdef APR_HAS_SENDFILE
	                           | AP_SENDFILE_ENABLED(ccfg->enable_sendfile)
	#endif
	                       , 0, r->pool);


}
