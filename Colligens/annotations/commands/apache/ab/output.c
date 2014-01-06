int test () {

#if defined(USE_SSL)
fprintf (stderr, "Usage: %s[options][http""[s]""://]hostname[:port]/path\n", progname);
#endif

#if !defined(USE_SSL)
fprintf (stderr, "Usage: %s[options][http""://]hostname[:port]/path\n", progname);
#endif

}
