int test () {

#if defined(HAVE_TIMES)
ap_rputs ("</table>\n 	"
		"<hr /> 	"
		"<table>\n 	"
		"<tr><th>Srv</th><td>Child Server number - generation</td></tr>\n 	"
		"<tr><th>PID</th><td>OS process ID</td></tr>\n 	"
		"<tr><th>Acc</th><td>Number of accesses this connection / this child / this slot</td></tr>\n 	"
		"<tr><th>M</th><td>Mode of operation</td></tr>\n"
		"<tr><th>CPU</th><td>CPU usage, number of seconds</td></tr>\n"
		"<tr><th>SS</th><td>Seconds since beginning of most recent request</td></tr>\n 	"
		"<tr><th>Req</th><td>Milliseconds required to process most recent request</td></tr>\n 	"
		"<tr><th>Conn</th><td>Kilobytes transferred this connection</td></tr>\n 	"
		"<tr><th>Child</th><td>Megabytes transferred this child</td></tr>\n 	"
		"<tr><th>Slot</th><td>Total megabytes transferred this slot</td></tr>\n 	"
		"</table>\n", r);
#endif

#if !defined(HAVE_TIMES)
ap_rputs ("</table>\n 	"
		"<hr /> 	<table>\n 	"
		"<tr><th>Srv</th><td>Child Server number - generation</td></tr>\n 	"
		"<tr><th>PID</th><td>OS process ID</td></tr>\n 	"
		"<tr><th>Acc</th><td>Number of accesses this connection / this child / this slot</td></tr>\n 	"
		"<tr><th>M</th><td>Mode of operation</td></tr>\n"
		"<tr><th>SS</th><td>Seconds since beginning of most recent request</td></tr>\n 	"
		"<tr><th>Req</th><td>Milliseconds required to process most recent request</td></tr>\n 	"
		"<tr><th>Conn</th><td>Kilobytes transferred this connection</td></tr>\n 	"
		"<tr><th>Child</th><td>Megabytes transferred this child</td></tr>\n 	"
		"<tr><th>Slot</th><td>Total megabytes transferred this slot</td></tr>\n 	"
		"</table>\n", r);
#endif

}
