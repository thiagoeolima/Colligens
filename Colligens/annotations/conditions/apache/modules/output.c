int test () {

int test;

#if defined(USE_SSL)
test = (status = apr_getopt (opt, "n:c:t:b:T:p:u:v:rkVhwix:y:z:C:H:P:A:g:X:de:SqB:""Z:f:", &c, &opt_arg); == APR_SUCCESS);
#endif

#if !defined(USE_SSL)
test = (status = apr_getopt (opt, "n:c:t:b:T:p:u:v:rkVhwix:y:z:C:H:P:A:g:X:de:SqB:", &c, &opt_arg); == APR_SUCCESS);
#endif

while (test) {

}
}
