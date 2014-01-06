int test(){

#if defined(_LARGEFILE64_SOURCE)
        if ((log = fopen64(AP_LOG_EXEC, "a")) == NULL) {
#else
        if ((log = fopen(AP_LOG_EXEC, "a")) == NULL) {
#endif
            fprintf(stderr, "suexec failure: could not open log file\n");
            perror("fopen");
            exit(1);
        }

}
