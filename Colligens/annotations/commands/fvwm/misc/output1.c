int main () {

#if defined(FVWM_DEBUG_TIME)
fprintf (stderr, "[FVWM.%d][%s]: ""%s "buffer "%s ", (int), Scr .screen, id, fvwm_msg_strings[(int) type]);
#endif

#if !defined(FVWM_DEBUG_TIME)
fprintf (stderr, "[FVWM.%d][%s]: ""%s ", (int), Scr .screen, id, fvwm_msg_strings[(int) type]);
#endif

}
