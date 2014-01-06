int test(){

	if ((
	#ifdef USE_SSL
	         is_ssl && (port != 443)) || (!is_ssl &&
	#endif
	         (port != 80))){
	        colonhost = apr_psprintf(cntxt,":%d",port);
	    } else
	        colonhost = "";


}
