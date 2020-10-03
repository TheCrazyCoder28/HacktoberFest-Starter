#include <stdio.h>
main()
{   int n=5;
	int arr[n],i,j,a;
	printf("enter elements of array: - ");
	for (i=0;i<n;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	for (j=0;j<n;j++){
		arr[j]=arr[j+1];
	}
    for (i=0;i<n-1;i++){
    	printf("elements of array are arr[%d=%d]\n",i,arr[i]);
	}
}
