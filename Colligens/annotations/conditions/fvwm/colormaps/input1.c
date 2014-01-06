int main (){

	if(last_cmap != attributes.colormap
	#if defined(sun) && defined(TRUECOLOR_ALWAYS_INSTALLED)
	             && !(attributes.depth == 24 &&
			  attributes.visual->class == TrueColor)
	#endif
	             ){
		      last_cmap = attributes.colormap;
		      XInstallColormap(dpy, last_cmap);
		    }

}
