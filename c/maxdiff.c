#include <stdio.h>
main()
{
	int n;
	printf("enter range of array");
	scanf("%d",&n);
	int arr[n],i,j,a,diff=0,maxdiff=0,firstelement,secondelement;
	printf("enter elements of array:");
	for (i=0;i<n;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	maxdiff = arr[0]-arr[1];
	for (i=1;i<n;i++){
		for (j=2;j<n;j++)
		     if (maxdiff<(arr[i]-arr[j]))
		         maxdiff=(arr[i]-arr[j]);	         
			     
	}
	printf("differance is%d\n",maxdiff);
	for (i=0;i<n;i++){
		for (j=1;j<n;j++)
		if ((arr[i]-arr[j])==maxdiff)
			printf("%d and %d",arr[i],arr[j]);
		
}
}
