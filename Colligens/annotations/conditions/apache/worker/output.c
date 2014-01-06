int test () {

int test;

#if defined(HAVE_PTHREAD_KILL)
test = (iter < 10 && pthread_kill (*listener_os_thread, 0) == 0);
#endif

#if !defined(HAVE_PTHREAD_KILL)
test = (iter < 10 && kill (ap_my_pid, 0) == 0);
#endif

while (test) {

apr_sleep (apr_time_make (0, 500000));
wakeup_listener ();
++iter;
}
}
