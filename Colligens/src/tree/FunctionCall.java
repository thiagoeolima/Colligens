package tree;

import tree.visitor.Visitor;

public class FunctionCall extends Node {

	@Override
	public void accept(Visitor visitor) {
		visitor.run(this);
	}

}
