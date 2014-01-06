int test () {

#if defined(HAVE_IPV6)
ssi_env_add (p ->ssi_cgi_env, CONST_STRING ("SERVER_NAME"), inet_ntop (srv_sock ->addr .plain .sa_family, (srv_sock ->addr .plain .sa_family == AF_INET6)?(const void *) &srv_sock ->addr .ipv6 .sin6_addr :(const void *) &srv_sock ->addr .ipv4 .sin_addr, b2, (sizeof b2 - 1)));
#endif

#if !defined(HAVE_IPV6)
ssi_env_add (p ->ssi_cgi_env, CONST_STRING ("SERVER_NAME"), inet_ntoa (srv_sock ->addr .ipv4 .sin_addr));
#endif

}
