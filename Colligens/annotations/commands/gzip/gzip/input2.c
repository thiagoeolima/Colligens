int test(){

	fprintf(stderr, "usage: %s [-%scdfhlLnN%stvV19] [-S suffix] [file ...]\n",
		    progname,
	#ifdef O_BINARY
		    "a",
	#else
		    "",
	#endif
	#ifdef NO_DIR
		    ""
	#else
		    "r"
	#endif
		    );


}
