#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct stack{
	int data;
	struct stack *next;
};
int main(){
	struct stack *top = NULL,*newnode,*temp;
	int n,i;
	 while(1){
    	printf("=========== STACK OPERATIONS USING ARRAY ==============");
    	printf("\n\t\t\t 1.PUSH\n\t\t\t 2.POP\n\t\t\t 3.PEEK\n\t\t\t 4.DISPLAY\n\t\t\t5.Exit");
    	printf("\n----------------------------------------------------------");
    	printf("\n Enter your Choice:");
        scanf("%d",&n);
        switch(n){
         	case 1:
         		newnode = (struct stack*)malloc(sizeof(struct stack));
				printf("Enter the data : ");
				scanf("%d",&newnode->data);
				newnode->next = NULL;
				if(top==NULL){
					top = newnode;
				}
				else{
					newnode->next = top;
					top = newnode;
				}
         	break;
         	case 2:
         		if(top == NULL)
		      		printf("\nStack is Empty!!!\n");
		   		else{
		   			printf("\n%d is removed \n",top->data);
		   			top = top->next;
      			}
      		break;	
			case 3:
         		if(top == NULL)
		      		printf("\nStack is Empty!!!\n");
		   		else{
		   			printf("\n%d is top data\n",top->data);	
      			}
      		break;
      		
      		case 4:
         		if(top == NULL)
		      		printf("\nStack is Empty!!!\n");
		   		else{
		   			printf("\n=========Stack Data===========\n");
		   			temp = top;
		   			while(temp->next!=NULL){
		   				printf(" %d ",temp->data);
		   				temp = temp->next;
					   }
      				printf(" %d \n",temp->data);
				  }
      		break;
			  	
      			}
      		
		}
      		
}
