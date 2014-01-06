int main (){

	if(last_cmap != tmp->attr.colormap
	#if defined(sun) && defined(TRUECOLOR_ALWAYS_INSTALLED)
	         && !(tmp->attr.depth == 24 && tmp->attr.visual->class == TrueColor)
	#endif
	        ){
		  last_cmap = tmp->attr.colormap;
		  XInstallColormap(dpy, last_cmap);
		}

}
