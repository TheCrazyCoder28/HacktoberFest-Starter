import java.util.Random; 
public class bubblesort {  
    static void BubbleSort(int[] arr) {  
        int n = arr.length;  
        int temp = 0;  
         for(int i=0; i < n; i++){  
            for(int j=1; j < (n-i); j++){  
                    if(arr[j-1] > arr[j]){  
                            //swap elements  
                            temp = arr[j-1];  
                            arr[j-1] = arr[j];  
                            arr[j] = temp;  
                    }     
            }  
        }  
    }  
    public static void main(String[] args) {  
        Random rand = new Random(); 
        int arr[] = new int[10]; 
        int max = 0;
        for(int i = 0; i < 10; i++)  {
            arr[i] = rand.nextInt(100)+1; 
            if(arr[i]>max){
                max = arr[i];
            }
        }
        System.out.println("Maximum of 10 numbers is "+max);  
        System.out.println("Array Before Bubble Sort");  
        for(int i=0; i < arr.length; i++){  
                System.out.print(arr[i] + " ");  
        }  
        System.out.println();  
            
        BubbleSort(arr);//sorting array elements using bubble sort  
            
        System.out.println("Array After Bubble Sort");  
        for(int i=0; i < arr.length; i++){  
                System.out.print(arr[i] + " ");  
        }  

    }  
}  


