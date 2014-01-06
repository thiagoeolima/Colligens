package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import core.refactorings.IncompleteStmtCloneRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;
import tree.Node;
import tree.visitor.VisitorASTOrganizer;

public class DeclAttrRefactorTester1 extends test.junit.TestCase{

	@Test
	public void test() throws IOException{
		String input = 	"int test ( ) { \n"
					  + "    int var = \n"
					  + "    #ifdef A \n "
					  + "        call ( y , z ) ; \n "
					  + "    #else \n "
					  + "        call ( w , e ) ; \n "
					  + "    #endif \n "
					  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
					   + "    int var ; \n "
					   + "    #if defined ( A ) \n "
					   + "        var = call ( y , z ) ; \n "
					   + "    #endif \n "
					   + "    #if ! defined ( A ) \n "
					   + "        var = call ( w , e ) ; \n "
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
