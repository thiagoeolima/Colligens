int main () {

#if defined(arch_is_big_endian)
byte_acegbdfh_to_abcdefgh[(sword >> 21 | sword >> 14 | sword >> 7 | sword & 0xff)];
#endif

#if !defined(arch_is_big_endian)
byte_acegbdfh_to_abcdefgh[(sword << 3 | sword >> 6 | sword >> 15 | sword >> 24 & 0xff)];
#endif

}
