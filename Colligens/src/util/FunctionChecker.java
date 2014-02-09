package util;

import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;
import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import core.ASTGenerator;
import core.counter.FunctionDirectivesVisitor;
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

public class FunctionChecker {

	private int filesIgnored = 0;
	public static XlsWriter writer;
	public static int row = 1;

	public FunctionChecker() {
		FunctionChecker.row = 1;

		FunctionChecker.writer = new XlsWriter("func-with-directives.xls",
				"functions", 0);
		FunctionChecker.writer.writeLabelToXLS(0, 0, "FILE");
		FunctionChecker.writer.writeLabelToXLS(1, 0, "ERROR LINE");
		FunctionChecker.writer.writeLabelToXLS(2, 0, "FUNC STARTING LINE");
		FunctionChecker.writer.writeLabelToXLS(3, 0, "CONDITIONAL");
	}

	public static void main(String[] args) throws IOException, BiffException {

		// File path = new
		// File("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/projects/");
		FunctionChecker functionChecker = new FunctionChecker();
		// functionChecker.checkFunction(path);

		functionChecker.getErrorLines();
		// System.out.println("Files Ignored: " +
		// functionChecker.getFilesIgnored());

		FunctionChecker.writer.writeToFile();

	}

	public void getErrorLines() throws BiffException, IOException {
		File inputWorkbook = new File("commits-all-errors.xls");
		Workbook w = Workbook.getWorkbook(inputWorkbook);
		Sheet sheet = w.getSheet(0);

		for (int j = 1; j < sheet.getRows(); j++) {

			// RELEASES
			/*String file = sheet.getCell(0, j).getContents();
			String line = sheet.getCell(1, j).getContents();

			if (file.startsWith("lynx")) {
				String completeFile = "/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/release/"
						+ file;
				String stubs = "/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/stubs/lynx.h";
				this.checkFunctionsInFile(completeFile, stubs,
						new Integer(line));
			}*/
			
			// COMMITS
			
			String project = sheet.getCell(0, j).getContents();
			String file = sheet.getCell(1, j).getContents();
			String line = sheet.getCell(2, j).getContents();
			String id = sheet.getCell(6, j).getContents();

			if (project.startsWith("sqlite")){
			
				String completeFile = "/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/" + project + "/" + id + "/" + file;
				String stubs = "/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/stubs/" + project + ".h";
				
				System.out.println(completeFile);
				System.out.println(stubs);
				System.out.println("\n");
				
				this.checkFunctionsInFile(completeFile, stubs, new Integer(line));
			
			}
		}

		w.close();

	}

	public void checkFunctionsInFile(String file, String stub, int line) {
		try {

			FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
			ArrayList<String> parameters = new ArrayList<String>();

			parameters.add("--lexNoStdout");
			parameters.add("-h");
			parameters.add(stub);

			parameters.add(file);

			String[] paramterArray = parameters.toArray(new String[parameters.size()]);

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

			FunctionDirectivesVisitor functions = new FunctionDirectivesVisitor();
			myAst.accept(functions);

			System.out.println("FILE: " + file);
			System.out.println("ERROR LINE: " + line);

			List<String> funcLines = functions.getFunctions();

			int write = 0;

			for (int i = 0; i < funcLines.size() - 1; i++) {
				String funcLine = funcLines.get(i).split("-")[0];

				int j = i + 1;
				String nextFuncLine = funcLines.get(j).split("-")[0];

				if (line >= new Integer(funcLine)
						&& line < new Integer(nextFuncLine)) {
					FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/",""));
					FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
					FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, new Integer(funcLines.get(i).split("-")[0]));
					FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, funcLines.get(i).split("-")[1]);
					FunctionChecker.row++;
					write++;
					break;
				}

			}

			if (funcLines.size() > 0 && write == 0) {
				int funcLine = new Integer(funcLines.get((funcLines.size() - 1)).split("-")[0]);
				if (funcLine < line) {
					FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/",""));
					FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
					FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, funcLine);
					FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, funcLines.get((funcLines.size() - 1)).split("-")[1]);
					FunctionChecker.row++;
					write++;
				}

				if (write == 0) {
					FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/",""));
					FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
					FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, new Integer(0));
					FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, "?");
					FunctionChecker.row++;
				}
			}
			
			if (write == 0){
				FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/",""));
				FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
				FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, new Integer(0));
				FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, "?");
				FunctionChecker.row++;
			}

		} catch (OptionException e) {
			FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace( "/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/", ""));
			FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
			FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, new Integer(0));
			FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, "OptionException");
			FunctionChecker.row++;
		} catch (NullPointerException e) {
			FunctionChecker.writer.writeLabelToXLS(0, FunctionChecker.row, file.replace("/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/candidates/commit/",""));
			FunctionChecker.writer.writeNumberToXLS(1, FunctionChecker.row, line);
			FunctionChecker.writer.writeNumberToXLS(2, FunctionChecker.row, new Integer(0));
			FunctionChecker.writer.writeLabelToXLS(3, FunctionChecker.row, "NullPointerException");
			FunctionChecker.row++;
		}

	}

	public void checkFunction(File path) throws IOException {
		File[] files = path.listFiles();
		for (File file : files) {
			if (file.isDirectory()) {
				this.checkFunction(file);
			} else {
				if (file.getName().endsWith(".c")
						|| file.getName().endsWith(".h")) {
					String projectName = file
							.getAbsolutePath()
							.replace(
									"/Users/Flavio/Desktop/Workspace/PhD/Semantic/TypeChef/projects/",
									"");
					String projectPath = projectName.split("/")[0];
					projectName = projectPath.split("-")[0];

					// System.out.println("echo Analyzing file: " +
					// file.getAbsolutePath() + "...");
					// System.out.println("java -jar lib/TypeChef-0.3.5.jar --lexOutput=results.c --parse -h stubs/"
					// + projectName + ".h " + file.getAbsolutePath());
					this.checkFile(file.getAbsolutePath(), "stubs/"
							+ projectName + ".h");
				}
			}
		}
	}

	public void checkFile(String file, String stub) {
		try {

			FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
			ArrayList<String> parameters = new ArrayList<String>();

			parameters.add("--lexNoStdout");
			parameters.add("-h");
			parameters.add(stub);

			parameters.add(file);

			String[] paramterArray = parameters.toArray(new String[parameters
					.size()]);

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

			FunctionDirectivesVisitor functions = new FunctionDirectivesVisitor();
			myAst.accept(functions);

			for (String temp : functions.getFunctions()) {
				System.out.println(temp);
			}

		} catch (OptionException e) {
			filesIgnored++;
		} catch (NullPointerException e) {
			filesIgnored++;
		}

	}

	public int getFilesIgnored() {
		return filesIgnored;
	}
}
