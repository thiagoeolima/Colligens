package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import tree.Node;
import tree.visitor.VisitorASTOrganizer;
import core.refactorings.IfStmtsCloneRefactor;
import core.refactorings.RemoveCloneIfStmtRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;

public class IfStmtRefactorTester2 extends TestCase{

	@Test
	public void test() throws IOException{
		String input =  "int test ( ) { \n"
				  + "    #ifdef A \n "
				  + "         if (  x != 10 ) {  \n "
				  + "             int z ;  \n"
				  + "         }  \n"
				  + "    #else \n "
				  + "         if (  x != 20 ) {  \n "
				  + "             int t ;  \n"
				  + "         }   \n"
				  + "    #endif \n "
				  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
				  + "    #if defined ( A ) \n "
				  + "         if ( x ! = 10 ) { int z ; }  \n "
				  + "    #endif \n "
				  + "    #if ! defined ( A ) \n "
				  + "        if ( x ! = 20 ) { int t ; }   \n "
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
		ast.accept(new IfStmtsCloneRefactor());
		ast.accept(new VisitorASTOrganizer());
		ast.accept(new RemoveCloneIfStmtRefactor());
		ast.accept(new VisitorASTOrganizer());
		ast.accept(new RemoveCloneIncompleteStmtRefactor());
	}
	
}
