int main (){

	#ifdef I18N_MB
	  XmbDrawString (theDisplay, man->theWindow, man->ButtonFontset, man->hiContext[state],
	#else
	  XDrawString (theDisplay, man->theWindow, man->hiContext[state],
	#endif


}
