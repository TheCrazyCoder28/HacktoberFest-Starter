#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],rev[100];
    int i, length,flag=0;
    printf("enter the string:\n");
	gets(str);
    length=strlen(str)-1;
	for (i=length;i>=0;i--){
		rev[length-i]=str[i];
	}
	for (i=0;i<=length;i++){
		if (str[i]==rev[i]){
			flag=1;
		}
	}
	if (flag==1){
		printf("it is palindrome");
	}
	else {
		printf("not palindrome");
}
	
}
