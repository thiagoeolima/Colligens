int test () {

int test;

#if !defined(OPENSSL_NO_EC)
test = (mctx ->pks ->certs[SSL_AIDX_RSA]|| mctx ->pks ->certs[SSL_AIDX_DSA]|| mctx ->pks ->certs[SSL_AIDX_ECC]);
#endif

#if defined(OPENSSL_NO_EC)
test = (mctx ->pks ->certs[SSL_AIDX_RSA]|| mctx ->pks ->certs[SSL_AIDX_DSA]);
#endif

if ((test)){

}
}
