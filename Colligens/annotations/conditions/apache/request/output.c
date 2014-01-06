int test () {

int test;

#if defined(CASE_BLIND_FILESYSTEM)
test = (r ->finfo .filetype != APR_NOFILE && filename_len < = canonical_len && opts .opts & OPT_SYM_OWNER | OPT_SYM_LINKS == OPT_SYM_LINKS);
#endif

#if !defined(CASE_BLIND_FILESYSTEM)
test = (r ->finfo .filetype != APR_NOFILE && opts .opts & OPT_SYM_OWNER | OPT_SYM_LINKS == OPT_SYM_LINKS);
#endif

if ((test)){

thisinfo .filetype = APR_DIR;
++seg;
continue;
}
}
