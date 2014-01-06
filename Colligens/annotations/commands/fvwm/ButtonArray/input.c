int main (){

#ifdef I18N_MB
    XmbDrawString(dpy, win, fontset,
#else
    XDrawString(dpy, win,
#endif
		*drawgc, x+newx, y+font->ascent+4, button->title, search_len);


}
