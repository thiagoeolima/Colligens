int test () {

#if defined(APR_HAS_THREADS)
return apr_psprintf (cmd ->pool, "Invalid value for LuaScope, '%s', acceptable ""values are: 'once', 'request', 'conn', 'server'"", 'thread'", scope);
#endif

#if !defined(APR_HAS_THREADS)
return apr_psprintf (cmd ->pool, "Invalid value for LuaScope, '%s', acceptable ""values are: 'once', 'request', 'conn', 'server'", scope);
#endif

}
