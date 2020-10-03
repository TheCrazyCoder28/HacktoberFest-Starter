#include <stdio.h>
int main()
{
	FILE *fp;
	int a,b,nl,nw,nc;
	char ch,buf;
	fp=fopen("f1.txt","r");
	
	while((a=getc(fp))!=EOF)
	{
		ch=(char)a;
		nc++;
		if(ch==' '||ch=='\t'||ch=='\n'||ch==','||ch=='.')
		{
			nw++;
		}
		if(ch=='\n')
		{
			nl++;
		}
	}
	printf("\nthe no chars are %d",nc);
	printf("\nthe no words are %d",nw);
	printf("\nthe no lines are %d",++nl);
}
