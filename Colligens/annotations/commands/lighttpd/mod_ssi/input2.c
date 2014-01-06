int test(){

	 LI_ltostr(buf,
	#ifdef HAVE_IPV6
		       ntohs(srv_sock->addr.plain.sa_family ? srv_sock->addr.ipv6.sin6_port : srv_sock->addr.ipv4.sin_port)
	#else
		       ntohs(srv_sock->addr.ipv4.sin_port)
	#endif
		       );

}
