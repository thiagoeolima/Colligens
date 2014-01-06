int test () {

int test;

#if defined(_LARGEFILE64_SOURCE)
test = (log = fopen64 (AP_LOG_EXEC, "a"); == NULL);
#endif

#if !defined(_LARGEFILE64_SOURCE)
test = (log = fopen (AP_LOG_EXEC, "a"); == NULL);
#endif

if ((test)){

fprintf (stderr, "suexec failure: could not open log file\n");
perror ("fopen");
exit (1);
}
}
