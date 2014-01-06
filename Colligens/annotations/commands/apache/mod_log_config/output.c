int test () {

#if defined(APR_MAJOR_VERSION)
return apr_psprintf (r ->pool, (*a == 'h')?"%pt":"%pT", &tid);
#endif

#if !defined(APR_MAJOR_VERSION)
return apr_psprintf (r ->pool, "%pT", &tid);
#endif

}
