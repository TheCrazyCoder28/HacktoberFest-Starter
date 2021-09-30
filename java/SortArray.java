import java.util.Scanner;
public class SortArray {
 public static void main(String args[]) {
	 Scanner in = new Scanner(System.in);
	 int arr[]  = new int[10];
	 int i,j;
	 for(i=0;i<10;i++) {
		 System.out.print("Enter a number to store it in array");
		 arr[i] = in.nextInt();
	 }
	 System.out.print("Given array is :");
	 for(i=0;i<10;i++) {
		 System.out.print(" "+arr[i]);
	 }
	 System.out.print("\n");
	 for(i=0;i<10;i++) {
		 for(j=0;j<9;j++) {
			 if(arr[j]>arr[j+1]) {
				 int temp = arr[j];
				 arr[j] = arr[j+1];
				 arr[j+1] = temp;
			 }
		 }
	 }
	 System.out.print("Sorted array is :");
	 for(i=0;i<10;i++) {
		 System.out.print(" "+arr[i]);
	 }
	 in.close();
 }
}
