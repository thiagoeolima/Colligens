int main (){
	xdev->canvas = window_create(xdev->frame, CANVAS, CANVAS_AUTO_EXPAND,		FALSE, CANVAS_AUTO_SHRINK,		FALSE, CANVAS_WIDTH,			xdev->width, CANVAS_HEIGHT,			xdev->height,
	#ifndef PRE_IBIS	/* try to use 24-bit visual if OS supports it */
	                        CANVAS_COLOR24,			TRUE,
	#endif
	                        CANVAS_RETAINED,		FALSE, 0);
}
