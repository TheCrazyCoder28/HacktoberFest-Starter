package com.abhishek;

public class NewtonRaphsonMethod {
    public static void main(String[] args) {
        System.out.println("Root: " + squrt(36));
    }
    static double squrt(int n){
        double x = n;
        double root;
        while(true){
//            here root is out actual root that we require and x is our own number than applying the formulae.
//
            root = 0.5 * ( x + (n/x));
//            breaking the loop if the error is below 1
            if(root-x < 1){
                break;
            }
//            if the loop doesn't break we will initialize x which is our assumed number with the root value that we got.
            x = root;
        }
        return  root;
    }

}
