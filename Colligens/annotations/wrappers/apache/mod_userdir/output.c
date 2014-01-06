int test () {

int test;

#if defined(HAVE_DRIVE_LETTERS)
test = (strchr ((prefix + 2), ':'));
#endif

#if !defined(HAVE_DRIVE_LETTERS)
test = (strchr (prefix, ':')&& (!(is_absolute)));
#endif

if ((test)){

redirect = apr_pstrcat (r ->pool, prefix, user, userdir, dname, NULL);
apr_table_setn (r ->headers_out, "Location", redirect);
return HTTP_MOVED_TEMPORARILY;
}
}
