#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str,ch[100];
	int i=0;
	str=getchar();
	while(str!='*'){
		ch[i]=str;
		str=getchar();
		i++;
	}
	for(i=0;i<strlen(ch);i++){
		if(isupper(ch[i])){
			printf("%c",ch[i]);
		}
	}
	return 0;
}
