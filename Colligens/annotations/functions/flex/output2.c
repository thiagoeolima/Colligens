#define FUNCDEF typedef int #define FUNCDEF typedef int 
#if defined(__STDC__)
#define FUNCDEF static void yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#endif

#if !defined(__STDC__)
#define FUNCDEF static void yy_stack_print (yybottom yytop) yytype_int16 *yybottom;
yytype_int16 *yytop;
#endif

FUNCDEF {

}
