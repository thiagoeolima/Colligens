int test(){

	if (longopts != NULL
	      && ((argv[optind][0] == '-'
		   && (argv[optind][1] == '-' || long_only))
	#ifdef GETOPT_COMPAT
		  || argv[optind][0] == '+'
	#endif				/* GETOPT_COMPAT */
		  )){
	    	// code
	    }

}
