#include <stdio.h>
main()
{
	int arr[]={2,4,3,6,5,0,9,87},length=0,i=0;
	length= *(&arr +1)-arr;
	printf("%d",length);
}
