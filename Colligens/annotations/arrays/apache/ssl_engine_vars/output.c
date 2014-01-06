int test () {

#if defined(NID_userId)
	#define ELEMS1 {"UID", NID_userId, 1},
#endif

#if !defined(NID_userId)
	#define ELEMS1 ""
#endif

static const struct {
char *name;
int nid;
int extract;

ssl_var_lookup_ssl_cert_dn_rec[] = {
	{"C", NID_countryName, 1},
	{"ST", NID_stateOrProvinceName, 1},
	{"SP", NID_stateOrProvinceName, 0},
	{"L", NID_localityName, 1},
	{"O", NID_organizationName, 1},
	{"OU", NID_organizationalUnitName, 1},
	{"CN", NID_commonName, 1},
	{"T", NID_title, 1},
	{"I", NID_initials, 1},
	{"G", NID_givenName, 1},
	{"S", NID_surname, 1},
	{"D", NID_description, 1},
	ELEMS1
	{"Email", NID_pkcs9_emailAddress, 1},
	{NULL, 0, 0}};
}
