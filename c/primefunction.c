#include <stdio.h>
int prime(int low,int high);
main()
{
	   int low,high,res;
	   printf("enter first interval:\n");
	   scanf("%d",&low);
	   printf("enter second interval:\n");
	   scanf("%d",&high);
	   prime(low,high);  
}
int prime(int low,int high)
{
	int i,j,flag;
	for (i=low+1;i<high;i++)
	{
		flag=1;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
			    flag=0;
			    
			}
		}
	if (flag==1)
		printf("%d\n",i);
	}
	
}
