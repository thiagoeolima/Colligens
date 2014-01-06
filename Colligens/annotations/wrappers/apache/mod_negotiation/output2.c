typedef int apr_array_header_t;
int test () {

int test;

#if defined(CASE_BLIND_FILESYSTEM)
test = (strcasecmp (segstart, *cur_except) == 0);
#endif

#if !defined(CASE_BLIND_FILESYSTEM)
test = (strcmp (segstart, *cur_except) == 0);
#endif

if ((test)){

--nexcept;
++cur_except;
}
}
