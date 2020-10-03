#include <stdio.h>
main()
{
	int *p,*q,a[5]={2,5,3,6};
	p = &a[0];
	q = &a[1];
	*q++=*p++;
	printf("%d",&p);
	
	
}

