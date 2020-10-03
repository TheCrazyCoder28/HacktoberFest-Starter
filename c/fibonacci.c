#include <stdio.h>
main()
{
	int i=3,a=0,b=1,n,c;
	printf("enter range");
	scanf("%d",&n);
	printf("%d",a);
	printf("%d",b);
	for (i;i<=n;i++)
	{
		c=a+b;
		a = b;
		b = c;
		printf("%d",c);
    }
}
