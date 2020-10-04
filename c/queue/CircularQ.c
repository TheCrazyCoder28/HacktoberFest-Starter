#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void display();
void insert();
int deleteQ();
int peep();
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL,*rare=NULL,*newnode;
int main(){
	int ch;
	while(ch!=5){
		printf("\n\t=======Circular Queue List Menu ==========\n");
			printf("1 Insert\n");
			printf("2 Deletion\n");
			printf("3 Peek\n");
			printf("4 Display\n");
			printf("5 Exit\n");
			printf("\nEnter your chooice : ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					insert();
					break;
				case 2:
					deleteQ();
					break;
				case 3:
					peep();
					break;
				case 4:
					display();
					break;
				case 5:
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
			rare->next = newnode;
			newnode->next = front;
			rare = newnode;
		}
}
void display(){
	struct node *temp=front;
	printf("\n==========Elements in the Queue==========\n");
	while(temp->next!=front){
		printf("\t %d",temp->data);
		temp = temp->next;
	}
}

int deleteQ(){
	rare->next = front->next;
	free(front);
	front = rare->next;
	}

int peep(){
	printf("\n%d is at front position\n",front->data);
}
