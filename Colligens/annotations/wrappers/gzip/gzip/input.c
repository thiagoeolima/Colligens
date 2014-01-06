int test(){

#ifdef NO_FSTAT
	if (stat(ofname, &ostat) != 0) {
#else
	if (fstat(ofd, &ostat) != 0) {
#endif

	}

}
