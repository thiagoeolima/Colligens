int main () {

int test;

#if defined(A)
test = (!DO_NOT_RAISE_CLICK_FOCUS_CLICK (Tmp_win) || Event .xany .window != Tmp_win ->w && Event .xbutton .subwindow != Tmp_win ->w && Event .xany .window != Tmp_win ->Parent && Event .xbutton .subwindow != Tmp_win ->Parent);
#endif

#if !defined(A)
test = (!DO_NOT_RAISE_CLICK_FOCUS_CLICK (Tmp_win));
#endif

if ((test)){

}
}
