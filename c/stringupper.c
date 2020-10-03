#include <stdio.h>
main()
{
	char str1[100];
	int i=0;
	printf("enter string:\n");
	gets(str1);
	while (str1[i]!='\0'){
		  if (str1[i]>='a' && str1[i]<='z')
	         str1[i]=str1[i]-32;
	      else 
	         str1[i]=str1[i]+32;
	i++;
		}
	for (i=0;i<5;i++){
	printf(" %c",str1[i]);
}
}
