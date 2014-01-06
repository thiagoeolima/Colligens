int test(){

	cp = apr_pstrcat(p,(protocol & SSL_PROTOCOL_SSLV3 ? "SSLv3, " : ""), (protocol & SSL_PROTOCOL_TLSV1 ? "TLSv1, " : ""),
	#ifdef HAVE_TLSV1_X
	                     (protocol & SSL_PROTOCOL_TLSV1_1 ? "TLSv1.1, " : ""), (protocol & SSL_PROTOCOL_TLSV1_2 ? "TLSv1.2, " : ""),
	#endif
	                     NULL);


}
