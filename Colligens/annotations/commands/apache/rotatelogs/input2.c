int test(){

	fprintf(stderr,
	            "to httpd.conf. By default, the generated name will be\n"
	            "<logfile>.nnnn where nnnn is the system time at which the log\n"
	            "nominally starts (N.B. if using a rotation time, the time will\n"
	            "always be a multiple of the rotation time, so you can synchronize\n"
	            "cron scripts with it). If <logfile> contains strftime conversion\n"
	            "specifications, those will be used instead. At the end of each\n"
	            "rotation time or when the file size is reached a new log is\n"
	            "started.\n"
	            "\n"
	            "Options:\n"
	            "  -v       Verbose operation. Messages are written to stderr.\n"
	            "  -l       Base rotation on local time instead of UTC.\n"
	            "  -L path  Create hard link from current log to specified path.\n"
	            "  -p prog  Run specified program after opening a new log file. See below.\n"
	            "  -f       Force opening of log on program start.\n"
	            "  -t       Truncate logfile instead of rotating, tail friendly.\n"
	            "  -e       Echo log to stdout for further processing.\n"
	#ifdef APR_FILES_AS_SOCKETS
	            "  -c       Create log even if it is empty.\n"
	#endif
	            "\n"
	            "The program is invoked as \"[prog] <curfile> [<prevfile>]\"\n"
	            "where <curfile> is the filename of the newly opened logfile, and\n"
	            "<prevfile>, if given, is the filename of the previously used logfile.\n"
	            "\n");


}
