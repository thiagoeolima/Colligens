int main () {

int test;

#if defined(arch_sizeof_long)
test = (asize > max_uint);
#endif

#if !defined(arch_sizeof_long)
test = (asize < lsize);
#endif

if (test) 
return 0;
}
