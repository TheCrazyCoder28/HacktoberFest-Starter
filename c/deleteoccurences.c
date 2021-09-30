#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void removeAll(char * str, const char toRemove)
{
    int i, j;
    int len = strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i] == toRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }
            len--;
            i--;
        }
    }
}
int main()
{
    char str[MAX_SIZE];
    char toRemove;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to remove from string: ");
    toRemove = getchar();
    removeAll(str, toRemove);
    printf("String after removing '%c': %s", toRemove, str);
    return 0;
}

