// package com.abhishek;

public class IsPrime {

    public static void main(String[] args) {
	// write your code here
        int n =20;
        for (int i=1; i<=n;i++){
            System.out.println(i + " : " + IsPrime(i));
        }
    }

    static boolean IsPrime(int n){
//        checking if the user provide 1 then return false
        if(n<=1){
            return false;
        }
//        starting loop from 2;
        int c = 2;
        while(c * c <=n){
            if(n % c ==0 ){
                return  false;
            }
            c++;
        }
        return true;
    }
}
