#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<ctype.h>
#define max 50
char stack[max];
int top = -1;

void push(char temp){
	stack[++top]=temp;
}
char pop(){
	return stack[top--];
}

int main(){
	
	char infixx[100],ch;
	int i=0,flag=0;
	printf("Enter the infixx notation : ");
	scanf("%s",infixx);
	
	for(i=0;infixx[i]!='\0';i++){
		if(infixx[i]=='('||infixx[i]=='{'||infixx[i]=='['){
			ch = infixx[i];
			push(ch);
		}
		else if(infixx[i]==')' && stack[top]!='('){
			printf("Given expresssion %s is not a valid expression",infixx);
			exit(0);
		}
		else if(infixx[i]=='}' && stack[top]!='{'){
			printf("Given expresssion %s is not a valid expression",infixx);
			exit(0);
		}
		else if(infixx[i]==']' && stack[top]!='['){
			printf("Given expresssion %s is not a valid expression",infixx);
			exit(0);
		}
		else if(infixx[i]==')'||infixx[i]=='}'||infixx[i]==']'){
			pop();
		}
	}
	if(flag==0 && top!=-1)
		printf("Given expression %s is not a valid expression.",infixx);
	else if (flag==1)
		printf("Given expression %s is not a valid expression.",infixx);
	else{
		printf("Given expression %s is a valid expression.",infixx);
	}
}
