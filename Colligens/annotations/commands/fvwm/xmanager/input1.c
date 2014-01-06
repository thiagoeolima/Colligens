int main (){

#ifdef I18N_MB
      XmbDrawString (theDisplay, man->theWindow, man->ButtonFontset,
#else
      XDrawString (theDisplay, man->theWindow,
#endif
		   man->hiContext[button_state], g.text_x, g.text_base, b->drawn_state.display_string, strlen (b->drawn_state.display_string));


}
