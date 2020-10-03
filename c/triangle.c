#include <stdio.h>
#include <math.h>
int tri(int ,int,int);
main()
{
	int a,b,c,area,perimeter;
	printf("enter three sides of trinalge:");
	scanf("%d %d %d",&a,&b,&c);
	tri(a,b,c);
}
int tri(int a, int b, int c)
{
	int perimeter,s;
	float area;
    perimeter = a+b+c;
    printf("perimeter is %d",perimeter);
    s = ((a+b+c)/2.0);
    area = sqrt((s*(s-a)*(s-b)*(s-c)));
    printf("area is %f",area);
    
}
