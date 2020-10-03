#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *prev,*next;
};
int main(){
	struct node *head = NULL,*newnode,*cur,*prev,*temp;
	int ch,opt;
	while(1){
		printf("\t==============Menu===============\n");
		printf("0 Insert at first\n");
		printf("1 Insert at Last\n");
		printf("2 Display\n");
		printf("3 Delete First Node\n");
		printf("4 Delete Last Node \n");
		printf("5 Delete Node with Specified Data\n");
		printf("6 Exit\n");

		scanf("%d",&ch);
		
		switch(ch){
			case 0://Insert at first
				newnode = (struct node*)malloc(sizeof(struct node));
				printf("Enter the data : ");
				scanf("%d",&newnode->data);
				newnode->next = NULL;
				if(head==NULL){
					head = newnode;
					newnode->prev = NULL;
				}
				else{
					newnode->next = head;
					head->prev = newnode;
					head = newnode;
				}
			break;

			case 1: // Insertion at last 
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
		            while(cur->next!=NULL){
		            	temp = cur;
		            	cur=cur->next ;
		            }
		        cur->next = newnode;
		        newnode->prev = cur;
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
			
			case 3: //delete first node from double linked list
					if(head==NULL) {
						    printf("\nList is empty:\n");    
			        }
			        else
			        {
						temp = head->next;
						free(head);
						head = temp ; 
						head->prev = NULL;
					}
					
			case 4: //Delete Last Node from double linkedd list...
					
					if(head==NULL) {
						    printf("\nList is empty:\n");    
			        }
			        else
			        {
						cur = head;
						while(cur->next!=NULL){
							cur = cur->next;
						}
						temp = cur->prev;
						free(cur);
						temp->next = NULL;
					}		
					
				}
		}		
}
