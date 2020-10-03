#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	int len,i,j,k;
	printf("enter a string:");
	gets(str);
	len=strlen(str);
	for (i=len;i>=0;i--)
	{
		if (str[i]==' ' || i==0)
		{
			k=i;
			for (k=i;k<=len;k++)
			{
				printf("%c",str[k]);
			}
			len=i;
		    
		}
	}
}
