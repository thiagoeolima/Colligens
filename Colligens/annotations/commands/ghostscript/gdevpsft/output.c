int main () {

#if defined(TT_BIAS_CMAP_6)
put_u16 ((cmap_data + 26), (first_code + first_entry));
#endif

#if !defined(TT_BIAS_CMAP_6)
put_u16 ((cmap_data + 26), first_entry);
#endif

}
