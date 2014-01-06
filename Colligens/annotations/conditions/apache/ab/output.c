int test () {

int test;

#if defined(USE_SSL)
test = (is_ssl && port != 443 || (!(is_ssl))&& port != 80);
#endif

#if !defined(USE_SSL)
test = (port != 80);
#endif

if (test) {

colonhost = apr_psprintf (cntxt, ":%d", port);
}
else 
colonhost = "";
}
