#include <stdio.h>
int is_prime(int);
main()
{
	int a,res;
	printf("enter a number:");
	scanf("%d",&a);
	res = is_prime(a);
	printf("value is : %d",res);
}
int is_prime(int a)
{
	int i=0,flag=1;
	for (i=2;i<a;i++)
	{
		if (a%i==0)
		    flag=0;  
	}
	if (flag==1)
	    return 1;
	else
	    return 0;
}
