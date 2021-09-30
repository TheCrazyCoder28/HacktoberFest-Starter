#include <stdio.h>
int time(int, int);
main()
{
	int days,hours,timeinminutes;
	printf("enter time :\n");
	scanf("%d-%d",&days,&hours);
	timeinminutes=time(days,hours);
	printf("timeinminutes is :%d",timeinminutes);
}
int time(int day,int hours)
{
	int conv;
	conv = day*24*60;
	return conv;
}
