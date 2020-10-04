#include <stdio.h>
main()
{
	int arr[5],i,j,small,a;
	printf("enter elements of array: - ");
	for (i=0;i<5;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	small=arr[0];
	for (j=0;j<5;j++){
		if (small>arr[j])
		{
			small=arr[j];
		}
	}
	printf("small is %d",small);
}
