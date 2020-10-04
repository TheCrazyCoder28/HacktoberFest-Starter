#include <string.h>
#include <stdio.h>
main()
{

char str1[80], str2[80];

int i;

printf("Enter the first string: ");

gets(str1);

printf("Enter the second string: ");

gets(str2);


printf("%s is %d chars long\n", str1, strlen(str1));

printf("%s is %d chars long\n", str2, strlen(str2));

i= strcmp(str1, str2);

if (!i) printf("The strings are equal.\n");

else if (i<0) printf ("%s is less than %s\n", str1,str2);

else printf("%s is greater than %s\n", str1, str2);

if (strlen(str1)+ strlen(str2) < 80) {

strcat(str1, str2);

printf("concatenation is %s\n", str1);

}
strcpy(str1, str1);

printf("copy is %s %s\n", str1, str2);

}
