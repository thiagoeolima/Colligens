int main (){
	fprintf( prn_stream,
	             "\033E\033&u300D\033&l%da1x%dO\033*p0x0y+50x-100Y\033*t%dR"
	#ifdef USE_FAST_MODE
	             "\033*r-3U"
	#else
	             "\033*v6W\001\002\003\001\001\001"
	#endif
	             "\033*r0f%ds%dt1A\033*b2M", psize->tag, pclj->rotated, (int)(pdev->HWResolution[0]), imageable_width, imageable_height );

}
