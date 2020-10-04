#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void display();
void enqueue();
int dequeue();
int peep();
struct queue{
	int data;
	struct queue *next;
};
struct queue *front=NULL,*rare=NULL,*nq;
int main(){
	int ch;
	while(ch!=5){
		printf("\n\t=======Linear Queue List Menu ==========\n");
			printf("1 enqueue\n");
			printf("2 dequeue\n");
			printf("3 Peek\n");
			printf("4 Display\n");
			printf("5 Exit\n");
			printf("\nEnter your chooice : ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					enqueue();
					break;
				case 2:
					dequeue();
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
void enqueue(){
		nq = (struct queue*)malloc(sizeof(struct queue));
		printf("Enter the data : ");
		scanf("%d",&nq->data);
		if(front==NULL && rare==NULL){
			front = nq;
			rare = nq;
		}
		else{
			rare->next = nq;
			rare = nq;
			rare->next = NULL;
		}
}
void display(){
	struct queue *temp=front;
	printf("\n==========Elements in the Queue==========\n");
	while(temp->next!=NULL){
		printf("\t %d",temp->data);
		temp = temp->next;
	}













printf("\t %d",temp->data);
}

int dequeue(){
	struct queue *temp=front->next;
	free(front);
	front = temp;
	}
int peep(){
	printf("\n%d is at front position\n",front->data);
}
