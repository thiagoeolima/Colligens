int test(){

	if (!long_only || argv[optind][1] == '-'
	#ifdef GETOPT_COMPAT
		  || argv[optind][0] == '+'
	#endif				/* GETOPT_COMPAT */
		  || my_index (optstring, *nextchar) == NULL){

		}

}
