int test(){
	static const struct {
	    char *name;
	    int   nid;
	    int   extract;
	} ssl_var_lookup_ssl_cert_dn_rec[] = {
	    { "C",     NID_countryName,            1 },
	    { "ST",    NID_stateOrProvinceName,    1 }, /* officially    (RFC2156) */
	    { "SP",    NID_stateOrProvinceName,    0 }, /* compatibility (SSLeay)  */
	    { "L",     NID_localityName,           1 },
	    { "O",     NID_organizationName,       1 },
	    { "OU",    NID_organizationalUnitName, 1 },
	    { "CN",    NID_commonName,             1 },
	    { "T",     NID_title,                  1 },
	    { "I",     NID_initials,               1 },
	    { "G",     NID_givenName,              1 },
	    { "S",     NID_surname,                1 },
	    { "D",     NID_description,            1 },
	#ifdef NID_userId
	    { "UID",   NID_userId,                 1 },
	#endif
	    { "Email", NID_pkcs9_emailAddress,     1 },
	    { NULL,    0,                          0 }
	};


}
