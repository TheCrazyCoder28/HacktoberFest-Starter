#include <stdio.h>
main()
{
	int a,i,j,k,s=1;
	printf("enter number of rows");
	scanf("%d",&a);
	for (i=1;i<=a;i++){
		for (j=1;j<=a-i;j++){
			printf(" ");
		}
		    for (k=1;k<=2*i-1;k++){
			
			printf("*");
		    }
	    printf("\n");
    }
}	
