package test.junit;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.List;

import tree.Node;
import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import tree.visitor.VisitorPrinter;
import core.ASTGenerator;
import de.fosd.typechef.lexer.options.MyParserOptions;
import de.fosd.typechef.parser.c.AST;
import de.fosd.typechef.parser.c.CParser;
import de.fosd.typechef.parser.c.ParserMain;
import de.fosd.typechef.parser.c.ParserOptions;

public abstract class TestCase extends junit.framework.TestCase{

	public void writeToFile(String text) throws FileNotFoundException, UnsupportedEncodingException{
		PrintWriter writer = new PrintWriter("input-temp.c", "UTF-8");
		writer.println(text);
		writer.close();
	}
	
	public String readFile( String file ) throws IOException {
	    BufferedReader reader = new BufferedReader( new FileReader (file));
	    String line = null;
	    StringBuilder stringBuilder = new StringBuilder();
	    String ls = System.getProperty("line.separator");

	    while( ( line = reader.readLine() ) != null ) {
	        stringBuilder.append( line );
	        stringBuilder.append( ls );
	    }
	    reader.close();
	    return stringBuilder.toString();
	}
	
	public abstract void addVisitors(Node node);
	
	public void callTypeChef() throws IOException{
		ParserOptions myParserOptions = new MyParserOptions();
		ParserMain parser = new ParserMain(new CParser(null, false));
		
		List<String> paths = new ArrayList<>();
		paths.add("");
		
		AST ast = parser.parserMain("input-temp.c", paths, myParserOptions);
		
		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);
		
		myAst.accept(new VisitorASTOrganizer());
		System.out.println();
		
		this.addVisitors(myAst);
		
		myAst.accept(new VisitorASTOrganizer());
		myAst.accept(new VisitorPrinter(true));

	}
	
}
