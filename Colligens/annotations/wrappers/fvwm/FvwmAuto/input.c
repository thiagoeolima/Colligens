int main (){

#ifdef I18N_MB
  if(b->flags&b_Title && (fontset = buttonFontSet(b)) && (font=buttonFont(b)))
#else
  if(b->flags&b_Title && (font=buttonFont(b)))
#endif
  {


  }

}
