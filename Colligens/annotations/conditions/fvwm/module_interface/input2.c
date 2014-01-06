int main (){

	if ((pipeName[i] != NULL && matchWildcards(module,pipeName[i]))
	#ifndef WITHOUT_KILLMODULE_ALIAS_SUPPORT
	      || (pipeAlias[i] && matchWildcards(module, pipeAlias[i]))
	#endif
	    ){
	      SendName(i,M_STRING,data0,data1,data2,str);
	      FlushMessageQueue(i);
	    }

}
