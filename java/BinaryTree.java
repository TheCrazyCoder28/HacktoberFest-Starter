import java.util.*;

class Node{
    int data;
    Node left,right;
    Node(int x){
        data= x;
        left=right=null;
    }
}

public class BinaryTree{
    Node head = null;
    public static void main (String [] args){
        Scanner take = new Scanner(System.in);
        System.out.print("Enter the number of element are there : ");
        
        int n = take.nextInt();
        System.out.print("Enter the head element : ");
        Node head = new Node( take.nextInt());

        while(n-- !=0){
           insert(take.nextInt());
        }
    }
    public static void insert(int x){
        Node curr = head;

        while(curr != null){
            if(x < curr.data){
                
            }
        }

        return curr;
    }
}