#include <stdio.h>
#include <stdlib.h>

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
	int m;
#ifdef A
 int x;
#endif
#ifdef b
 myint x;
#endif
} typeTest;
#endif

typedef struct {}k;


typedef struct {
#ifdef A
	int x;
#else
	char x;
#endif
} a;

#ifdef A
	int x;
#else
	char x;
#endif

