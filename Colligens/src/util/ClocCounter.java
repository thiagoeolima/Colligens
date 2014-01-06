package util;

import java.io.BufferedReader;
import java.io.File;
import java.io.InputStreamReader;

public class ClocCounter {

	public static void main(String[] args) {
		new ClocCounter().countLocFiles(new File("/home/flavio/Workspace/Colligens/annotations/functions/flex"));
	}
	
	public void countLocFiles (File path){
		File[] files = path.listFiles();
		for (File f : files){
			if (f.isDirectory()){
				this.countLocFiles(f);
			} else {
				String fileName = f.getName();
				if (fileName.startsWith("input")){
					File refactoredFile = new File(f.getAbsolutePath().replace("input", "output"));
					
					int locOriginal = this.countLOC(f.getAbsolutePath());
					int locRefactored = this.countLOC(refactoredFile.getAbsolutePath());
					
					System.out.println("FILE: " + f.getAbsolutePath());
					//System.out.println("LOC: " + (locRefactored - locOriginal));
					System.out.println((locRefactored - locOriginal));
					
				}
			}
		}
	}
	
	public int countLOC (String path) {
	    int loc = 0;
	    String result = "";
	    
		try {
	      String line;
	      Process p = Runtime.getRuntime().exec("cloc " + path);
	      BufferedReader bri = new BufferedReader
	        (new InputStreamReader(p.getInputStream()));
	      BufferedReader bre = new BufferedReader
	        (new InputStreamReader(p.getErrorStream()));
	      while ((line = bri.readLine()) != null) {
	    	  if (line.trim().startsWith("C")){
	    		  result += line + "\n";
	    	  }
	      }
	      bri.close();
	      while ((line = bre.readLine()) != null) {
	    	  if (line.trim().startsWith("C")){
	    		  result += line + "\n";
	    	  }
	      }
	      bre.close();
	      p.waitFor();
	    }
	    catch (Exception err) {
	      err.printStackTrace();
	    }
	    
		result = result.replace("  ", " ").replace("  ", " ").replace("  ", " ").replace("  ", " ").replace("  ", " ").replace("  ", " ");
	    String[] aux = result.split(" ");
	    
	    loc = new Integer( (aux[aux.length-1].trim()) );
	    
	    return loc;
	}
	
}
