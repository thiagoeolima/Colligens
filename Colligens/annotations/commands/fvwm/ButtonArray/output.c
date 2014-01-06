int main () {

#if defined(I18N_MB)
XmbDrawString (dpy, win, fontset, *drawgc, (x + newx), (y + font ->ascent + 4), button ->title, search_len);
#endif

#if !defined(I18N_MB)
XDrawString (dpy, win, *drawgc, (x + newx), (y + font ->ascent + 4), button ->title, search_len);
#endif

}
