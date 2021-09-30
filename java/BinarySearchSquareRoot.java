package com.abhishek;

public class BinarySearchSquareRoot {

    public static void main(String[] args) {
        int n = 36;
        int out =squrt(n);
        System.out.println("Value: " + out);

    }
    static int squrt(int n){
        int s= 0;
        int e = n;
        while(s <= e){
            int mid  = (s+e) /2;
            if(mid*mid == n){
                return mid;
            }
            if( mid*mid > n){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
        }
        return -1;
    }
}
