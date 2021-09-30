#include <stdio.h>
#include <string.h>
main()
{
	char str[]="jakkula",sort[100],m;
	int i,j;
	int n = strlen(str)-1;
	for (i=0;i<=n;i++)
	{
	    for (j=0;j<n;j++)
		{
	    if ((int)str[j]>(int)str[j+1])
	    {
			m = str[j];
	     	str[j]=str[j+1];
	     	str[j+1]=m;
	    }
		}  
	}
    puts(str);
	
}
