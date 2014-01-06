int main () {

#if defined(I18N_MB)
XmbDrawString (theDisplay, man ->theWindow, man ->ButtonFontset, man ->hiContext[button_state], g .text_x, g .text_base, b ->drawn_state .display_string, strlen (b ->drawn_state .display_string));
#endif

#if !defined(I18N_MB)
XDrawString (theDisplay, man ->theWindow, man ->hiContext[button_state], g .text_x, g .text_base, b ->drawn_state .display_string, strlen (b ->drawn_state .display_string));
#endif

}
