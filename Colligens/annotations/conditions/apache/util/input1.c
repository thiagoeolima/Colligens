int test(){



	 if (strcasecmp(comp.scheme, scheme) != 0
	#ifdef APACHE_PORT_HANDLING_IS_BUSTED
	            || comp.port != port
	#endif
	            ) {

	            return result;
	        }

}
