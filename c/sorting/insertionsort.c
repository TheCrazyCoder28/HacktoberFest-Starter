#include<stdio.h>
#include "essentials.h"

// TC Best case = O(n) Worst-case=O(n^2) AVG = O(n^2)
// In-place

void insert(int array[], int j)
{
    int key = array[j];
    int i = j-1;
    while(i>=0 && array[i]>key ){
        array[i+1] = array[i];
        i--;
    }
    array[i+1] = key;
}

void insertionsort(int* array,int len){
    int i,j,key;
    for(j=1; j<len; j++){
    	insert(array,j);
     }
}

int main(){
    int array[] = {10,7,6,3,2,1,8,9};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Array before sorting ");
    printArray(array,len);
    insertionsort(array,len);
    printf("Array after sorting ");
    printArray(array,len);
}
