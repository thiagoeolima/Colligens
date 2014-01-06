int test(){

	ap_rputs("\n\n<table border=\"0\"><tr>" "<th>Srv</th><th>PID</th><th>Acc</th>" "<th>M</th>"
	#ifdef HAVE_TIMES
	                     "<th>CPU\n</th>"
	#endif
	                     "<th>SS</th><th>Req</th>" "<th>Conn</th><th>Child</th><th>Slot</th>" "<th>Client</th><th>VHost</th>" "<th>Request</th></tr>\n\n", r);

}
