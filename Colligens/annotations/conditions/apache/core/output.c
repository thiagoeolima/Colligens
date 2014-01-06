int test () {

int test;

#if defined(APR_HAS_SENDFILE)
test = (status = apr_file_open (&fd, r ->filename, APR_READ | APR_BINARY | AP_SENDFILE_ENABLED (d ->enable_sendfile), 0, r ->pool); != APR_SUCCESS);
#endif

#if !defined(APR_HAS_SENDFILE)
test = (status = apr_file_open (&fd, r ->filename, APR_READ | APR_BINARY, 0, r ->pool); != APR_SUCCESS);
#endif

if ((test)){

}
}
