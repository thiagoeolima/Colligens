int main () {

#if defined(I18N_MB)
XmbDrawString (dpy, win, StatusFontset, statusgc, (win_width - stwin_width + 4), (RowHeight - fontheight >> 1 + StatusFont ->ascent), str, strlen (str));
#endif

#if !defined(I18N_MB)
XDrawString (dpy, win, statusgc, (win_width - stwin_width + 4), (RowHeight - fontheight >> 1 + StatusFont ->ascent), str, strlen (str));
#endif

}
