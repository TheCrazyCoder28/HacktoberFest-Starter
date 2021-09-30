#include <stdio.h>
main()
{
	int n;
	int sum=0;
	printf("Enter number of elements ");
	scanf("%d",&n);
	int arr[n],i,a,j,k;
	printf("enter %d integers : ",n);
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		}
	printf("Sum is %d",sum);
	return 0;
}
