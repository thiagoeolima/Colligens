int main (){
	if (cc != 0 &&
	#ifdef GSLITE
	                !cc->dont_evict &&
	#endif
	                (*proc) (dir->memory, cc, proc_data)) {
		hash_remove_cached_char(dir, chi); gx_free_cached_char(dir, cc);
	        } else
	            chi++;
}
