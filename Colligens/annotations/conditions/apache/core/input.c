int test(){

	if ((status = apr_file_open(&fd, r->filename, APR_READ | APR_BINARY
	#ifdef APR_HAS_SENDFILE
	                            | AP_SENDFILE_ENABLED(d->enable_sendfile)
	#endif
	                                    , 0, r->pool)) != APR_SUCCESS) {

	        }

}
