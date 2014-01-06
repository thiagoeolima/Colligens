int test () {

#if defined(NETWARE)
return apr_psprintf (cmd ->pool, "Can't load driver file dbd%s.nlm", cfg ->name);
#endif

#if !defined(NETWARE)
return apr_psprintf (cmd ->pool, "Can't load driver file apr_dbd_%s.so", cfg ->name);
#endif

}
