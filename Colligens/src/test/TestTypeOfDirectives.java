package test;

import java.util.ArrayList;
import java.util.List;

import tree.Opt;
import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import tree.visitor.VisitorPrinter;
import core.ASTGenerator;
import core.diretives.TypeOfDirectivesVisitor;
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

public class TestTypeOfDirectives {

	public static void main(String[] args) throws OptionException {
		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> paramters = new ArrayList<String>();

		paramters.add("--lexNoStdout");
		paramters.add("-h");
		paramters.add("stubs.h");

		paramters.add("input.c");

		String[] paramterArray = paramters.toArray(new String[paramters.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);
		System.out.println(ast);
		System.out.println();

		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);
		
		myAst.accept(new VisitorASTOrganizer());

		System.out.println();
		
		TypeOfDirectivesVisitor visitor = new TypeOfDirectivesVisitor();
		myAst.accept(visitor);
		
		List<Opt> conditionals = visitor.getConditionals();
		for (Opt node : conditionals){
			if (!node.getConditional().isTautology()){
				System.out.println("Is Complete: " + node.isComplete());
				node.accept(new VisitorPrinter(false));
				System.out.println("\n\n\n");
			}
		}
	
	}
	
}
