int test () {

#if defined(USE_ZLIB)
s ->allowed_encodings = (0 | HTTP_ACCEPT_ENCODING_GZIP | HTTP_ACCEPT_ENCODING_DEFLATE);
#endif

#if defined(USE_BZ2LIB)
s ->allowed_encodings = (0 | HTTP_ACCEPT_ENCODING_BZIP2);
#endif

}
