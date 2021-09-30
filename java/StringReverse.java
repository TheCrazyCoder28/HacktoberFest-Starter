import java.util.Scanner;
public class StringReverse {
	public static void main(String args[]) {
		int i = 0;
		Scanner in  = new Scanner(System.in);
		System.out.println("Enter the String");
		String str = in.nextLine();
		System.out.println("Entered String");
		System.out.println(str);
		String strrev = new String();
		strrev = "";
		for(i=str.length()-1;i>=0;i--) {
			strrev = strrev + str.charAt(i);
		}
		System.out.println("Reversed String");
		System.out.println(strrev);
		in.close();
	}
}