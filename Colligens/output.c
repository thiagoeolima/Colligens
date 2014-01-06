typedef int myint;
int main () {

myint x;

#if defined(A)
x = 2;
#endif

#if !defined(A)
x = 3;
#endif

}
