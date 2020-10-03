#include <stdio.h>
main()
{   int n=5;
	int arr[n],i,j,a,pos;
	printf("enter elements of array: ");
	for (i=0;i<n;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	printf("enter in which positoin you want to delete element :");
	scanf("%d",&pos);
	for (j=pos;j<n;j++){
		arr[j]=arr[j+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	    
	}
	
}
