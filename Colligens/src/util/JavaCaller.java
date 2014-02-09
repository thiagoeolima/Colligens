package util;

import java.util.ArrayList;

import de.fosd.typechef.FrontendOptions;
import de.fosd.typechef.FrontendOptionsWithConfigFiles;
import de.fosd.typechef.Lex;
import de.fosd.typechef.lexer.options.OptionException;
import de.fosd.typechef.parser.TokenReader;
import de.fosd.typechef.parser.c.AST;
import de.fosd.typechef.parser.c.CParser;
import de.fosd.typechef.parser.c.CToken;
import de.fosd.typechef.parser.c.CTypeContext;
import de.fosd.typechef.parser.c.ParserMain;

public class JavaCaller {

	public static void main(String[] args) throws OptionException {
		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> paramters = new ArrayList<String>();

		paramters.add("--lexNoStdout");
		paramters.add("-h");
		paramters.add("stubs/apache.h");

		paramters.add("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/source/apache-2.4.3/modules/aaa/mod_authnz_ldap.c");

		String[] paramterArray = paramters.toArray(new String[paramters.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);
		System.out.println(ast);
		System.out.println();
	}
	
}
