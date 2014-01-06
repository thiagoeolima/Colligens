int main () {

typedef int int64_t;

#if defined(TEST_BAND_LIST_COMPRESSION)
static const int64_t COMPRESSION_THRESHOLD = 1024;
#endif

#if !defined(TEST_BAND_LIST_COMPRESSION)
static const int64_t COMPRESSION_THRESHOLD = 500000000;
#endif

}
