int main (){

	fprintf(stderr,"[FVWM][%s]: "
	#ifdef FVWM_DEBUG_TIME
	            "%s "
	#endif
	            "%s ",id,
	#ifdef FVWM_DEBUG_TIME
	            buffer,
	#endif
		    fvwm_msg_strings[(int)type]);

}
