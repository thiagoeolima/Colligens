int test(){

	if (!(have_rsa || have_dsa
	#ifndef OPENSSL_NO_EC
	        || have_ecc
	#endif
	)) {

	    }

}
