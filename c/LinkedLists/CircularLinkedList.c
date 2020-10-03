#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *head = NULL,*last,*newnode,*cur,*prev,*temp;
	int ch,opt;
	while(1){
		printf("\t=======Circular Linked List Menu ==========\n");
		printf("1 Insert at first\n");
		printf("2 Insert at last\n");
		printf("3 Deletion from first\n");
		printf("4 Deletion from Last\n");
		printf("5 Display\n");
		printf("\nEnter your chooice :\n");
		scanf("%d",&ch);
		switch(ch){
			case 1://Insert at first
				newnode = (struct node*)malloc(sizeof(struct node));
				printf("Enter the data : ");
				scanf("%d",&newnode->data);
				newnode->next = head;
				if(head==NULL){	
					head = newnode;
					last =  head;
				}
				else{
					last->next = newnode;
					head = newnode;
				}
			break;
			
			
			case 2:
				newnode = (struct node*)malloc(sizeof(struct node));
				printf("Enter the data : ");
				scanf("%d",&newnode->data);
				newnode->next = head;
				if(head==NULL) {
				    head = newnode;
				    last =  head;
		        }
		        else {
		        	cur = head;
					while(cur->next!=head){
		                cur=cur->next ;
		            }
		            newnode->next = head;
					cur->next = newnode;
				}
			break;
			
			case 3://delete at first
				if(head==NULL) {
					    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
					temp = head->next;
				
					while(cur->next!=head){
                        cur=cur->next ;
		            }
		        	cur->next = temp;
					free(head);
					head = temp;
			}
			
			break;
				   
			case 4: //delete at last
					if(head==NULL) {
					    printf("\nList is empty:\n");
		                
			        }
			        else
			        {
						while(cur->next->next!=head){
	                        cur=cur->next ;
			            }
			            temp = cur->next;
			        	free(temp);
						cur->next = head;
					}
			break;
			case 5://To Display 
				
				if(head==NULL) {
					    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
		                cur=head;
		                printf("\nThe List elements are:\n");
		                while(cur->next!=head)
		               	{
		                        printf("%d \t",cur->data );
		                        cur=cur->next ;
		                }
		                printf(" %d \t",cur->data);
		                printf("\n");
		        }
		    break;
		        
		
		    
		    case 6:
		    	 exit(0);
		    
		}
	}
	
}
