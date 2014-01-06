int test(){


	return apr_psprintf(r->pool,
	#if defined (APR_MAJOR_VERSION)
	                            /* APR can format a thread id in hex */
	                            *a == 'h' ? "%pt" : "%pT",
	#else
	                            /* APR is missing the feature, so always use decimal */
	                            "%pT",
	#endif
	                            &tid);

}
