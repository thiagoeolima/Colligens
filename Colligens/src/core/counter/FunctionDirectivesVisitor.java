package core.counter;

import java.util.ArrayList;
import java.util.List;

import tree.ArrayAccess;
import tree.AssignExpr;
import tree.AtomicAbstractDeclarator;
import tree.AtomicNamedDeclarator;
import tree.AutoSpecifier;
import tree.BreakStatement;
import tree.CaseStatement;
import tree.CharSpecifier;
import tree.Choice;
import tree.CompoundStatement;
import tree.ConditionalExpr;
import tree.ConstSpecifier;
import tree.Constant;
import tree.ContinueStatement;
import tree.DeclArrayAccess;
import tree.DeclIdentifierList;
import tree.DeclParameterDeclList;
import tree.Declaration;
import tree.DeclarationStatement;
import tree.DefaultStatement;
import tree.DefineDirective;
import tree.DoStatement;
import tree.DoubleSpecifier;
import tree.ElifStatement;
import tree.EnumSpecifier;
import tree.Enumerator;
import tree.ExprList;
import tree.ExprStatement;
import tree.ExternSpecifier;
import tree.FloatSpecifier;
import tree.ForStatement;
import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.IfStatement;
import tree.InitDeclaratorI;
import tree.Initializer;
import tree.IntSpecifier;
import tree.LcurlyInitializer;
import tree.LongSpecifier;
import tree.NAryExpr;
import tree.NArySubExpr;
import tree.NestedNamedDeclarator;
import tree.Node;
import tree.One;
import tree.Opt;
import tree.ParameterDeclarationAD;
import tree.ParameterDeclarationD;
import tree.Pointer;
import tree.PointerCreationExpr;
import tree.PointerDerefExpr;
import tree.PointerPostfixSuffix;
import tree.PostfixExpr;
import tree.RegisterSpecifier;
import tree.ReturnStatement;
import tree.ShortSpecifier;
import tree.SimplePostfixSuffix;
import tree.SizeOfExprT;
import tree.SizeOfExprU;
import tree.Some;
import tree.StaticSpecifier;
import tree.StringLit;
import tree.StructDeclaration;
import tree.StructDeclarator;
import tree.StructOrUnionSpecifier;
import tree.SwitchStatement;
import tree.TranslationUnit;
import tree.TypeDefTypeSpecifier;
import tree.TypeName;
import tree.TypedefSpecifier;
import tree.UnaryExpr;
import tree.UnaryOpExpr;
import tree.UnsignedSpecifier;
import tree.VarArgs;
import tree.VoidSpecifier;
import tree.VolatileSpecifier;
import tree.WhileStatement;
import tree.visitor.Visitor;

public class FunctionDirectivesVisitor implements Visitor{

	private List<String> functions;
	
	public FunctionDirectivesVisitor() {
		this.functions = new ArrayList<>();
	}
	
	public List<String> getFunctions() {
		return functions;
	}

	@Override
	public void run(Choice node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
	}

	@Override
	public void run(AtomicNamedDeclarator node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ElifStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(CompoundStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DeclIdentifierList node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(TranslationUnit node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ExprList node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DeclParameterDeclList node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ParameterDeclarationD node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(StructDeclaration node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(StructDeclarator node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(AtomicAbstractDeclarator node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Pointer node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ParameterDeclarationAD node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(FunctionDef node) {
		VisitorConditionalCheckerWithCompounds conditionalChecker = new VisitorConditionalCheckerWithCompounds();
		node.accept(conditionalChecker);
		
		String func = node.getPositionFrom().getLine() + "";
		int funcLine = new Integer(func);
		
		for (Node n : node.getChildren()){
			if (n instanceof CompoundStatement){
				if (n.getPositionFrom().getLine() < funcLine){
					func = n.getPositionFrom().getLine() + "";
				}
			}
		}
		
		func += "-";
		
		if (conditionalChecker.containConditional()){
			func += "yes";
		} else {
			func += "no";
		}
		
		this.functions.add(func);
	}

	@Override
	public void run(Opt node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Initializer node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(InitDeclaratorI node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(TypeName node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(One node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Some node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(SimplePostfixSuffix node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(PostfixExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(AssignExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(IfStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(WhileStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(SizeOfExprT node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(SizeOfExprU node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(NestedNamedDeclarator node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(FunctionCall node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ExprStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(TypeDefTypeSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DeclArrayAccess node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ForStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(NAryExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(NArySubExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DoStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(CaseStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(SwitchStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DefaultStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DeclarationStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Declaration node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Constant node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Id node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(VoidSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(IntSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DoubleSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(UnsignedSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(VolatileSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ConstSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ExternSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(TypedefSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(AutoSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(BreakStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(CharSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(VarArgs node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(PointerPostfixSuffix node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(PointerDerefExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(UnaryExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ContinueStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(RegisterSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(StaticSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(FloatSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ReturnStatement node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ShortSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(LongSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(StructOrUnionSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(PointerCreationExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(UnaryOpExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ArrayAccess node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(LcurlyInitializer node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(StringLit node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(ConditionalExpr node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(DefineDirective node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(EnumSpecifier node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}

	@Override
	public void run(Enumerator node) {
		for (Node child : node.getChildren()){
			child.accept(this);
		}
		
	}
	
}
