int test(){

	if (mctx->pks->certs[SSL_AIDX_RSA] ||
	        mctx->pks->certs[SSL_AIDX_DSA]
	#ifndef OPENSSL_NO_EC
	      || mctx->pks->certs[SSL_AIDX_ECC]
	#endif
	        ){

	    }

}
