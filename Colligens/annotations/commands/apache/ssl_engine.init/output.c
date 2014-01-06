int test () {

#if defined(HAVE_TLSV1_X)
cp = apr_pstrcat (p, (protocol & SSL_PROTOCOL_SSLV3)?"SSLv3, ":"", (protocol & SSL_PROTOCOL_TLSV1)?"TLSv1, ":"", (protocol & SSL_PROTOCOL_TLSV1_1)?"TLSv1.1, ":"", (protocol & SSL_PROTOCOL_TLSV1_2)?"TLSv1.2, ":"", NULL);
#endif

#if !defined(HAVE_TLSV1_X)
cp = apr_pstrcat (p, (protocol & SSL_PROTOCOL_SSLV3)?"SSLv3, ":"", (protocol & SSL_PROTOCOL_TLSV1)?"TLSv1, ":"", NULL);
#endif

}
