package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import tree.Node;
import tree.visitor.VisitorASTOrganizer;
import core.refactorings.IncompleteStmtCloneRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;

public class ReturnRefactorTester1 extends TestCase{

	@Test
	public void test() throws IOException{
		String input = 	"int test ( ) { \n"
					  + "    return 2 + \n"
					  + "    #ifdef A \n "
					  + "         call ( 1 )  \n "
					  + "    #else \n "
					  + "        call (2 )  \n "
					  + "    #endif \n "
					  + "       + 1 ; \n "
					  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
					   + "    #if defined ( A ) \n "
					   + "        return ( 2 + call ( 1 ) + 1 ) ; \n "
					   + "    #endif \n "
					   + "    #if ! defined ( A ) \n "
					   + "        return ( 2 + call ( 2 ) + 1 ) ; \n "
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
