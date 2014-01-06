int test(){
	typedef int hook_lookup_t;

	static hook_lookup_t other_hooks[] = {
	    {"Monitor", ap_hook_get_monitor},
	    {"Child Status", ap_hook_get_child_status},
	    {"End Generation", ap_hook_get_end_generation},
	    {"Error Logging", ap_hook_get_error_log},
	    {"Query MPM Attributes", ap_hook_get_mpm_query},
	    {"Query MPM Name", ap_hook_get_mpm_get_name},
	    {"Register Timed Callback", ap_hook_get_mpm_register_timed_callback},
	    {"Extend Expression Parser", ap_hook_get_expr_lookup},
	    {"Set Management Items", ap_hook_get_get_mgmt_items},
	#ifdef AP_ENABLE_EXCEPTION_HOOK
	    {"Handle Fatal Exceptions", ap_hook_get_fatal_exception},
	#endif
	    {NULL},
	};


}
