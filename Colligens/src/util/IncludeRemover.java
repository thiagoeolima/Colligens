package util;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;

public class IncludeRemover {

	public static void main(String[] args) throws IOException {
		new IncludeRemover().removeIncludes(new File("candidates"));
	}

	public void removeIncludes(File path) throws IOException {
		File[] files = path.listFiles();
		for (File file : files) {
			if (file.isDirectory()) {
				this.removeIncludes(file);
			} else {
				if (file.getName().endsWith(".c") || file.getName().endsWith(".h")) {
					File temp = new File("temp.txt");
					FileWriter fw = new FileWriter(temp);
					BufferedWriter bw = new BufferedWriter(fw);
					
					FileInputStream fstream = new FileInputStream(file.getAbsoluteFile());
					DataInputStream in = new DataInputStream(fstream);
					BufferedReader br = new BufferedReader(new InputStreamReader(in));
					String strLine;
					while ((strLine = br.readLine()) != null) {
						strLine = strLine.trim();
						if(strLine.startsWith("#include") || strLine.startsWith("# include") || 
								strLine.startsWith("#  include") || strLine.startsWith("#   include")){
							bw.write("//" + strLine + "\n");
						} else if (strLine.startsWith("#pragma") || strLine.startsWith("# pragma") || 
								strLine.startsWith("#  pragma") || strLine.startsWith("#   pragma")) {
							bw.write("//" + strLine + "\n");
						} else if (strLine.startsWith("#error") || strLine.startsWith("# error") || 
								strLine.startsWith("#  error") || strLine.startsWith("#   error")) {
							bw.write("//" + strLine + "\n");
						} else {
							bw.write(strLine + "\n");
						}
					}
					br.close();
					fstream.close();
					bw.close();
					
					
					temp.renameTo(file);
				}
			}
		}
	}

}
