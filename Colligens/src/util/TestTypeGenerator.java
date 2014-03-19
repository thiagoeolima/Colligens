package util;

import java.util.ArrayList;
import java.util.List;

import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import core.ASTGenerator;
import core.presence.condition.PresenceConditionVisitor;
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

public class TestTypeGenerator {

	public static void main(String[] args) throws OptionException {

		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> parameters = new ArrayList<String>();

		parameters.add("-h");
		parameters.add("platform.h");
		parameters.add("-I");
		parameters.add("/usr/include/");
		parameters.add("-I");
		parameters.add("/usr/include/x86_64-linux-gnu");
		parameters.add("-I");
		parameters.add("/usr/lib/gcc/x86_64-linux-gnu/4.8/include");
		parameters.add("-I");
		parameters.add("/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed");
		parameters.add("-I");
		parameters.add("/usr/local/include/");
		parameters.add("--lexNoStdout");

		parameters.add("input.c");

		String[] paramterArray = parameters.toArray(new String[parameters
				.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);
		System.out.println(ast);
		// System.out.println();

		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);

		myAst.accept(new VisitorASTOrganizer());
		myAst.accept(new PresenceConditionVisitor());

		TypeGeneratorVisitor typeGenerator = new TypeGeneratorVisitor();
		myAst.accept(typeGenerator);

		List<Type> types = typeGenerator.getTypes();
		for (Type type : types) {
			System.out.println("----------");
			System.out.println(type.getPresenceCondition().toString());
			System.out.println("=======");
			System.out.println(type.getSource());
			System.out.println("----------");
		}

		System.out.println();

	}

}
