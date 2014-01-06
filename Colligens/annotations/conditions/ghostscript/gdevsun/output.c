int main () {

int test;

#if !defined(FAKE_TRUE_COLOR)
test = (gx_device_has_color (xdev)&& !xdev ->truecolor);
#endif

#if defined(FAKE_TRUE_COLOR)
test = (gx_device_has_color (xdev));
#endif

if ((test)){

}
}
