package test;

public class Test {

	public static void main(String[] args) {
		String result = "int test ( ) { \n #if defined ( A ) \n int x = call ( w , e ) ; \n #endif \n \n #if ! defined ( A ) \n int y = call ( w , e ) ; \n #endif \n }";
		
		
		String[] resultArray = result.split("\\s+");
		
		for (String x : resultArray){
			System.out.println(x);
		}
	}
	
}
