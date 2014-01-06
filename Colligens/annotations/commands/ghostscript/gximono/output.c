int main () {

#if defined(A)
dev_color_ok = (penum ->dev ->color_info .num_components == 1 && penum ->dev ->color_info .depth == 1 || 0);
#endif

#if !defined(A)
dev_color_ok = (penum ->dev ->color_info .num_components == 1 && penum ->dev ->color_info .depth == 1 || penum ->dev ->color_info .num_components == 4 && penum ->dev ->color_info .depth == 4 && is_planar_dev);
#endif

}
