int test () {

int test;

#if !defined(WIN32)
test = (sc ->server ->pphrase_dialog_type == SSL_PPTYPE_BUILTIN || sc ->server ->pphrase_dialog_type == SSL_PPTYPE_PIPE && cpPassPhraseCur != NULL && nPassPhraseRetry < BUILTIN_DIALOG_RETRIES);
#endif

#if defined(WIN32)
test = (sc ->server ->pphrase_dialog_type == SSL_PPTYPE_PIPE && cpPassPhraseCur != NULL && nPassPhraseRetry < BUILTIN_DIALOG_RETRIES);
#endif

if ((test)){

}
}
