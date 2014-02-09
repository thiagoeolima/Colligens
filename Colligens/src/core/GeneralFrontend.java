package core;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
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

public class GeneralFrontend {

	public static tree.Node getAST(String filePath, Collection<String> includes)
			throws OptionException {
		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> paramters = new ArrayList<String>();

		paramters.add("--lexNoStdout");

		for (Iterator<String> iterator = includes.iterator(); iterator
				.hasNext();) {
			paramters.add("-h");
			paramters.add(iterator.next());
		}

		paramters.add(filePath);

		String[] paramterArray = paramters
				.toArray(new String[paramters.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);

		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);

		myAst.accept(new VisitorASTOrganizer());

		return myAst;
	}

}
