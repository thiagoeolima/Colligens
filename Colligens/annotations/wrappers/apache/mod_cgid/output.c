int test () {

int test;

#if defined(_AIX)
test = (getpgid (pid)< 0);
#endif

#if !defined(_AIX)
test = (kill (pid, 0)< 0);
#endif

if ((test)){

return APR_SUCCESS;
}
}
