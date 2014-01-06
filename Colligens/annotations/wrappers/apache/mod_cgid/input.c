int test(){


#ifdef _AIX
        if (getpgid(pid) < 0) {
#else
        if (kill(pid, 0) < 0) {
#endif
            return APR_SUCCESS;
        }

}
