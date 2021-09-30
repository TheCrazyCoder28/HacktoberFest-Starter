#include <stdio.h>
#include <math.h>
main()
{
	int arr[3],i,sum=0,a;
	printf("enter elements of array: - ");
	for (i=0;i<3;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	for (i=0;i<3;i++){
	     sum = sum + pow(arr[i],2);
	 }
	 printf("sum is %d",sum);
}
