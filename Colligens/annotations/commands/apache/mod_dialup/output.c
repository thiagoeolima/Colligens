int test () {

#if defined(APR_HAS_SENDFILE)
rv = apr_file_open (&fd, r ->filename, (APR_READ | APR_BINARY | AP_SENDFILE_ENABLED (ccfg ->enable_sendfile)), 0, r ->pool);
#endif

#if !defined(APR_HAS_SENDFILE)
rv = apr_file_open (&fd, r ->filename, (APR_READ | APR_BINARY), 0, r ->pool);
#endif

}
