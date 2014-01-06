#ifndef VARARGS
#ifdef __STDC__
void yyerror (char *str, ...)
#else
void yyerror (str)
     char *str;
#endif
#else
void yyerror (str, va_alist)
     char *str;
#endif
{
  // code
}
