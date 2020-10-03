#include <stdio.h>
main()
{
	int a,b ;
	for (a=1;a<=5;a++)
	{
		printf("%c\n"," ");
		for (b=1;b<=a;b++)
		{
			printf("%c","*");
		}
	}
}
