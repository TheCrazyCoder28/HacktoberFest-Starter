#include <stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	int a,n=0;
	char str[50],ch;
	fp1=fopen("m.txt","r");
	fp2=fopen("s.txt","w");
	while((a=getc(fp1))!=EOF)
	{
		ch=(char)a;
		str[n]=ch;
		n++;
	}
	str[n]='\0';
	printf("%s",str);
	fputs(str,fp2);
	fclose(fp1);
	fclose(fp2);
}
