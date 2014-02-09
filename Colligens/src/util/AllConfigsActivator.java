package util;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;

public class AllConfigsActivator {

	public static void main(String[] args) throws IOException {
		new AllConfigsActivator().activateConfigs(new File("test"));
	}
	
	public void activateConfigs(File path) throws IOException {
		File[] files = path.listFiles();
		for (File file : files) {
			if (file.isDirectory()) {
				this.activateConfigs(file);
			} else {
				if (file.getName().endsWith(".c") || file.getName().endsWith(".h")) {
					File temp = new File("temp.txt");
					FileWriter fw = new FileWriter(temp);
					BufferedWriter bw = new BufferedWriter(fw);
					
					bw.write("#define A\n");
					
					FileInputStream fstream = new FileInputStream(file.getAbsoluteFile());
					DataInputStream in = new DataInputStream(fstream);
					BufferedReader br = new BufferedReader(new InputStreamReader(in));
					String strLine;
					while ((strLine = br.readLine()) != null) {
						strLine = strLine.trim();
						if(strLine.startsWith("#if") || strLine.startsWith("# if") || 
								strLine.startsWith("#  if") || strLine.startsWith("#   if")){
							bw.write("#ifdef A\n");
						} else if (strLine.startsWith("#el") || strLine.startsWith("# el") || 
								strLine.startsWith("#  el") || strLine.startsWith("#   el")) {
							bw.write("#endif\n");
							bw.write("#ifdef A\n");
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
