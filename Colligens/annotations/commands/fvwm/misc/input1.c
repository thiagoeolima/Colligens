int main (){

	fprintf(stderr,"[FVWM.%d][%s]: "
	#ifdef FVWM_DEBUG_TIME
	            "%s "
	#endif
	            "%s ",(int)Scr.screen,id,
	#ifdef FVWM_DEBUG_TIME
	            buffer,
	#endif
		    fvwm_msg_strings[(int)type]);

}
