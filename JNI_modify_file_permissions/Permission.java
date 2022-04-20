import java.util.Scanner;

class Permission{
	public native void modifyPermission(String path);
	
	static{
		System.loadLibrary("Permission");
	}

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		System.out.println("Enter the path : ");
		String path = in.nextLine();
		new Permission().modifyPermission(path);
	}
}