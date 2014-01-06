int main () {

#if defined(M_VGA12)
pbs ->display_mode = (mode == M_ENH_CG640 || mode == M_CG640x350)?0x10 :(mode == M_VGA12)?0x12 :0x03;
#endif

#if !defined(M_VGA12)
pbs ->display_mode = (mode == M_ENH_CG640 || mode == M_CG640x350)?0x10 :0x03;
#endif

}
