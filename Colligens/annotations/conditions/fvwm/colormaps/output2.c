int main () {

int test;

#if (defined(sun) && defined(TRUECOLOR_ALWAYS_INSTALLED))
test = (last_cmap != tmp ->attr .colormap && !tmp ->attr .depth == 24 && tmp ->attr .visual ->class == TrueColor);
#endif

#if (!defined(sun) || !defined(TRUECOLOR_ALWAYS_INSTALLED))
test = (last_cmap != tmp ->attr .colormap);
#endif

if ((test)){

last_cmap = tmp ->attr .colormap;
XInstallColormap (dpy, last_cmap);
}
}
