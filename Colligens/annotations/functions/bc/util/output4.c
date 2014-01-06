
#if (defined(__STDC__) && !defined(VARARGS))
#define FUNCDEF void rt_warn (char *mesg, ...)
#endif

#if (!defined(VARARGS) && !defined(__STDC__) && (!defined(__STDC__) || defined(VARARGS)))
#define FUNCDEF void rt_warn (mesg)
char *mesg;
#endif

#if defined(VARARGS)
#define FUNCDEF void rt_warn (mesg va_alist)
char *mesg;
#endif

FUNCDEF {

}

