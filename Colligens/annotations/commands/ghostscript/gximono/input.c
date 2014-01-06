int main (){
	dev_color_ok = ((penum->dev->color_info.num_components == 1 && penum->dev->color_info.depth == 1) ||
	#ifdef A
						0);
	#else
	                        (penum->dev->color_info.num_components == 4 && penum->dev->color_info.depth == 4 && is_planar_dev));
	#endif
}
