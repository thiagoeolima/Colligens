int test () {

int test;

#if defined(GETOPT_COMPAT)
test = (longopts != NULL && argv[optind][0] == '-' && argv[optind][1] == '-' || long_only || argv[optind][0] == '+');
#endif

#if !defined(GETOPT_COMPAT)
test = (longopts != NULL && argv[optind][0] == '-' && argv[optind][1] == '-' || long_only);
#endif

if ((test)){

}
}
