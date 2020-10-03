#include <stdio.h>
#include <math.h>
float expo(int x,int y);
main()
{
	int  x,y;
	double res;
	printf("enter x value: ");
	scanf("%d",&x);
	printf("enter y vlaue: ");
	scanf("%d",&y);
	res = expo(x,y);
	printf("%dth power of %d is %lf ",y,x,res);
}
float expo(int x, int y)
{
	int i;
	double result=1;
     if(y<0){
	   for(i=0;i>y;i--){
		result*=x;
		}
		result=1/result;
    }
    else {
    	for(i=0;i<y;i++)
		{
		result*=x;
		}
	}
	return result;
}

