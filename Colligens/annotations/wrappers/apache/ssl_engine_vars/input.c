int test(){

#ifdef OPENSSL_NO_SSL_INTERN
        switch (SSL_SESSION_get_compress_id(pSession)) {
#else
        switch (pSession->compress_meth) {
#endif
        case 0:
            /* default "NULL" already set */
            break;

            /* Defined by RFC 3749, deflate is coded by "1" */
        case 1:
            result = "DEFLATE";
            break;

            /* IANA assigned compression number for LZS */
        case 0x40:
            result = "LZS";
            break;

        default:
            result = "UNKNOWN";
            break;
    }

}
