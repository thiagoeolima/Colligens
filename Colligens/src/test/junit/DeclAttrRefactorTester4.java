package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import tree.Node;
import tree.visitor.VisitorASTOrganizer;
import core.refactorings.IncompleteStmtCloneRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;

public class DeclAttrRefactorTester4 extends TestCase{

	@Test
	public void test() throws IOException{
		String input = 	"int test ( ) { \n"
					  + "    float \n"
					  + "    #ifdef A \n "
					  + "         x = 2 + \n "
					  + "    #else \n "
					  + "        x = 3 + \n "
					  + "    #endif \n "
					  + "       10 ; \n "
					  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
				       + "    float x ; \n"
					   + "    #if defined ( A ) \n "
					   + "        x = ( 2 + 10 ) ; \n "
					   + "    #endif \n "
					   + "    #if ! defined ( A ) \n "
					   + "        x = ( 3 + 10 ) ; \n "
					   + "    #endif \n "
					   + "}";
		
		this.callTypeChef();
		
		String output = this.readFile("output.c");
		
		output = output.replace("(", " ( ").replace(")", " ) ").replace(";", " ; ").replace("!", " ! ");
		
		String[] resultArray = result.split("\\s+");
		String[] outputArray = output.split("\\s+");
		
		boolean equals = true;
		
		for (int i = 0; i < resultArray.length-1; i++){
			if (!resultArray[i].equals(outputArray[i])){
				equals = false;
				break;
			}
		}
		
		assertEquals(equals, true);
		new File("input-temp.c").delete();
		
	}

	@Override
	public void addVisitors(Node ast) {
		ast.accept(new IncompleteStmtCloneRefactor());
		ast.accept(new VisitorASTOrganizer());
		ast.accept(new RemoveCloneIncompleteStmtRefactor());
	}
	
}
