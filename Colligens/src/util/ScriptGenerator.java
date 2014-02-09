package util;

import java.io.File;

public class ScriptGenerator {

	public static final String PROJECT = "lynx-2.8.7";
	public static final String STUBS = "lynx.h";
	
	public static void main(String[] args) {
		new ScriptGenerator().createCmd(new File("candidates/release/" + ScriptGenerator.PROJECT));
	}
	
	public void createCmd(File path){
		File[] files = path.listFiles();
		for (File file : files){
			if (file.isDirectory()){
				this.createCmd(file);
			} else {
				if (file.getName().endsWith(".c") || file.getName().endsWith(".h")){
					System.out.println("echo Analyzing file: " + file.getAbsolutePath() + "...");
					System.out.println("java -jar lib/TypeChef-0.3.5.jar --lexOutput=results.c --parse -h stubs/" + ScriptGenerator.STUBS + " " + file.getAbsolutePath());
				}
			}
		}
	}
	
}
