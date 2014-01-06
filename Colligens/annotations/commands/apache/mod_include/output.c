int test () {

#if defined(DEBUG_INCLUDE)
int was_unmatched = get_ptoken (ctx, &parse, &new ->token, (current != NULL)?&current ->token :NULL);
#endif

#if !defined(DEBUG_INCLUDE)
get_ptoken (ctx, &parse, &new ->token, (current != NULL)?&current ->token :NULL);
#endif

}
