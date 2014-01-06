int test () {

int test;

#if defined(CASE_BLIND_FILESYSTEM)
test = (pattern && apr_fnmatch (pattern, dirent ->name, APR_FNM_NOESCAPE | APR_FNM_PERIOD | APR_FNM_CASE_BLIND)!= APR_SUCCESS);
#endif

#if !defined(CASE_BLIND_FILESYSTEM)
test = (pattern && apr_fnmatch (pattern, dirent ->name, APR_FNM_NOESCAPE | APR_FNM_PERIOD)!= APR_SUCCESS);
#endif

if ((test)){

return NULL;
}
}
