int test () {

int test;

#if defined(APR_HAVE_IPV6)
test = ((!(internal))&& temp_sa ->family == APR_INET && addrbyte[0] == 10 || addrbyte[0] == 127 || addrbyte[0] == 169 && addrbyte[1] == 254 || addrbyte[0] == 172 && addrbyte[1]& 0xf0 == 16 || addrbyte[0] == 192 && addrbyte[1] == 168 || temp_sa ->family == APR_INET6 && temp_sa ->sa .sin6 .sin6_addr .s6_addr[0]& 0xe0 != 0x20);
#endif

#if !defined(APR_HAVE_IPV6)
test = ((!(internal))&& temp_sa ->family == APR_INET && addrbyte[0] == 10 || addrbyte[0] == 127 || addrbyte[0] == 169 && addrbyte[1] == 254 || addrbyte[0] == 172 && addrbyte[1]& 0xf0 == 16 || addrbyte[0] == 192 && addrbyte[1] == 168);
#endif

if ((test)){

}
}
