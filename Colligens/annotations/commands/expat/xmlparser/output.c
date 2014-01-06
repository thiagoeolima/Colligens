int main () {

#if defined(XML_DTD)
checkEntityDecl = (prologState .documentEntity && dtd ->standalone ?!openInternalEntities :!dtd ->hasParamEntityRefs);
#endif

#if !defined(XML_DTD)
checkEntityDecl = dtd ->standalone ?!openInternalEntities :!dtd ->hasParamEntityRefs;
#endif

}
