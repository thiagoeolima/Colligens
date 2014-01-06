int test(){

	ssi_env_add(p->ssi_cgi_env, CONST_STRING("SERVER_NAME"),
	#ifdef HAVE_IPV6
			     inet_ntop(srv_sock->addr.plain.sa_family, srv_sock->addr.plain.sa_family == AF_INET6 ? (const void *) &(srv_sock->addr.ipv6.sin6_addr) : (const void *) &(srv_sock->addr.ipv4.sin_addr), b2, sizeof(b2)-1)
	#else
			     inet_ntoa(srv_sock->addr.ipv4.sin_addr)
	#endif
			     );

}
