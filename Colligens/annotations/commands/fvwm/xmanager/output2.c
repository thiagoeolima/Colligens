int main () {

#if defined(I18N_MB)
XmbDrawString (theDisplay, man ->theWindow, man ->ButtonFontset, man ->hiContext[state], g .text_x, g .text_base, man ->titlename, len);
#endif

#if !defined(I18N_MB)
XDrawString (theDisplay, man ->theWindow, man ->hiContext[state], g .text_x, g .text_base, man ->titlename, len);
#endif

}
