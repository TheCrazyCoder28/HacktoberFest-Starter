#include <stdio.h>
main()
{
	int arr[5],even[5],odd[5],i,j=0,a,b;
	printf("enter elements of array:");
	for (i=0;i<5;i++){
		scanf("%d",&a);
		arr[i]=a;	
	}
	for (i=0;i<5;i++){
		if (arr[i]%2==0){
		   even[i]=arr[i];}
		else {
			odd[i]=arr[i];
		}
}
	for (i=0;i<3;i++)
		printf("%d\n",odd[i]);

}
