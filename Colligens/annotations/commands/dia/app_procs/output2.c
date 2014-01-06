int test () {

#if (defined(HAVE_POPT) || defined(USE_GOPTION))
process_opts (argc, argv, context, options, &files, &export_file_name, &export_file_format, &size, &show_layers, &nosplash);
#endif

#if (!defined(HAVE_POPT) && !defined(USE_GOPTION))
process_opts (argc, argv, &files, &export_file_name, &export_file_format, &size, &show_layers, &nosplash);
#endif

}
