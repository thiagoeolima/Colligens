int test(){

	g_print ("  with : "
	#ifdef G_THREADS_ENABLED
	  "threads "
	#endif
	#ifdef HAVE_CAIRO
	  "cairo "
	#endif
	#ifdef GNOME
	  "gnome "
	#endif
	#ifdef HAVE_GNOMEPRINT
	  "gnomeprint "
	#endif
	#ifdef HAVE_LIBART
	  "libart "
	#endif
	  "\n");


}
