int main (){

#ifdef I18N_MB
  XmbDrawString(dpy, Desks[i].balloon.w, Desks[i].balloon.fontset, Desks[i].BalloonGC,
#else
  XDrawString(dpy, Desks[i].balloon.w, Desks[i].BalloonGC,
#endif
	      2, Desks[i].balloon.font->ascent, Desks[i].balloon.label,strlen(Desks[i].balloon.label));


}
