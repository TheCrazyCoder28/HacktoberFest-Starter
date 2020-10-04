#include <stdio.h>
#include <math.h>
float expo(int x,int y);
main()
{
	int  x,y;
	float res;
	printf("enter x value:\n");
	scanf("%d",&x);
	printf("enter y vlaue:\n");
	scanf("%d",&y);
	res = expo(x,y);
	printf("%dth power of %d is %.2f ",y,x,res);
}
float expo(int x, int y)
{
	float ans,neg;
     
     if (y<0){
     	neg = pow(x,(-y));
     	ans = 1/neg;
    }
    else {
    	ans = pow(x,y);
	}
	return ans;
}

