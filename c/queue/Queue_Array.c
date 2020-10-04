#include<stdio.h>
#include<stdlib.h>
int queue[10],front=-1,rear=-1;
void insert(void);
int deleteQ(void);
int peep(void);
void display(void);
int main(){
    
    while(1){
    	int choice;
    	int temp;
    	printf("\n=========== Queue OPERATIONS USING ARRAY ==============");
    	printf("\n\t\t\t 1.Insert\n\t\t\t 2.Delete\n\t\t\t 3.Peep\n\t\t\t 4.DISPLAY\n\t\t\t 5.Exit");
    	printf("\n----------------------------------------------------------");
    	printf("\n Enter your Choice:");
        scanf("%d",&choice);
        switch(choice){
         	case 1:
         		insert();
			    break;
			case 2:
				temp = deleteQ();
         		printf("\nDeleted element is %d\n",temp);
			    break;
			case 3:
				temp = peep();
				printf("\nFirst element is %d\n",temp);
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
		}
	}
}
void insert(){
	system("cls");
	int n;
	printf("\nEnter element to be added into queue : ");
	scanf("%d",&n);
	if(front==-1 && rear==-1){
		front = rear = 0;
	}
	else{
		rear++;
	}
	queue[rear]=n;
}
int deleteQ(){
	system("cls");
	int tem = queue[front];
	if(front==-1 && rear==-1){
		printf("\nQueue is empty\n");
	}
	else{
		front++;
	}
	return tem;
}
int peep(){
	system("cls");
	if(front==-1 && rear==-1){
		printf("\nQueue is empty\n");
	}
	else{
		return queue[front]; 
	}
}
void display(){
	system("cls");
	int i;
		if(front==-1 && rear==-1){
		printf("\nQueue is empty\n");
	}
	else{
		printf("\n\n=======Elements in the queue are======\n");
		printf("\n\n\t");
		for(i=front;i<=rear;i++){
			printf("| %d ",queue[i]);
		}
		printf("|");
		printf("\n\n");
	}
}
