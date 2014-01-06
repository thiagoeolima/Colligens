int main () {

typedef int size_t;
int test;

#if defined(_LIBC)
test = (__builtin_expect (fstat64 (fd, &st)!= 0, 0, || __builtin_expect (size = (size_t) st .st_size; != st .st_size, 0), || __builtin_expect (size < sizeof((struct mo_file_header)), 0)));
#endif

#if !defined(_LIBC)
test = (__builtin_expect (fstat (fd, &st)!= 0, 0, || __builtin_expect (size = (size_t) st .st_size; != st .st_size, 0), || __builtin_expect (size < sizeof((struct mo_file_header)), 0)));
#endif

if (test) {

close (fd);
return;
}
}
