int test () {

int test;

#if defined(APACHE_PORT_HANDLING_IS_BUSTED)
test = (strcasecmp (comp .scheme, scheme)!= 0 || comp .port != port);
#endif

#if !defined(APACHE_PORT_HANDLING_IS_BUSTED)
test = (strcasecmp (comp .scheme, scheme)!= 0);
#endif

if ((test)){

return result;
}
}
