int main () {

#if defined(FVWM_DEBUG_TIME)
fprintf (stderr, "[FVWM][%s]: ""%s "buffer "%s ", id, fvwm_msg_strings[(int) type]);
#endif

#if !defined(FVWM_DEBUG_TIME)
fprintf (stderr, "[FVWM][%s]: ""%s ", id, fvwm_msg_strings[(int) type]);
#endif

}
