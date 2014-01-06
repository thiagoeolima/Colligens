int main (){

#ifdef I18N_MB
    XmbDrawString (dpy, tmp_win->icon_w, tmp_win->icon_font.fontset,
#else
    XDrawString (dpy, tmp_win->icon_w,
#endif
		 Scr.TitleGC, x, tmp_win->icon_g.height - tmp_win->icon_font.height + tmp_win->icon_font.y - 3, tmp_win->icon_name, strlen(tmp_win->icon_name));

}
