int test () {

int test;

#if !defined(OPENSSL_NO_EC)
test = (!((have_rsa || have_dsa || have_ecc)));
#endif

#if defined(OPENSSL_NO_EC)
test = (!((have_rsa || have_dsa)));
#endif

if ((test)){

}
}
