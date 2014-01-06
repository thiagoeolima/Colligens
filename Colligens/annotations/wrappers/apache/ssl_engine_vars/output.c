int test () {

#if defined(OPENSSL_NO_SSL_INTERN)
int var = SSL_SESSION_get_compress_id (pSession);
#endif

#if !defined(OPENSSL_NO_SSL_INTERN)
int var = pSession ->compress_meth;
#endif

switch (var){

case 0 :

break;
case 1 :

result = "DEFLATE";
break;
case 0x40 :

result = "LZS";
break;
default:

result = "UNKNOWN";
break;
}
}
