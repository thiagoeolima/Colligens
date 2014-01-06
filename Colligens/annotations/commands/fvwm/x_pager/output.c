int main () {

#if defined(I18N_MB)
XmbDrawString (dpy, Desks[i].balloon .w, Desks[i].balloon .fontset, Desks[i].BalloonGC, 2, Desks[i].balloon .font ->ascent, Desks[i].balloon .label, strlen (Desks[i].balloon .label));
#endif

#if !defined(I18N_MB)
XDrawString (dpy, Desks[i].balloon .w, Desks[i].BalloonGC, 2, Desks[i].balloon .font ->ascent, Desks[i].balloon .label, strlen (Desks[i].balloon .label));
#endif

}
