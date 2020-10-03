#include <stdio.h>
main()
{
	int mat[2][3],i,j,a,b;
	printf("enter the values of matrix:-\n");
	for (i=0;i<2;i++){
		for (j=0;j<3;j++)
		    scanf("%d",&mat[i][j]);
	}
	printf("matrix is:- \n");
	for (i=0;i<2;i++){
		     printf("\n");
		for (j=0;j<3;j++)
		     printf("%d",mat[i][j]);
	}
}
