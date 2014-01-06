int test () {

int test;

#if defined(PATH_SEP2)
test = (len != 0 && dir[len - 1]!= PATH_SEP2);
#endif

#if defined(PATH_SEP3)
test = (len != 0 && dir[len - 1]!= PATH_SEP3);
#endif

if ((test)){

nbuf[len ++] = PATH_SEP;
}
}
