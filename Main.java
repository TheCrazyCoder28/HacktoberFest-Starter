package com.abhishek;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	// Matrix where row and column both are sorted.
        int[][] matrix = {
                {10,20,30,40},
                {15,25,35,45},
                {28,29,37,49},
                {33,34,38,50}
                        };

        System.out.println(Arrays.toString(search(matrix,29)));
    }
    static int[] search(int[][] matrix, int target){
//        these are the start index and end index
        int row = 0;
        int column = matrix.length -1 ;
//        if row value exceeds matrix length and until column index is <0 we will decrease it
//        here row is the 1st element in the matrix and column is the last element of that row in the matrix.
//        if the element not found in qst row then we will skip that row and now 1st element will be the 1st element of row 2 and end will the last element.
//        exit loop condition is when row value means if the matic has 4 row then until four iteration run and as we are decreasing the value of column
        while(row < matrix.length && column >=0)
        {
            if(matrix[row][column] == target){
                return new int[] {row,column};
            }
//            if nor found in that row skip it
            if(target > matrix[row][column]){
                row++;
            }
//            if nor found in that column skip it
            else{
                column--;
            }
        }
    return new int[] {-1,-1};
    }
}
