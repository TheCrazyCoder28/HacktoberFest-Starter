#include <stdio.h>
main()
{
	int multi[3][3][3],i,j,k;
	printf("enter the elements of three dimensional array:\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			for (k=0;k<2;k++)
			    scanf("%d",&multi[i][j][k]);
		}
	}
	printf("three dimensional matrix is :");
	for (i=0;i<2;i++){
		printf("\n \n");
		for (j=0;j<2;j++){
			printf("\n");
			for (k=0;k<2;k++)
			    printf("\t %d",multi[i][j][k]);
		}
	}
}
