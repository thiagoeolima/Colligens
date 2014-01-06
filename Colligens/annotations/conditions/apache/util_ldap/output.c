typedef int apr_array_header_t;
int test () {

int test;

#if defined(APR_HAS_SOLARIS_LDAPSDK)
test = (APR_LDAP_NONE != ldc ->secure && have_client_certs);
#endif

#if !defined(APR_HAS_SOLARIS_LDAPSDK)
test = (APR_LDAP_NONE != ldc ->secure);
#endif

if ((test)){

}
}
