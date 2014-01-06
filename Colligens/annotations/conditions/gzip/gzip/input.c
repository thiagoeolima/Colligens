int test(){

	if (len != 0
	#ifdef PATH_SEP2
			&& dir[len-1] != PATH_SEP2
	#endif
	#ifdef PATH_SEP3
			&& dir[len-1] != PATH_SEP3
	#endif
		    ) {
			nbuf[len++] = PATH_SEP;
		    }

}
