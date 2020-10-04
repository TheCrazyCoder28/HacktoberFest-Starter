#include <stdio.h>
main()
{
	int n,c =0 ;
	printf("enter a number:-");
	scanf("%d",&n);
    while (n>0)
    {
    	n =n/10;
		c = c+1; 
	}
	printf("number of digits are : %d",c);
}
