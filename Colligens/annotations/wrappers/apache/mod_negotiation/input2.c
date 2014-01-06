typedef int apr_array_header_t;
#define __stdcall *

int test(){


#ifdef CASE_BLIND_FILESYSTEM
                if (strcasecmp(segstart, *cur_except) == 0) {
#else
                if (strcmp(segstart, *cur_except) == 0) {
#endif
                    --nexcept;
                    ++cur_except;
                }

}
