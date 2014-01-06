int test(){


#ifdef _OSD_POSIX
    if ((pid = os_fork(ap_unixd_config.user_name)) == -1) {
#else
    if ((pid = fork()) == -1) {
#endif
        // code
    }


}
