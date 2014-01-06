int main (){
	typedef int int64_t;
	 static const int64_t COMPRESSION_THRESHOLD =
	#ifdef TEST_BAND_LIST_COMPRESSION
	    1024; /* Low value to force compression */
	#else
	    500000000;  /* 0.5 Gb for host machines */
	#endif
}
