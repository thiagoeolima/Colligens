int test(){

	if (finfo.filetype != APR_REG &&
	#if defined(WIN32) || defined(OS2) || defined(NETWARE)
	        strcasecmp(apr_filepath_name_get(name), "nul") != 0) {
	#else
	        strcmp(name, "/dev/null") != 0) {
	#endif

	    }

}
