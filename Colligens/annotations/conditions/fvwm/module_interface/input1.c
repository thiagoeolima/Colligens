int main (){

	if((pipeName[i] != NULL)&&(matchWildcards(name,pipeName[i]))
	#ifndef WITHOUT_KILLMODULE_ALIAS_SUPPORT
	          && (!alias || (pipeAlias[i] && matchWildcards(alias, pipeAlias[i])))
	#endif
	        ){
		  KillModule(i);
		}

}
