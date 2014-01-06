int main () {

int test;

#if (defined(sun) && defined(TRUECOLOR_ALWAYS_INSTALLED))
test = (last_cmap != attributes .colormap && !attributes .depth == 24 && attributes .visual ->class == TrueColor);
#endif

#if (!defined(sun) || !defined(TRUECOLOR_ALWAYS_INSTALLED))
test = (last_cmap != attributes .colormap);
#endif

if ((test)){

last_cmap = attributes .colormap;
XInstallColormap (dpy, last_cmap);
}
}
