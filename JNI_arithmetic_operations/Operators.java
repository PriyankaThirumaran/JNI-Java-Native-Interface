import java.util.Scanner;

class Operations{
	public native int arithmeticOperations(String operation, int a, int b);
	
	static{
		System.loadLibrary("Operations");
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter any one operation that you want to perform -- add / sub / mul / div : ");
		String operation = in.nextLine();
		System.out.println("Enter the first number : ");
		int a = in.nextInt();
		System.out.println("Enter the second number : ");
		int b = in.nextInt();
		int result = new Operations().arithmeticOperations(operation, a, b);
		System.out.println("result : " + result);
	}
}