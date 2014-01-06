package core;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import tree.visitor.VisitorPrinter;
import core.refactorings.ArrayRefactor;
import core.refactorings.EnumRefactor;
import core.refactorings.FunctionDefinitionRefactor;
import core.refactorings.IfStmtsCloneRefactor;
import core.refactorings.IncompleteStmtCloneRefactor;
import core.refactorings.RemoveCloneIfStmtRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;
import core.refactorings.RemoveCloneWhileStmtRefactor;
import core.refactorings.SwitchStmtsRefactor;
import core.refactorings.WhileStmtsCloneRefactor;
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

public class RefactoringFrontend {
	public static final String inputFilePath = System
			.getProperty("java.io.tmpdir")
			+ System.getProperty("file.separator") + "input.c";
	public static final String outputFilePath = System
			.getProperty("java.io.tmpdir")
			+ System.getProperty("file.separator") + "output.c";

	public String refactorCode(String textSelection, String stubsPath,
			RefactoringType refactoringType) throws OptionException {

		// ParserOptions myParserOptions = new MyParserOptions();

		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> paramters = new ArrayList<String>();

		paramters.add("-h");
		paramters.add(stubsPath);

		// Writing textSelection to input.c file
		PrintWriter out = null;
		try {
			out = new PrintWriter(inputFilePath);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		out.println(textSelection);
		out.flush();
		out.close();

		paramters.add(inputFilePath);

		String[] paramterArray = paramters
				.toArray(new String[paramters.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);
		System.out.println(ast);
		System.out.println();

		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);

		// myAst.accept(new VisitorPrintNames());

		myAst.accept(new VisitorASTOrganizer());

		System.out.println();

		// Incomplete statements
		if (refactoringType.getValue() == RefactoringType.REFACT_INCOMPLETESTMTS
				.getValue()) {
			IncompleteStmtCloneRefactor declAttrRefactor = new IncompleteStmtCloneRefactor();
			myAst.accept(declAttrRefactor);
			myAst.accept(new VisitorASTOrganizer());
			myAst.accept(new RemoveCloneIncompleteStmtRefactor());
		}

		// If statements..
		if (refactoringType.getValue() == RefactoringType.REFACT_IFSTMTS
				.getValue()) {
			myAst.accept(new IfStmtsCloneRefactor());
			myAst.accept(new VisitorASTOrganizer());
			myAst.accept(new RemoveCloneIfStmtRefactor());
			myAst.accept(new VisitorASTOrganizer());
			myAst.accept(new RemoveCloneIncompleteStmtRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		// While statements...
		if (refactoringType.getValue() == RefactoringType.REFACT_WHILESTMTS
				.getValue()) {
			myAst.accept(new WhileStmtsCloneRefactor());
			myAst.accept(new VisitorASTOrganizer());
			myAst.accept(new RemoveCloneWhileStmtRefactor());
			myAst.accept(new VisitorASTOrganizer());
			myAst.accept(new RemoveCloneIncompleteStmtRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		// Array elements..
		if (refactoringType.getValue() == RefactoringType.REFACT_ARRAYELMTS
				.getValue()) {
			myAst.accept(new ArrayRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		// Enumerator elements..
		if (refactoringType.getValue() == RefactoringType.REFACT_ENUMELMTS
				.getValue()) {
			myAst.accept(new EnumRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		// Switch Statements
		if (refactoringType.getValue() == RefactoringType.REFACT_SWITCHSTMTS
				.getValue()) {
			myAst.accept(new SwitchStmtsRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		// Function Definition
		if (refactoringType.getValue() == RefactoringType.REFACT_FUNCDEFS
				.getValue()) {
			myAst.accept(new FunctionDefinitionRefactor());
			myAst.accept(new VisitorASTOrganizer());
		}

		myAst.accept(new VisitorPrinter(true));

		try {
			new CodeOrganizer().organize();
		} catch (IOException e) {
			e.printStackTrace();
		}

		// TODO uncrustify exite outro opção para ele?
		try {
			Runtime.getRuntime().exec(
					"/usr/bin/uncrustify -o " + outputFilePath
							+ " -c default.cfg -f " + outputFilePath);
		} catch (IOException e) {
			e.printStackTrace();
		}

		String outputFile = "";

		try {
			outputFile = this.readFile(outputFilePath);
		} catch (IOException e) {
			e.printStackTrace();
		}
		return outputFile;
	}

	public String readFile(String fileName) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader(fileName));
		try {
			StringBuilder sb = new StringBuilder();
			String line = br.readLine();

			while (line != null) {
				sb.append(line);
				sb.append("\n");
				line = br.readLine();
			}
			return sb.toString();
		} finally {
			br.close();
		}
	}

}
