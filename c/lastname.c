#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,count=0;
    char name[40];
    printf("Enter name:\n");
    fgets(name,sizeof(name),stdin);
    printf("Display name:\n");
    puts(name);
    printf("the last name is:");
    for (i=0;i<strlen(name)-1;i++)
    {
        if(name[i]==32)
            count=i;
    }
    for (i=count;i<strlen(name)-1;i++)
        printf("%c",name[i]);
}
