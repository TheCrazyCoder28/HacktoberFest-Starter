#include <stdio.h>
#include <string.h>
char* upper(char *word,char *rev);
main()
{
    char word[100],rev[100];
    printf("Enter a string: ");
    gets(word);
    printf("enter second string:");
    gets(rev);
    printf("\nThe concated equivalent is: %s\n",upper(word,rev));
    getch();
    return 0;
}

char* upper(char *word,char *rev)
{
    int i,len = strlen(word);
    for(i=0;i<strlen(rev);i++)
    {
    	word[len+i]=rev[i];
	}
	return word;
        
}
