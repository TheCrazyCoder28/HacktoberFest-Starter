#include <stdio.h>
int main()
{
	int a=10,b=20,c,d,e;
	float f=4.523;
	c=(a<b);
	d=!a;
	e=a<<2;
	printf ("c value=%d\nd value=%d",c,d);
	printf ("float value=%0.2f:",f);
	printf ("doulbe size=%d",sizeof(double));
	printf ("%d",e);
	return 0;
}
