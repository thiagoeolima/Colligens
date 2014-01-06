int test () {

#if defined(HAVE_IPV6)
LI_ltostr (buf, ntohs (con ->dst_addr .plain .sa_family ?con ->dst_addr .ipv6 .sin6_port :con ->dst_addr .ipv4 .sin_port));
#endif

#if !defined(HAVE_IPV6)
LI_ltostr (buf, ntohs (con ->dst_addr .ipv4 .sin_port));
#endif

}
