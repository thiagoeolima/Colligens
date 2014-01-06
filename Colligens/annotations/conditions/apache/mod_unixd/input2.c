int test(){



	if (!geteuid() && (
	#ifdef _OSD_POSIX
	        os_init_job_environment(NULL, ap_unixd_config.user_name, ap_exists_config_define("DEBUG")) != 0 ||
	#endif
	        setuid(ap_unixd_config.user_id) == -1)) {

	    }

}
