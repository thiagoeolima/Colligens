int test () {

int test;

#if defined(NO_FSTAT)
test = (stat (ofname, &ostat)!= 0);
#endif

#if !defined(NO_FSTAT)
test = (fstat (ofd, &ostat)!= 0);
#endif

if ((test)){

}
}
