#ifndef VARARGS
#ifdef __STDC__
void warn (char *mesg, ...)
#else
void warn (mesg)
     char *mesg;
#endif
#else
void warn (mesg, va_alist)
     char *mesg;
#endif
{
  // code
}
