int test () {

#if defined(G_THREADS_ENABLED)
g_print (" with : ""threads ""\n");
#endif

#if defined(HAVE_CAIRO)
g_print (" with : ""cairo ""\n");
#endif

#if defined(GNOME)
g_print (" with : ""gnome ""\n");
#endif

#if defined(HAVE_GNOMEPRINT)
g_print (" with : ""gnomeprint ""\n");
#endif

#if defined(HAVE_LIBART)
g_print (" with : ""libart ""\n");
#endif

}
