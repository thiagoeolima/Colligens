int test () {

int test;

#if defined(_OSD_POSIX)
test = ((!(geteuid ()))&& os_init_job_environment (NULL, ap_unixd_config .user_name, ap_exists_config_define ("DEBUG"))!= 0 || setuid (ap_unixd_config .user_id) == (!(1)));
#endif

#if !defined(_OSD_POSIX)
test = ((!(geteuid ()))&& setuid (ap_unixd_config .user_id) == (!(1)));
#endif

if ((test)){

}
}
