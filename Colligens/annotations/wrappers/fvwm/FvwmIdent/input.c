int main (){

#ifdef STRICTLY_FIXED
     if ((fontset = XCreateFontSet(dpy, "fixed", &ml, &mc, &ds)) == NULL)
#else
     if ((fontset = XCreateFontSet(dpy, "-*-fixed-medium-r-normal-*-14-*-*-*-*-*-*-*", &ml, &mc, &ds)) == NULL)
#endif
	  exit(1);


}
