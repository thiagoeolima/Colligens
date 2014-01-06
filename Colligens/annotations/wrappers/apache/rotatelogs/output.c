int test () {

int test;

#if defined(APR_FILES_AS_SOCKETS)
test = (rv = apr_getopt (opt, "lL:p:ftvec", &c, &opt_arg); == APR_SUCCESS);
#endif

#if !defined(APR_FILES_AS_SOCKETS)
test = (rv = apr_getopt (opt, "lL:p:ftve", &c, &opt_arg); == APR_SUCCESS);
#endif

while (test) {

}
}
