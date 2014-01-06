package test.junit;

import org.junit.runner.RunWith;
import org.junit.runners.Suite;
import org.junit.runners.Suite.SuiteClasses;

@RunWith(Suite.class)
@SuiteClasses({ DeclAttrRefactorTester1.class, 
				DeclAttrRefactorTester2.class, 
				DeclAttrRefactorTester3.class, 
				DeclAttrRefactorTester4.class,
				ReturnRefactorTester1.class,
				ReturnRefactorTester2.class,
				IfStmtRefactorTester1.class,
				IfStmtRefactorTester2.class,
				IfStmtRefactorTester3.class,
				IfStmtAlternativeRefactorTester.class,
				FuncCallRefactorTester1.class,
				WhileStmtRefactorTester1.class,
				WhileStmtRefactorTester2.class,
				WhileStmtRegactorTester3.class })
public class TestSuite {

}
