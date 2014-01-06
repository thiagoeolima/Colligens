
#if (defined(__STDC__) && defined(HAVE_STDARG_H))
#define FUNCDEF void rt_error (char *mesg, ...)
#endif

#if (defined(HAVE_STDARG_H) && !defined(__STDC__) && (!defined(__STDC__) || !defined(HAVE_STDARG_H)))
#define FUNCDEF void rt_error (mesg)
char *mesg;
#endif

#if !defined(HAVE_STDARG_H)
#define FUNCDEF void rt_error (mesg va_alist)
char *mesg;
#endif

FUNCDEF {

}
