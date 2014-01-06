int main (){

#ifdef I18N_MB
  XmbDrawString(dpy,win,StatusFontset,statusgc,
#else
  XDrawString(dpy,win,statusgc,
#endif
	      win_width - stwin_width + 4, ((RowHeight - fontheight) >> 1) +StatusFont->ascent, str, strlen(str));


}
