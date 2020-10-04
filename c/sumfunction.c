#include <stdio.h>
int swap(int a,int b);
main()
{
	int num1,num2;
    printf("enter the first number:\n");
    scanf("%d",&num1);
    printf("enter second number:\n");
    scanf("%d",&num2);
    swap(num1,num2);
}
int swap(int a,int b)
{
	int m;
	printf("a and b values before swapping is %d, %d\n",a,b);
	m = a;
	a = b;
	b= m;
	printf("a and b values after swapping are %d , %d\n",a,b);
}
