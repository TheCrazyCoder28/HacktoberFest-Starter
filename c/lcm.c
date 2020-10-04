#include <stdio.h>
main()
{
	int n1,n2,minmultiple;
	printf("enter number1 and number2 :");
	scanf("%d %d ",&n1,&n2);
	minmultiple= (n1>n2) ? n1:n2;
	while(1)
	{
		if (minmultiple%n1==0 && minmultiple%n2==0) 
		{
			printf("lcm is %d",minmultiple);
			break;
		}
		++minmultiple;
	}
	return 0;
}
