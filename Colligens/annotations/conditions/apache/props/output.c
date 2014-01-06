int test () {

int test;

#if defined(DAV_DISABLE_WRITABLE_PROPS)
test = (propid == DAV_PROPID_CORE_lockdiscovery || propid == DAV_PROPID_CORE_getcontenttype || propid == DAV_PROPID_CORE_getcontentlanguage || propid == DAV_PROPID_CORE_supportedlock);
#endif

#if !defined(DAV_DISABLE_WRITABLE_PROPS)
test = (propid == DAV_PROPID_CORE_lockdiscovery || propid == DAV_PROPID_CORE_supportedlock);
#endif

if ((test)){

return 0;
}
}
