int main () {

int test;

#if defined(STRICTLY_FIXED)
test = (fontset = XCreateFontSet (dpy, "fixed", &ml, &mc, &ds); == NULL);
#endif

#if !defined(STRICTLY_FIXED)
test = (fontset = XCreateFontSet (dpy, "-*-fixed-medium-r-normal-*-14-*-*-*-*-*-*-*", &ml, &mc, &ds); == NULL);
#endif

if ((test))
exit (1);
}
