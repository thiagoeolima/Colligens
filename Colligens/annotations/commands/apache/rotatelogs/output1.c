int test () {

#if defined(APR_FILES_AS_SOCKETS)
fprintf (stderr, "Usage: %s[-v][-l][-L linkname][-p prog][-f][-t][-e][-c] <logfile> ""{<rotation time in seconds>|<rotation size>(B|K|M|G)} ""[offset minutes from UTC]\n\n", argv0);
#endif

#if !defined(APR_FILES_AS_SOCKETS)
fprintf (stderr, "Usage: %s[-v][-l][-L linkname][-p prog][-f][-t][-e] <logfile> ""{<rotation time in seconds>|<rotation size>(B|K|M|G)} ""[offset minutes from UTC]\n\n", argv0);
#endif

}
