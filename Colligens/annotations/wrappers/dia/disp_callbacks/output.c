int test () {

int test;

#if defined(A)
test = ((!(key_handled))&& state & GDK_CONTROL_MASK | GDK_MOD1_MASK);
#endif

#if !defined(A)
test = (!(key_handled));
#endif

if ((test)){

}
}
