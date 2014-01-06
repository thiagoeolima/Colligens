int main () {

#if defined(USEDECOR)
#define ELEMS1 ADDED_DECOR 
#endif

#if !defined(USEDECOR)
#define ELEMS1 ""
#endif

typedef enum {
	ADDED_NONE 0,
	ADDED_MENU,
	ELEMS1
	ADDED_FUNCTION}
last_added_item_type;
}
