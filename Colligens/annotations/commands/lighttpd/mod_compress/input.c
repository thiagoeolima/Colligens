int test(){

	s->allowed_encodings = 0
	#ifdef USE_ZLIB
					| HTTP_ACCEPT_ENCODING_GZIP | HTTP_ACCEPT_ENCODING_DEFLATE
	#endif
	#ifdef USE_BZ2LIB
					| HTTP_ACCEPT_ENCODING_BZIP2
	#endif
					;
}
