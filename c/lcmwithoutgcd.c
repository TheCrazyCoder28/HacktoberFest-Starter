#include <stdio.h>
main()
{
	int a,b,max1;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	if (a>b)
    {
    	max1 = a;
	}
	else 
	{
		max1= b;
	}
	while(1)
	{
		if (max1%a==0 && max1%b==0)
		{
			printf("lcm is %d",max1);
			break;
		}
	max1=max1+1;
	}
}
