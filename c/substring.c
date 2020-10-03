#include <stdio.h>
#include <string.h>
main()
{
	char str[100],sub[100];
	int i,j,length,found;
	printf("enter sentence:-\n ");
	gets(str);
	printf("enter sub string to search:\n");
	gets(sub);
	length = strlen(sub)-1;
	for (i=0;i<length;i++)
	{
		for (j=0;j<strlen(str)-1;j++)
		if (sub[i]==str[j])
		{
			found=j;
			break;
			
		}
	}
	printf("%s found at %d",sub,found);
	
	
}
