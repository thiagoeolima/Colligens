int test () {

#if defined(HAVE_IPV6)
LI_ltostr (buf, ntohs ((srv_sock ->addr .plain .sa_family == AF_INET6)?srv_sock ->addr .ipv6 .sin6_port :srv_sock ->addr .ipv4 .sin_port));
#endif

#if !defined(HAVE_IPV6)
LI_ltostr (buf, ntohs (srv_sock ->addr .ipv4 .sin_port));
#endif

}
