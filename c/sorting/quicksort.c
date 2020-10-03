#include<stdio.h>
#include "essentials.h"


/*
    Divide and Conquer
    Recursive and not-Stable
    In-place  

*/

// TC AVG & Best nlogn WorstCase n^2

int paratation(int* array,int start,int end) {
    int pivot = array[end]; 
    int i = start;
    for (int j = start; j < end; j++)  { 
        if (array[j] < pivot)  { 
            i++;
            swap(&array[i], &array[j]); 
        } 
    } 
    swap(&array[i + 1], &array[end]);   
    return i; 
}

void quicksort(int* array,int start,int end) {
    if(start<end){
        int pIndex = paratation(array,start,end);
        quicksort(array,start,pIndex-1);
        quicksort(array,pIndex+1,end);
    }
}

int main(){
    int array[] = {6,5,3,7,1,2,4,8,9};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Array before sorting ");
    printArray(array,len);
    quicksort(array,0,len);
    printf("\nArray after sorting ");
    printArray(array,len);
}