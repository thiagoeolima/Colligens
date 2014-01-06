int main (){
	pbs->display_mode = (mode == M_ENH_CG640 || mode == M_CG640x350 ? 0x10 :
	#ifdef M_VGA12
	         mode == M_VGA12 ? 0x12 :
	#endif
	         0x03);
}
