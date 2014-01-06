int main () {

int test;

#if defined(XML_DTD)
test = (!dtd ->standalone && !paramEntityParsing && notStandaloneHandler && !notStandaloneHandler (handlerArg));
#endif

#if !defined(XML_DTD)
test = (!dtd ->standalone && notStandaloneHandler && !notStandaloneHandler (handlerArg));
#endif

if ((test))
return XML_ERROR_NOT_STANDALONE;
}
