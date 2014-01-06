
#if (defined(__STDC__) && !defined(VARARGS))
#define FUNCDEF void yyerror (char *str, ...)
#endif

#if (!defined(VARARGS) && !defined(__STDC__) && (!defined(__STDC__) || defined(VARARGS)))
#define FUNCDEF void yyerror (str)
char *str;
#endif

#if defined(VARARGS)
#define FUNCDEF void yyerror (str va_alist)
char *str;
#endif

FUNCDEF {

}

