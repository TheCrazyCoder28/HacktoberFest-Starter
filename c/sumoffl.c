#include <stdio.h>
main()
{
	int n,s=0,k=0,summ= 0;
	printf("enter a number:-");
	scanf("%d",&n);
	s = n%10;
	if (n<10)
    {
    	printf("you should enter more than 1 digit number!");
	}
	else 
	{
        while (n>10)
	    {
		n = n/10 ; 
	    }
	k = n ; 
	summ = s+k ; 
	printf("sum of first and last digits is %d",summ);
    }
	
	
	
}
