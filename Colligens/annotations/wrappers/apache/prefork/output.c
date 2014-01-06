int test () {

int test;

#if defined(_OSD_POSIX)
test = (pid = os_fork (ap_unixd_config .user_name); == -1);
#endif

#if !defined(_OSD_POSIX)
test = (pid = fork (); == -1);
#endif

if ((test)){

}
}
