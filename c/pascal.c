#include <stdio.h>
main()
{
	int i,j=0,arr[7][7];
	arr[0][0]=arr[1][0]=arr[1][1]=1;
	for (i=2;i<7;i++)
	{   arr[i][0]=1;
		for(j=1;j<i;j++)
		
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		    arr[i][j]=1;
	}
	for (i=0;i<7;i++){
		printf("\n");
	   	for (j=0;j<=i;j++)
	   	    printf("\t%d",arr[i][j]);
    } 
	
}
