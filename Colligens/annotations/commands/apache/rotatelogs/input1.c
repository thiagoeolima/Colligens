int test(){

	fprintf(stderr,
	#ifdef APR_FILES_AS_SOCKETS
	            "Usage: %s [-v] [-l] [-L linkname] [-p prog] [-f] [-t] [-e] [-c] <logfile> "
	#else
	            "Usage: %s [-v] [-l] [-L linkname] [-p prog] [-f] [-t] [-e] <logfile> "
	#endif
	            "{<rotation time in seconds>|<rotation size>(B|K|M|G)} " "[offset minutes from UTC]\n\n", argv0);


}
