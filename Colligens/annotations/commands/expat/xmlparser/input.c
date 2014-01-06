int main (){

	checkEntityDecl =
	  #ifdef XML_DTD
	                prologState.documentEntity &&
	  #endif /* XML_DTD */
	                (dtd->standalone ? !openInternalEntities : !dtd->hasParamEntityRefs);

}
