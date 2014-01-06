int main () {

int test;

#if !defined(WITHOUT_KILLMODULE_ALIAS_SUPPORT)
test = (pipeName[i]!= NULL && matchWildcards (module, pipeName[i]) || pipeAlias[i]&& matchWildcards (module, pipeAlias[i]));
#endif

#if defined(WITHOUT_KILLMODULE_ALIAS_SUPPORT)
test = (pipeName[i]!= NULL && matchWildcards (module, pipeName[i]));
#endif

if ((test)){

SendName (i, M_STRING, data0, data1, data2, str);
FlushMessageQueue (i);
}
}
