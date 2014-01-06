int main (){
	if ((code = gs_param_write_items(plist, params, NULL, items)) < 0 || (code = psdf_get_image_dict_param(plist, pnames->ACSDict, params->ACSDict)) < 0 || (code = psdf_get_image_dict_param(plist, pnames->Dict, params->Dict)) < 0 || (code = psdf_write_name(plist, pnames->DownsampleType, DownsampleType_names[params->DownsampleType])) < 0 || (code = psdf_write_name(plist, pnames->Filter, (params->Filter == 0 ? pnames->filter_names[0].pname : params->Filter))) < 0
	           /* (Resolution) */
	#ifdef USE_LWF_JP2
	           || (pnames->AutoFilterStrategy != 0 && (code = psdf_write_name(plist, pnames->AutoFilterStrategy, (params->AutoFilterStrategy == 0 ? "JPEG2000" : params->AutoFilterStrategy))) < 0)
	#endif
	        )
	        DO_NOTHING;
}
