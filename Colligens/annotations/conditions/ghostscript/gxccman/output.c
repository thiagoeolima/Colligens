int main () {

int test;

#if defined(GSLITE)
test = (cc != 0 && !cc ->dont_evict && *proc (dir ->memory, cc, proc_data)&& *proc (dir ->memory, cc, proc_data));
#endif

#if !defined(GSLITE)
test = (cc != 0);
#endif

if ((test)){

hash_remove_cached_char (dir, chi);
gx_free_cached_char (dir, cc);
}
else 
chi ++;
}
