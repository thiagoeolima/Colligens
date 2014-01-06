package tree;

import de.fosd.typechef.featureexpr.FeatureExpr;
import tree.visitor.Visitor;

public class Opt extends Node {

	private FeatureExpr conditional;
	private boolean complete;
	
	public FeatureExpr getConditional() {
		return conditional;
	}

	public void setConditional(FeatureExpr conditional) {
		this.conditional = conditional;
	}
	
	@Override
	public void accept(Visitor visitor) {
		visitor.run(this);
	}

	public boolean isComplete() {
		return complete;
	}

	public void setComplete(boolean complete) {
		this.complete = complete;
	}
	
}
