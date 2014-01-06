int main () {

#if defined(XSM_BUGGY_DISCARD_COMMAND)
xsmDetected = 1;
#endif

#if !defined(XSM_BUGGY_DISCARD_COMMAND)
xsmDetected = StrEquals (getenv ("SESSION_MANAGER_NAME"), "xsm");
#endif

}
