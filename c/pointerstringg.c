#include <stdio.h>
#include <string.h>
char* string(char *word);
main()
{
	char word[100];
	printf("enter string : ");
	gets(word);
	printf("updated string is %s",string(word));	
}
char* string(char *word)
{
	char x;
	printf("enter a character : ");
	scanf("%c",&x);
	int i,j,n=strlen(word);
    for (i=0;i<n;i++)
    {
           if (word[i]==x) {
           	for (j = i;j<n;j++){
           	    word[j]= word[j+1];
           	}
           	n--;
			i--;		   
  		}
  	}
  return word;

}


