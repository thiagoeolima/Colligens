int test () {

#if !defined(AP_UNSAFE_ERROR_LOG_UNESCAPED)
apr_file_printf (stderr_log, "(%d)%s: %s\n", err, apr_strerror (err, errbuf, sizeof errbuf), ap_escape_logitem (pool, description));
#endif

#if defined(AP_UNSAFE_ERROR_LOG_UNESCAPED)
apr_file_printf (stderr_log, "(%d)%s: %s\n", err, apr_strerror (err, errbuf, sizeof errbuf), description);
#endif

}
