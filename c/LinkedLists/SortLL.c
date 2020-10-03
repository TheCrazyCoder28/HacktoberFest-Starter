#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head = NULL,*newnode,*cur,*temp;
	int ch,opt;
	while(1){
		printf("\t==============Menu===============\n");
		printf("1 Insert\n");
		printf("2 Display\n");
		printf("3 Sort LL\n");
		printf("6 Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				newnode = (struct node*)malloc(sizeof(struct node));
				printf("Enter the data : ");
				scanf("%d",&newnode->data);
				newnode->next = NULL;
				
				if(head==NULL) {
				    head = newnode;
		        }
		        else
		        {
		            cur=head;
		            while(cur->next!=NULL)
		            {
		            temp = cur;
		            cur=cur->next ;
		            }
		        cur->next = newnode;
		        newnode->next = NULL;
		        } 
				break;
				
			case 2://To Display 
				
				if(head==NULL) {
					    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
		                cur=head;
		                printf("\nThe List elements are:\n");
		                while(cur!=NULL)
		               	{
		                        printf("%d \t",cur->data );
		                        cur=cur->next ;
		                }
		                printf("\n");
		        }
		        break;
		    
			case 3:   //Sorting
			 		cur = head;
			 		while(cur!=NULL){
			 			temp = cur;
			 			while(temp!=NULL){
			 				if(cur->data > temp->data){
			 					opt = cur->data;
			 					cur->data = temp->data;
			 					temp->data = opt;
							 }
						temp = temp->next;
						 }
					cur = cur->next;
					 }
			break;

		    case 6:
		    	 exit(0);
		    
		}
	}
	
}
