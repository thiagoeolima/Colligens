int main () {

#if !defined(PRE_IBIS)
xdev ->canvas = window_create (xdev ->frame, CANVAS, CANVAS_AUTO_EXPAND, FALSE, CANVAS_AUTO_SHRINK, FALSE, CANVAS_WIDTH, xdev ->width, CANVAS_HEIGHT, xdev ->height, CANVAS_COLOR24, TRUE, CANVAS_RETAINED, FALSE, 0);
#endif

#if defined(PRE_IBIS)
xdev ->canvas = window_create (xdev ->frame, CANVAS, CANVAS_AUTO_EXPAND, FALSE, CANVAS_AUTO_SHRINK, FALSE, CANVAS_WIDTH, xdev ->width, CANVAS_HEIGHT, xdev ->height, CANVAS_RETAINED, FALSE, 0);
#endif

}
