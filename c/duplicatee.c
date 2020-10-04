#include <stdio.h>
main()
{    
    int n=5;
	int arr[n],i,j,k,a,duplicate,flag=0;
	printf("enter the elements of array:");
	for (i=0;i<n;i++){
		scanf("%d",&a);
		arr[i]=a;
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j] && (i!=j))
			{
				flag=1;
				printf("duplicate elment %d is found at %d and %d,\n",arr[i],i,j);
				for (k=j;k<n;k++){
					arr[k]=arr[k+1];
				}
				n--;
				for (i=0;i<n;i++)
				{
					printf("arr[%d]=%d\n",i,arr[i]);
				}
            }
        }
    }
}
