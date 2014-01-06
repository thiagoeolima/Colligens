int test () {

int test;

#if defined(APR_CHARSET_EBCDIC)
test = (mime_type && strncasecmp (mime_type, "text/", 5) == 0 || strcmp (mime_type, DIR_MAGIC_TYPE) == 0 || strncasecmp (mime_type, "message/", 8) == 0 || strncasecmp (mime_type, "message/", 8) == 0 || dc ->force_xlate == FX_FORCE);
#endif

#if !defined(APR_CHARSET_EBCDIC)
test = (mime_type && strncasecmp (mime_type, "text/", 5) == 0 || dc ->force_xlate == FX_FORCE);
#endif

if ((test)){

}
}
