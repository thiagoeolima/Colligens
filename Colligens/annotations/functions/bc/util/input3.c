#ifndef VARARGS
#ifdef __STDC__
void rt_error (char *mesg, ...)
#else
void rt_error (mesg)
     char *mesg;
#endif
#else
void rt_error (mesg, va_alist)
     char *mesg;
#endif
{
  // code
}
