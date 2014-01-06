#ifdef HAVE_STDARG_H
#ifdef __STDC__
void rt_warn (char *mesg, ...)
#else
void rt_warn (mesg)
     char *mesg;
#endif
#else
void
rt_warn (mesg, va_alist)
     char *mesg;
#endif
{
  // code
}
