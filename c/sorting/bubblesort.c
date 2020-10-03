#include<stdio.h>
#include "essentials.h"

// In-Place algorithm

// TC O(n) O(n^2) O(n^2)


void bubblesort(int* array,int len){
    int i,j,isSwap;
    isSwap = 1;
    for(i = 0; i < len-1; i++){
        if(isSwap){
            isSwap = 0;
            for (j=0;j<len-i-1;j++){
                if(array[j]>array[j+1]){
                    swap(&array[j],&array[j+1]);
                    isSwap = 1;
                    printArray(array,len);
                }
            }
        }
    }    
}

int main(){
    int array[] = {112,124,766,5,3,7,1,2,4,8,9,6,5,3,7,1,2,4,8,9,909};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Array before sorting ");
    printArray(array,len);
    bubblesort(array,len);
    printf("Array after sorting ");
    printArray(array,len);
}
