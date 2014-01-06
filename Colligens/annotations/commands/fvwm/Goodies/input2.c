int main (){

#ifdef I18N_MB
    XmbDrawString(dpy, Tip.win, StatusFontset, tipsgc, 3, Tip.th-4,
#else
    XDrawString(dpy, Tip.win, tipsgc, 3, Tip.th-4,
#endif
                     Tip.text, strlen(Tip.text));


}
