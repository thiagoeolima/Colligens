typedef int apr_array_header_t;
int test () {

int test;

#if defined(CASE_BLIND_FILESYSTEM)
test = (strncasecmp (dirent .name, filp, prefix_len));
#endif

#if !defined(CASE_BLIND_FILESYSTEM)
test = (strncmp (dirent .name, filp, prefix_len));
#endif

if ((test)){

continue;
}
}
