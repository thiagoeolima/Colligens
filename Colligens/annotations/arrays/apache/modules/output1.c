int test () {

typedef int module;

#if defined(USE_WINSOCK)
	#define ELEMS1 &nwssl_module,
#endif

#if !defined(USE_WINSOCK)
	#define ELEMS1 ""
#endif

module *ap_prelinked_modules[] = {
		&core_module,
		&mpm_netware_module,
		&http_module,
		&so_module,
		&mime_module,
		&authn_core_module,
		&authz_core_module,
		&authz_host_module,
		&negotiation_module,
		&include_module,
		&dir_module,
		&alias_module,
		&env_module,
		&log_config_module,
		&setenvif_module,
		&watchdog_module,
		ELEMS1
		&netware_module,
		NULL};
}
