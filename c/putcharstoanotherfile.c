#include <stdio.h>
#include<ctype.h>
int main()
{
	FILE *fp4,*fp5,*fp6;
	int a,n=0,s,i=0,j=0;
	char ch,str[30],low[30],up[30];
	fp4=fopen("f1.txt","r");
	fp5=fopen("myfile12.txt","w");
	fp6=fopen("myfile13.txt","w");
	while((a=getc(fp4))!=EOF)
	{
		str[n]=(char)a;
		if(str[n]>='a'&&str[n]<='z')
		{
			low[i]=str[n];
			i++;
		}
		if(str[n]>='A'&&str[n]<='Z')
		{
			up[j]=str[n];
			j++;
		}
	
		n++;
	}
	str[n]='\0';
	up[j]='\0';
	low[i]='\0';
	fputs(up,fp5);
	fputs(low,fp6);
}
