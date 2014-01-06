int test(){



	if (propid == DAV_PROPID_CORE_lockdiscovery
	#if defined (DAV_DISABLE_WRITABLE_PROPS)
	        || propid == DAV_PROPID_CORE_getcontenttype || propid == DAV_PROPID_CORE_getcontentlanguage
	#endif
	        || propid == DAV_PROPID_CORE_supportedlock) {

	        return 0;
	    }

}
