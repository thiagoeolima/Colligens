package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import core.refactorings.IncompleteStmtCloneRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;
import tree.Node;
import tree.visitor.VisitorASTOrganizer;

public class DeclAttrRefactorTester2 extends TestCase{

	@Test
	public void test() throws IOException{
		String input = 	"int test ( ) { \n"
					  + "    #ifdef A \n "
					  + "        int x = \n "
					  + "    #else \n "
					  + "        float y = \n "
					  + "    #endif \n "
					  + "        call ( w , e ) ; \n "
					  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
					   + "    #if defined ( A ) \n "
					   + "        int x = call ( w , e ) ; \n "
					   + "    #endif \n "
					   + "    #if ! defined ( A ) \n "
					   + "        float y = call ( w , e ) ; \n "
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
