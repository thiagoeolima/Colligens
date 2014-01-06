int test(){



	return apr_psprintf(cmd->pool,
	#ifdef NETWARE
	                                "Can't load driver file dbd%s.nlm",
	#else
	                                "Can't load driver file apr_dbd_%s.so",
	#endif
	                                cfg->name);

}
