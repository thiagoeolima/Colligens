package util;

import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;

public class DirectivesCounter {

	public static void main(String[] args) throws IOException {
		new DirectivesCounter().countDirectivesFiles(new File("/home/flavio/Workspace/Colligens/annotations/functions/flex"));
	}
	
	public void countDirectivesFiles (File path) throws IOException{
		File[] files = path.listFiles();
		for (File f : files){
			if (f.isDirectory()){
				this.countDirectivesFiles(f);
			} else {
				String fileName = f.getName();
				if (fileName.startsWith("input")){
					File refactoredFile = new File(f.getAbsolutePath().replace("input", "output"));
					
					int directivesOriginal = this.countDirectives(new File (f.getAbsolutePath()));
					int directivesRefactored = this.countDirectives(new File (refactoredFile.getAbsolutePath()));
					
					System.out.println("FILE: " + f.getAbsoluteFile());
					System.out.println((directivesRefactored - directivesOriginal));
					
				}
			}
		}
	}
	
	public int countDirectives (File file) throws IOException {
		int count = 0;
		
		FileInputStream fstream = new FileInputStream(file);
		
		DataInputStream in = new DataInputStream(fstream);
		BufferedReader br = new BufferedReader(new InputStreamReader(in));
		String strLine;
		
		while ((strLine = br.readLine()) != null)   {
			if (strLine.trim().startsWith("#if") || strLine.trim().startsWith("#else") || strLine.trim().startsWith("#elif")){
				count++;
			}
		}
		  
		br.close();
		in.close();
		
		return count;
	}
	
}
