int test(){

#ifndef WIN32
                if ((sc->server->pphrase_dialog_type == SSL_PPTYPE_BUILTIN
                       || sc->server->pphrase_dialog_type == SSL_PPTYPE_PIPE)
#else
                if (sc->server->pphrase_dialog_type == SSL_PPTYPE_PIPE
#endif
                    && cpPassPhraseCur != NULL && nPassPhraseRetry < BUILTIN_DIALOG_RETRIES ) {

                }

}
