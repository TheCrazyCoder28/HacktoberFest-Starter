#include<stdio.h>
#include "essentials.h"

/*
    Divide and Conquer
    Recursive and Stable
    Not In-place  

*/

// TC nlogn SC (n)
//stpes = logn

void merge(int arr[],int start,int mid,int end) {
    
    int i,j,k;
    int nL = (mid-start)+1;
    int nR = (end-mid);

    //Temporary arrays
    int left[nL],right[nR];
    /* Copy data to temp arrays left[] and right[] */
    for(i=0;i<nL;i++){
        left[i] = arr[start+i];
    }
    for(j=0;j<nR;j++){
        right[j] = arr[mid+j+1];
    }

    i = 0;
    j = 0;
    k = start;

    //merge sorted lists
    while (i<nL && j<nR) {
        if(left[i]<right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++; 
        }
        k++;
    }
    
    //remaining elements
    while (i < nL) { 
        arr[k++] = left[i++]; 
    } 
    while (j < nR) { 
        arr[k++] = right[j++];
    } 


}


void mergesort(int arr[],int start,int end){
    if(start<end){
        int mid =   start+(end-start)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int array[] = {6,5,3,7,1,2,4,8,9};
    int len = sizeof(array)/sizeof(array[0]);
    printf("Array before sorting ");
    printArray(array,len);
    mergesort(array,0,len-1);
    printf("Array after sorting ");
    printArray(array,len);
    return 0;
}