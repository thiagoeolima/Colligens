int test () {

#if defined(HAVE_TIMES)
ap_rputs ("\n\n<table border = \"0\"><tr>""<th>Srv</th><th>PID</th><th>Acc</th>""<th>M</th>""<th>CPU\n</th>""<th>SS</th><th>Req</th>""<th>Conn</th><th>Child</th><th>Slot</th>""<th>Client</th><th>VHost</th>", r);
#endif

#if !defined(HAVE_TIMES)
ap_rputs ("\n\n<table border = \"0\"><tr>""<th>Srv</th><th>PID</th><th>Acc</th>""<th>M</th>""<th>SS</th><th>Req</th>""<th>Conn</th><th>Child</th><th>Slot</th>""<th>Client</th><th>VHost</th>", r);
#endif

}
