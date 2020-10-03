#include <stdio.h>
main()
{
	int n,i,s=0;
	printf("enter number");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s = s+(i*i*i);
	}
	printf("sum of cubes is %d",s);
}
