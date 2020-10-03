#include <stdio.h>
main()
{
	char str[100],i=0,length,j=0;
	printf("enter string\n");
	gets(str);
	while (str[i]!=0)
	     i++;
	length=i;
	for (i=0;i<length;i++){
		for (j=0;j<length;j++)
		     if (str[i]==str[j]);
		         printf("%c",str[i]);
	     
	
	
	
	}
	
}
