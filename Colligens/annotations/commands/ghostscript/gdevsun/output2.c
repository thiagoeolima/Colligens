int main () {

typedef int gx_device_color_info;

#if defined(RGB_COLS)
static gx_device_color_info color_ci = dci_color (DEPTH, 31, MAX_COLS);
#endif

#if !defined(RGB_COLS)
static gx_device_color_info color_ci = dci_color (DEPTH, (MAX_COLS - 1), MAX_COLS);
#endif

}
