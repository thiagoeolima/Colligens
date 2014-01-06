package test;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;

import core.RefactoringFrontend;
import core.RefactoringType;
import de.fosd.typechef.lexer.LexerException;
import de.fosd.typechef.lexer.options.OptionException;

public class RunColligensTool {

	public static void main(String[] args) throws IOException, LexerException,
			OptionException {

		RefactoringFrontend refactoringFrontend = new RefactoringFrontend();
		String textSelection = "int main() { \n" + "   myint x = \n"
				+ "#ifdef A \n" + "   2 \n" + "#else \n" + "   3 \n"
				+ "#endif \n" + "   ; \n" + "}";

		String stubs = "typedef int myint;";

		// Writing stubs to stubs.h file
		PrintWriter outStubs = null;
		String stubsFilePath = System.getProperty("java.io.tmpdir")
				+ System.getProperty("file.separator") + "stubs.h";

		try {
			outStubs = new PrintWriter(stubsFilePath);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		outStubs.println(stubs);
		outStubs.flush();
		outStubs.close();

		refactoringFrontend.refactorCode(textSelection, stubsFilePath,
				RefactoringType.REFACT_INCOMPLETESTMTS);

		/*
		 * ParserOptions myParserOptions = new MyParserOptions(); ParserMain
		 * parser = new ParserMain(new CParser(null, false));
		 * 
		 * List<String> paths = new ArrayList<>(); paths.add("");
		 * 
		 * //FASTER AST ast = parser.parserMain("input.c", paths,
		 * myParserOptions); System.out.println(ast); System.out.println();
		 * 
		 * 
		 * tree.Node myAst = new TranslationUnit(); new
		 * ASTGenerator().generate(ast, myAst);
		 * 
		 * //myAst.accept(new VisitorPrintNames());
		 * 
		 * myAst.accept(new VisitorASTOrganizer());
		 * 
		 * System.out.println();
		 */

		// Incomplete statements
		/*
		 * IncompleteStmtCloneRefactor declAttrRefactor = new
		 * IncompleteStmtCloneRefactor(); myAst.accept(declAttrRefactor);
		 * myAst.accept(new VisitorASTOrganizer()); myAst.accept(new
		 * RemoveCloneIncompleteStmtRefactor());
		 */

		// If statements..
		/*
		 * myAst.accept(new IfStmtsCloneRefactor()); myAst.accept(new
		 * VisitorASTOrganizer()); myAst.accept(new
		 * RemoveCloneIfStmtRefactor()); myAst.accept(new
		 * VisitorASTOrganizer()); myAst.accept(new
		 * RemoveCloneIncompleteStmtRefactor()); myAst.accept(new
		 * VisitorASTOrganizer());
		 */

		// While statements...
		/*
		 * myAst.accept(new WhileStmtsCloneRefactor()); myAst.accept(new
		 * VisitorASTOrganizer()); myAst.accept(new
		 * RemoveCloneWhileStmtRefactor()); myAst.accept(new
		 * VisitorASTOrganizer()); myAst.accept(new
		 * RemoveCloneIncompleteStmtRefactor()); myAst.accept(new
		 * VisitorASTOrganizer());
		 */

		// Array elements..
		// myAst.accept(new ArrayRefactor());
		// myAst.accept(new VisitorASTOrganizer());

		// Enumerator elements..
		// myAst.accept(new EnumRefactor());
		// myAst.accept(new VisitorASTOrganizer());

		// Switch Statements
		// myAst.accept(new SwitchStmtsRefactor());
		// myAst.accept(new VisitorASTOrganizer());

		// Function Definition
		// myAst.accept(new FunctionDefinitionRefactor());
		// myAst.accept(new VisitorASTOrganizer());

		// myAst.accept(new VisitorPrinter(true));

		// new CodeOrganizer().organize();

		// Runtime.getRuntime().exec("/usr/bin/uncrustify -o output.c -c default.cfg -f output.c");

	}

	/*
	 * public void findMethodNames(Product node){
	 * scala.collection.Iterator<Object> children = node.productIterator();
	 * 
	 * Object child = null; while (children.hasNext()){ child = children.next();
	 * if (child instanceof AtomicNamedDeclarator){ if (node instanceof
	 * FunctionDef){ System.out.println(child); } } if (child instanceof
	 * Product){ this.findMethodNames((Product)child); } } }
	 */
}
