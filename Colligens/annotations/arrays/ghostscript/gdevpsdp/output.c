int main () {

typedef int psdf_image_filter_name;

#if defined(USE_LDF_JB2)
#define ELEMS1  {"JBIG2Encode", &s_jbig2encode_template},
#endif

#if !defined(USE_LDF_JB2)
#define ELEMS1 ""
#endif

static const psdf_image_filter_name Mono_filters[] = {
{"CCITTFaxEncode", &s_CFE_template}, 
{"FlateEncode", &s_zlibE_template, psdf_version_ll3}, 
{"LZWEncode", &s_LZWE_template}, 
{"RunLengthEncode", &s_RLE_template},
ELEMS1
{0, 0}};
}
