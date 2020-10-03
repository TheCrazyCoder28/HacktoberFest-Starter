#include <stdio.h>
main()
{
	int n,i,m ;
	printf("enter number for which you want multiplication table:-");
	scanf("%d",&n);
	printf("table of %d is:- \n",n);
	for (i=1;i<=10;i++)
	{
		m = n*i ; 
		printf("\n");
		printf("%d * %d = %d",n,i,m);
	}
	
}
