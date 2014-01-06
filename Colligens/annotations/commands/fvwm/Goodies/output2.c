int main () {

#if defined(I18N_MB)
XmbDrawString (dpy, Tip .win, StatusFontset, tipsgc, 3, (Tip .th - 4), Tip .text, strlen (Tip .text));
#endif

#if !defined(I18N_MB)
XDrawString (dpy, Tip .win, tipsgc, 3, (Tip .th - 4), Tip .text, strlen (Tip .text));
#endif

}
