int test () {

int test;

#if defined(PKZIP_BUG_WORKAROUND)
test = (nl > 288 || nd > 32);
#endif

#if !defined(PKZIP_BUG_WORKAROUND)
test = (nl > 286 || nd > 30);
#endif

if ((test))
return 1;
}
