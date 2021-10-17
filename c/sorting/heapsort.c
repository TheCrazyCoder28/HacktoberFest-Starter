#include<stdio.h>
#include "essentials.h"

void heapify(int arr[],int n,int i)
{
    int parent=i,rchild=2*i+2,lchild=2*i+1;
    
    if(lchild<n && arr[lchild]>arr[parent])
     parent=lchild;
    
    if(rchild<n && arr[rchild]>arr[parent])
     parent=rchild;
     
    if(parent!=i)
    {
        swap(&arr[i],&arr[parent]);
        heapify(arr,n,parent);
    }
}

void heapSort(int arr[],int n)
{
    int i;
    for(i=(n-1)/2;i>=0;i--)
     heapify(arr,n,i);
    
    for(i=0;i<n-1;i++)
    {
        swap(&arr[n-1-i],&arr[0]);
        heapify(arr,n-1-i,0);
    }
}


void main()
{
    int n,i;
    int arr[] = {4,9,2,1,3,8,6,7,5,0};
    n = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting ");
    printArray(arr,n);
    heapSort(arr,n);
    printf("Array after sorting ");
    printArray(arr,n);
}



