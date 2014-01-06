int test () {

int test;

#if (defined(WIN32) || defined(OS2) || defined(NETWARE))
test = (finfo .filetype != APR_REG && strcasecmp (apr_filepath_name_get (name), "nul")!= 0);
#endif

#if (!defined(WIN32) && !defined(OS2) && !defined(NETWARE))
test = (finfo .filetype != APR_REG && strcmp (name, "/dev/null")!= 0);
#endif

if ((test)){

}
}
