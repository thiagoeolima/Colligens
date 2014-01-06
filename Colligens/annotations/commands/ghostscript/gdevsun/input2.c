int main (){
typedef int gx_device_color_info;

	 static gx_device_color_info color_ci =
	#ifdef RGB_COLS
	                dci_color(DEPTH, 31, MAX_COLS);
	#else
	                dci_color(DEPTH, MAX_COLS - 1, MAX_COLS);
	#endif



}
