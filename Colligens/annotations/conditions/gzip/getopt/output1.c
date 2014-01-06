int test () {

int test;

#if defined(GETOPT_COMPAT)
test = (argv[optind][0]!= '-' || argv[optind][1] == '\0' && longopts == NULL || argv[optind][0]!= '+' || argv[optind][1] == '\0');
#endif

#if !defined(GETOPT_COMPAT)
test = (argv[optind][0]!= '-' || argv[optind][1] == '\0');
#endif

if ((test)){

}
}
