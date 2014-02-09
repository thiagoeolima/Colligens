package util;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;

import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import core.ASTGenerator;
import core.counter.NumberOfFunctionsVisitor;
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

public class FunctionCounter {

	private int functionsWithDirectives = 0;
	private int functionsWithoutDirectives = 0;
	private int filesIgnored = 0;
	private int file = 0;
	
	public static void main(String[] args) throws OptionException, FileNotFoundException {
		int row = 1;
		
		//System.setOut(new PrintStream(new File("errors.txt")));
		//System.setErr(new PrintStream(new File("error-str.txt")));
		
		XlsWriter writer = new XlsWriter("temp.xls", "functions", 0);
		writer.writeLabelToXLS(0, 0, "PROJECT");
		writer.writeLabelToXLS(1, 0, "FUNCTIONS WITH DIRECTIVES");
		writer.writeLabelToXLS(2, 0, "FUNCTIONS WITHOUT DIRECTIVES");
		writer.writeLabelToXLS(3, 0, "FILES");
		writer.writeLabelToXLS(4, 0, "IGNORED");
		
		FunctionCounter counter = new FunctionCounter();
		File[] projects = new File("source/").listFiles();
		for (File project : projects){
			//System.out.println("Analyzing project: " + project.getName() + " - stubs file: " + "stubs/" + project.getName().split("-")[0] + ".h");
			System.out.println(project.getAbsolutePath());
			if (project.getName().startsWith("ghostscript")){
				System.err.print(project.getAbsoluteFile() + "\n");
				counter.setFunctionsWithDirectives(0);
				counter.setFunctionsWithoutDirectives(0);
				counter.setFilesIgnored(0);
				counter.setFile(0);
				
				counter.checkProject(project.getAbsoluteFile(), "stubs/" + project.getName().split("-")[0] + ".h");
				
				writer.writeLabelToXLS(0, row, project.getName());
				writer.writeNumberToXLS(1, row, counter.getFunctionsWithDirectives());
				writer.writeNumberToXLS(2, row, counter.getFunctionsWithoutDirectives());
				writer.writeNumberToXLS(3, row, counter.getFile());
				writer.writeNumberToXLS(4, row, counter.getFilesIgnored());
				
				row++;
			}
		}
		
		writer.writeToFile();
	}
	
	public void checkProject(File path, String stubs) throws OptionException{
		File[] files = path.listFiles();
		for (File file : files){
			if (file.isDirectory()){
				this.checkProject(file, stubs);
			} else {
				if (file.getName().endsWith(".c") || file.getName().endsWith(".h")){
					if (file.getAbsolutePath().contains("/toolbin/")){
					System.out.println(file.getAbsolutePath());
					System.out.println(stubs);
					this.file++;
					this.checkFile(file.getAbsolutePath(), stubs);
					}
				}
			}
		}
	}
	
	public void checkFile(String file, String stub)  {
		
		try {
		
			FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
			ArrayList<String> paramters = new ArrayList<String>();
	
			paramters.add("--lexNoStdout");
			paramters.add("-h");
			paramters.add(stub);
	
			paramters.add(file);
	
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
			
			NumberOfFunctionsVisitor functions = new NumberOfFunctionsVisitor();
			myAst.accept(functions);
			
			this.functionsWithDirectives += functions.getFunctionsWithDirectives();
			this.functionsWithoutDirectives += functions.getFunctionsWithoutDirectives();
		} catch (OptionException e){
			filesIgnored++;
		} catch (NullPointerException e) {
			filesIgnored++;
		}
		
	}

	public void setFunctionsWithDirectives(int functionsWithDirectives) {
		this.functionsWithDirectives = functionsWithDirectives;
	}

	public void setFunctionsWithoutDirectives(int functionsWithoutDirectives) {
		this.functionsWithoutDirectives = functionsWithoutDirectives;
	}

	public int getFunctionsWithDirectives() {
		return functionsWithDirectives;
	}

	public int getFunctionsWithoutDirectives() {
		return functionsWithoutDirectives;
	}

	public int getFilesIgnored() {
		return filesIgnored;
	}

	public void setFilesIgnored(int filesIgnored) {
		this.filesIgnored = filesIgnored;
	}

	public int getFile() {
		return file;
	}

	public void setFile(int file) {
		this.file = file;
	}
	
	
}
