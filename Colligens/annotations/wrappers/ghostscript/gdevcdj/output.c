int main () {

int test;

#if !defined(BJC_INIT_800_AS_600)
test = (bjc ->ptype == BJC800);
#endif

#if defined(BJC_INIT_800_AS_600)
test = 0;
#endif

if ((test)){

}
}
