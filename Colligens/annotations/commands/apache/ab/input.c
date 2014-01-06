int test(){

	fprintf(stderr, "Usage: %s [options] [http"
	#ifdef USE_SSL
	        "[s]"
	#endif
	        "://]hostname[:port]/path\n", progname);

}
