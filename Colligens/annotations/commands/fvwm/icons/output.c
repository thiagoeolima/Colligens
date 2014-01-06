int main () {

#if defined(I18N_MB)
XmbDrawString (dpy, tmp_win ->icon_w, tmp_win ->icon_font .fontset, Scr .TitleGC, x, (tmp_win ->icon_g .height - tmp_win ->icon_font .height + tmp_win ->icon_font .y - 3), tmp_win ->icon_name, strlen (tmp_win ->icon_name));
#endif

#if !defined(I18N_MB)
XDrawString (dpy, tmp_win ->icon_w, Scr .TitleGC, x, (tmp_win ->icon_g .height - tmp_win ->icon_font .height + tmp_win ->icon_font .y - 3), tmp_win ->icon_name, strlen (tmp_win ->icon_name));
#endif

}
