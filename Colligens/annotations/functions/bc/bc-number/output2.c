
#if (defined(__STDC__) && defined(HAVE_STDARG_H))
#define FUNCDEF void rt_warn (char *mesg, ...)
#endif

#if (defined(HAVE_STDARG_H) && !defined(__STDC__) && (!defined(__STDC__) || !defined(HAVE_STDARG_H)))
#define FUNCDEF void rt_warn (mesg)
char *mesg;
#endif

#if !defined(HAVE_STDARG_H)
#define FUNCDEF void rt_warn (mesg va_alist)
char *mesg;
#endif

FUNCDEF {

}
