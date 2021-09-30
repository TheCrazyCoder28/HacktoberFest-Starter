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
int precedence(char temp){
	switch (temp){
		case '(':
			return 1;
			break;
		case '+':
		case '-':
			return 2;
			break;
		case '%':
		case '/':
		case '*':
			return 3;
			break;
		case '^':
			return 4;
			break;
	}
}
int main(){	
	char inf[100],postfix[100];
	char ch;
	int i=0,j=0;
	printf("Enter the infixx notation : ");
	scanf("%s",inf);
	for(i=0;inf[i]!='\0';i++){
			ch=inf[i];
			if(isalnum(ch)){
				postfix[j++] = ch;
			}
			else if(ch =='(' ){
				push(ch);
			}
			else if(ch==')'){
				while(stack[top]!='('){
					postfix[j++]=pop();
				}
				top--;
			}
			else{
				if(top==-1 || precedence(ch)>precedence(stack[top])){
					push(ch);
				}
				else{
					while(top!=-1 && precedence(ch)<precedence(stack[top])){
						postfix[j++]=pop();
					}
					push(ch);
				}
			}		
	}
	while(top!=-1){
		postfix[j++]=pop();
	}
	postfix[j]='\0';
	printf("%s",postfix);
}
