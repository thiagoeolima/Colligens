int main (){
	 put_u16(cmap_data + 26,
	#ifdef TT_BIAS_CMAP_6
	            first_code +
	#endif
	            first_entry);
}
