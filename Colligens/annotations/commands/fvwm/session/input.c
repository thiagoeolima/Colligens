int main (){

	xsmDetected =
	#ifdef XSM_BUGGY_DISCARD_COMMAND
	    1
	#else
	    StrEquals(getenv("SESSION_MANAGER_NAME"), "xsm")
	#endif
	  ;

}
