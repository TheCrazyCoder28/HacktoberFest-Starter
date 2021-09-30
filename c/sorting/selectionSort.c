#include<stdio.h>
#include "essentials.h"


// In-Place algorithm

// TC O(n^2)

void selectionsort(int* array,int len) {
    int i,j;
    int min;
    for(j=0;j<len;j++){
        min = j;
        for(i=j;i<len;i++){
            if(array[i]<=array[min]){
                min = i;
            }
        }
        swap(&array[min],&array[j]);
        printArray(array,len);
    }
}

int main(){
    int array[] = {6,5,3,7,1,2,4,8,9};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Array before sorting ");
    printArray(array,len);
    selectionsort(array,len);
    printf("\nArray after sorting ");
    printArray(array,len);
}
