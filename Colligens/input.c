#ifdef A
typedef int myint;
#endif

#ifdef A
#ifdef B
typedef int myotherint;
#endif
#endif

#ifdef C
typedef struct {
	int x;
	myint y;
} typeTest;
#endif
