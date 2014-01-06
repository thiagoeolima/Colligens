int test(){
	typedef int module;

	module *ap_prelinked_modules[] = {
	  &core_module, /* core must come first */
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
	#ifdef USE_WINSOCK
	  &nwssl_module,
	#endif
	  &netware_module,
	  NULL
	};



}
