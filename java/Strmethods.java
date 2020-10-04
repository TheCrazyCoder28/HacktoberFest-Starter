import java.util.Scanner;
public class Strmethods {
	public static void main(String args[]) {
		Scanner in  = new Scanner(System.in);
		System.out.println("Enter the String");
		String str = in.nextLine();
		System.out.println("Enter the String 2");
		String str1 = in.nextLine();
		str = concat(str,str1);
		reverse(str);
		len(str);
		in.close();
	}
	public static String concat(String str,String str1) {
		str += str1;
		System.out.println("Concated string is "+str);
		str += '\0';
		return str;
	}
	public static void reverse(String str) {
		int i;
		String strrev = new String();
		strrev = "";
		for(i=str.length()-1;i>=0;i--) {
			strrev = strrev + str.charAt(i);
		}
		System.out.println("Reversed String");
		System.out.println(strrev);
	}
	public static void len(String str) {
		int i;
		for(i=0;str.charAt(i)!='\0';i++) {
		}
		System.out.println("length of given string is "+i);
	}
	
}