int main (){
	byte_acegbdfh_to_abcdefgh[(
	#ifdef arch_is_big_endian
	                    (sword >> 21) | (sword >> 14) | (sword >> 7) | sword
	#else
	                    (sword << 3) | (sword >> 6) | (sword >> 15) | (sword >> 24)
	#endif
	                                        ) & 0xff];
}
