int test () {

#if defined(O_BINARY)
fprintf (stderr, "usage: %s[-%scdfhlLnN%stvV19][-S suffix][file ...]\n", progname, "a");
#endif

#if (!defined(O_BINARY) && defined(NO_DIR))
fprintf (stderr, "usage: %s[-%scdfhlLnN%stvV19][-S suffix][file ...]\n", progname, "");
#endif

#if (defined(NO_DIR) || !defined(O_BINARY))
fprintf (stderr, "usage: %s[-%scdfhlLnN%stvV19][-S suffix][file ...]\n", progname, "");
#endif

#if !defined(NO_DIR)
fprintf (stderr, "usage: %s[-%scdfhlLnN%stvV19][-S suffix][file ...]\n", progname, "r");
#endif

}
