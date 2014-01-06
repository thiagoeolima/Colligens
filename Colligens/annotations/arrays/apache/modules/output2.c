int test () {

typedef int ap_module_symbol_t;

#if defined(USE_WINSOCK)
	#define ELEMS1 {"nwssl_module", &nwssl_module},
#endif

#if !defined(USE_WINSOCK)
	#define ELEMS1 ""
#endif

ap_module_symbol_t ap_prelinked_module_symbols[] = {
		{"core_module", &core_module},
		{"mpm_netware_module", &mpm_netware_module},
		{"http_module", &http_module},
		{"so_module", &so_module},
		{"mime_module", &mime_module},
		{"authn_core_module", &authn_core_module},
		{"authz_core_module", &authz_core_module},
		{"authz_host_module", &authz_host_module},
		{"negotiation_module", &negotiation_module},
		{"include_module", &include_module},
		{"dir_module", &dir_module},
		{"alias_module", &alias_module},
		{"env_module", &env_module},
		{"log_config_module", &log_config_module},
		{"setenvif_module", &setenvif_module},
		{"watchdog module", &watchdog_module},
		ELEMS1
		{"netware_module", &netware_module},
		{NULL, NULL}};
}
