int test(){

	process_opts(argc, argv,
	#if defined (HAVE_POPT) || defined (USE_GOPTION)
	               context, options,
	#endif
	               &files, &export_file_name, &export_file_format, &size, &show_layers, &nosplash);


}
