int test(){


	while (iter < 10 &&
	#ifdef HAVE_PTHREAD_KILL
	               pthread_kill(*listener_os_thread, 0)
	#else
	               kill(ap_my_pid, 0)
	#endif
	               == 0) {
	            /* listener not dead yet */
	            apr_sleep(apr_time_make(0, 500000));
	            wakeup_listener();
	            ++iter;
	        }


}
