int test () {

int test;

#if defined(MYSQL_VERSION_ID)
test = (!(mysql_real_connect (s ->mysql, FOO (hostname), FOO (myuser), FOO (mypass), FOO (mydb), s ->port, FOO (mysock), CLIENT_MULTI_STATEMENTS)));
#endif

#if !defined(MYSQL_VERSION_ID)
test = (!(mysql_real_connect (s ->mysql, FOO (hostname), FOO (myuser), FOO (mypass), FOO (mydb), s ->port, FOO (mysock), 0)));
#endif

if ((test)){

log_error_write (srv, "input.c", 10, "s", mysql_error (s ->mysql));
return HANDLER_ERROR;
}
}
