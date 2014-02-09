package util;

import de.fosd.typechef.featureexpr.FeatureExpr;

public class Type {

	private String source;
	private FeatureExpr presenceCondition;
	
	public String getSource() {
		return source;
	}
	
	public void setSource(String source) {
		this.source = source;
	}
	
	public FeatureExpr getPresenceCondition() {
		return presenceCondition;
	}
	
	public void setPresenceCondition(FeatureExpr presenceCondition) {
		this.presenceCondition = presenceCondition;
	}
	
	
	
}
