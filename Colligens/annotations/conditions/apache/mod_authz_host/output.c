int test () {

int test;

#if defined(APR_HAVE_IPV6)
test = (apr_sockaddr_equal (r ->connection ->local_addr, r ->useragent_addr) || apr_ipsubnet_test (localhost_v4, r ->useragent_addr) || apr_ipsubnet_test (localhost_v6, r ->useragent_addr));
#endif

#if !defined(APR_HAVE_IPV6)
test = (apr_sockaddr_equal (r ->connection ->local_addr, r ->useragent_addr) || apr_ipsubnet_test (localhost_v4, r ->useragent_addr));
#endif

if ((test)){

return AUTHZ_GRANTED;
}
}
