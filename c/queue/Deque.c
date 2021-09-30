#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void insert();
void inserend();
int del();
void disply();
int peep();
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rare=NULL,*newnode;
int main(){
	int ch;
	while(ch!=5){
		printf("\n\t=======Output restricted Queue List Menu ==========\n");
			printf("1 Insert at begining\n");
			printf("2 Insert at ending ")
			printf("3 Deletion\n");
			printf("4 Peek\n");
			printf("5 Display\n");
			printf("6 Exit\n");
			printf("\nEnter your chooice : ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					insert();
					break;
				case 2:
					inserend();
					break;
				case 3:
					del();
					break;
				case 4:
					display();
					break;
				case 5:
					peep();
					break;
				case 6:
					exit(0);
					break;
			}
		}
}
void insert(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	if(front==NULL && rare==NULL){
			front = newnode;
			rare = newnode;
	}
	else{
	newnode->next = front;
	front = newnode;
	}
}
void insertend(){
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	if(front==NULL && rare==NULL){
			front = newnode;
			rare = newnode;
	}
	else{
		rare->next = newnode;
		rare = newnode;
	}
}
