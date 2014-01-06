int test(){



	if (pattern && (apr_fnmatch(pattern, dirent->name,
	                                APR_FNM_NOESCAPE | APR_FNM_PERIOD
	#ifdef CASE_BLIND_FILESYSTEM
	                                | APR_FNM_CASE_BLIND
	#endif
	                                ) != APR_SUCCESS)) {
	        return (NULL);
	    }

}
