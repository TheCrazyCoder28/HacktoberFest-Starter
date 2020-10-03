#include <stdio.h>
main()
{   int n,i,j,a,secondlast,largest,secondlargest,m;
	printf("enter size of array");
    scanf("%d",&n);
	int arr[n];
	printf("enter elements of array");
	for (i=0;i<n;i++)
	{
     	scanf("%d",&a);
		arr[i]=a;
    }
    largest=0;
    for (j=1;j<n;j++){
    	if (arr[largest]<arr[j])
    	   largest=j;
	}
	secondlargest=0;
	for (i=0;i<n;i++){
		if (arr[secondlargest]<arr[i] && arr[i]<arr[largest])
		secondlargest=i;
		
	}
	secondlast  = n-2;
	m = arr[secondlargest];
	arr[secondlargest]=arr[secondlast];
	arr[secondlast]=m;
	for (i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	

   	
}
