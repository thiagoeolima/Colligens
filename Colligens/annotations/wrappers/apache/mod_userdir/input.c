int test(){

	#ifdef HAVE_DRIVE_LETTERS
	                if (strchr(prefix + 2, ':'))
	#else
	                if (strchr(prefix, ':') && !is_absolute)
	#endif
	                {
	                    redirect = apr_pstrcat(r->pool, prefix, user, userdir,
	                                           dname, NULL);
	                    apr_table_setn(r->headers_out, "Location", redirect);
	                    return HTTP_MOVED_TEMPORARILY;
	                }

}
