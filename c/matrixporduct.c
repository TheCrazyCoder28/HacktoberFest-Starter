#include <stdio.h>
main()
{    int i,j,k;
	int mat1[2][3]={{1,2,3},{3,4,5}};
	int mat2[3][2]={{2,3},{4,6},{3,7}};
	int mat3[2][2];
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			mat3[i][j]=0;
			for (k=0;k<2;k++)
				mat3[i][j]=mat3[i][j]+ (mat1[i][k]*mat2[k][j]);
		}
		
}
printf("product matrix is \n");
for (i=0;i<2;i++){
	printf("\n");
	for (j=0;j<2;j++)
	    printf("\t %d",mat3[i][j]);
	    
}
}
