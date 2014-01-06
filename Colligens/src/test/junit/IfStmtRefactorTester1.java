package test.junit;

import java.io.File;
import java.io.IOException;

import org.junit.Test;

import tree.Node;
import tree.visitor.VisitorASTOrganizer;
import core.refactorings.IfStmtsCloneRefactor;
import core.refactorings.RemoveCloneIfStmtRefactor;
import core.refactorings.RemoveCloneIncompleteStmtRefactor;

public class IfStmtRefactorTester1 extends TestCase{

	@Test
	public void test() throws IOException{
		String input = 	"int test ( ) { \n"
					  + "    if ( x != 0 \n"
					  + "    #ifdef A \n "
					  + "         && x != 10  \n "
					  + "    #else \n "
					  + "        && x != 20  \n "
					  + "    #endif \n "
					  + "       ) { }  \n "
					  + "}";
		
		this.writeToFile(input);
		
		String result =  "int test ( ) { \n"
				  + "         int test ;   \n"
				  + "    #if defined ( A ) \n "
				  + "         test = ( x ! = 0 && x ! = 10 ) ;  \n "
				  + "    #endif \n "
				  + "    #if ! defined ( A ) \n "
				  + "        test = ( x ! = 0 && x ! = 20 ) ;  \n "
				  + "    #endif \n "
				  + "    if ( ( test ) ) {  \n "
				  + "    } \n "
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
