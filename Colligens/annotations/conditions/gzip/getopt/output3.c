int test () {

int test;

#if defined(GETOPT_COMPAT)
test = ((!(long_only)) || argv[optind][1] == '-' || argv[optind][0] == '+' || my_index (optstring, *nextchar) == NULL);
#endif

#if !defined(GETOPT_COMPAT)
test = ((!(long_only)) || argv[optind][1] == '-' || my_index (optstring, *nextchar) == NULL);
#endif

if ((test)){

}
}
