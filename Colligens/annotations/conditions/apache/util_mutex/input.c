int test(){

	 if (mech != APR_LOCK_FLOCK
	        && mech != APR_LOCK_FCNTL
	#if defined (APR_USE_FLOCK_SERIALIZE)
	        && mech != APR_LOCK_DEFAULT
	#endif
	        ) {
	        return 0;
	    }

}
