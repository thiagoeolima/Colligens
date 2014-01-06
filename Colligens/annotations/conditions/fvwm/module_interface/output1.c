int main () {

int test;

#if !defined(WITHOUT_KILLMODULE_ALIAS_SUPPORT)
test = (pipeName[i]!= NULL && matchWildcards (name, pipeName[i])&& !alias || pipeAlias[i]&& matchWildcards (alias, pipeAlias[i]));
#endif

#if defined(WITHOUT_KILLMODULE_ALIAS_SUPPORT)
test = (pipeName[i]!= NULL && matchWildcards (name, pipeName[i]));
#endif

if ((test)){

KillModule (i);
}
}
