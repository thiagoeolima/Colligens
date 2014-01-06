int test(){


#ifdef APR_FILES_AS_SOCKETS
    while ((rv = apr_getopt(opt, "lL:p:ftvec", &c, &opt_arg)) == APR_SUCCESS) {
#else
    while ((rv = apr_getopt(opt, "lL:p:ftve", &c, &opt_arg)) == APR_SUCCESS) {
#endif

// code


}


}
