int test(){



	if (   apr_sockaddr_equal(r->connection->local_addr,
	                               r->useragent_addr)
	         || apr_ipsubnet_test(localhost_v4, r->useragent_addr)
	#if defined (APR_HAVE_IPV6)
	         || apr_ipsubnet_test(localhost_v6, r->useragent_addr)
	#endif
	        ){
	        return AUTHZ_GRANTED;
	     }

}
