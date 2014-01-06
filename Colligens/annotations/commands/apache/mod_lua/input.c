int test(){


	return apr_psprintf(cmd->pool,
	                            "Invalid value for LuaScope, '%s', acceptable "
	                            "values are: 'once', 'request', 'conn', 'server'"
	#if defined (APR_HAS_THREADS)
	                            ", 'thread'"
	#endif
	                            ,scope);

}
