#include <stdio.h>
main()
{
	int mat[5][5],i,j,a=0,b;
	printf("enter the values of matrix:-\n");
	for (i=0;i<4;i++){
		for (j=0;j<4;j++)
		    scanf("%d",&mat[i][j]);
	}
	printf("matrix is:- \n");
	for (i=0;i<4;i++){
		     printf("\n");
		for (j=0;j<4;j++)
		     printf("%d",mat[i][j]);
	}

for (i=0;i<4;i++){
     for (j=0;j<4;j++){
          if (i>j)
          {
             a = a+mat[i][j];
           }
    }
}
printf("sum of diagonal elements is %d",a);

}

