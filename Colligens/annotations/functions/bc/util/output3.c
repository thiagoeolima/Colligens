
#if (defined(__STDC__) && !defined(VARARGS))
#define FUNCDEF void rt_error (char *mesg, ...)
#endif

#if (!defined(VARARGS) && !defined(__STDC__) && (!defined(__STDC__) || defined(VARARGS)))
#define FUNCDEF void rt_error (mesg)
char *mesg;
#endif

#if defined(VARARGS)
#define FUNCDEF void rt_error (mesg va_alist)
char *mesg;
#endif

FUNCDEF {

}

