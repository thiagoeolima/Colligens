int test(){

	LI_ltostr(buf,
	#ifdef HAVE_IPV6
		       ntohs(con->dst_addr.plain.sa_family ? con->dst_addr.ipv6.sin6_port : con->dst_addr.ipv4.sin_port)
	#else
		       ntohs(con->dst_addr.ipv4.sin_port)
	#endif
		       );
}
