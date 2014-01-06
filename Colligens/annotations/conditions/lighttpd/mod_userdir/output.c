int test () {

int test;

#if defined(HAVE_PWD_H)
test = (buffer_is_empty (p ->conf .basepath)&& NULL == pwd = getpwnam (p ->username ->ptr););
#endif

#if !defined(HAVE_PWD_H)
test = (buffer_is_empty (p ->conf .basepath));
#endif

if ((test)){

return HANDLER_GO_ON;
}
}
