int test(){

	if (r->finfo.filetype != APR_NOFILE
	#ifdef CASE_BLIND_FILESYSTEM
	                && (filename_len <= canonical_len)
	#endif
	                && ((opts.opts & (OPT_SYM_OWNER | OPT_SYM_LINKS)) == OPT_SYM_LINKS)){

	                thisinfo.filetype = APR_DIR;
	                ++seg;
	                continue;
	            }

}
