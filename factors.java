package com.abhishek;

public class factors {
    public static void main(String[] args){
        factor2(20);
    }


//    O(n)
    static void factor(int n){
        for(int i=1; i<=n;i++){
            if(n%i == 0){
                System.out.println(i);
            }
        }
    }

//    O(sqrt(n))
    static void factor2(int n){
        for(int i=1; i<=Math.sqrt(n);i++){
            if(n%i == 0) {
                if (i == n / i) {
                    System.out.println(i + "");
                } else {
                    System.out.print(i + " " + n / i + " ");
                }
            }
        }
    }





}
