#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
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
				}
				else{
					newnode->next = head;
					head = newnode;
				}
			break;
			
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
		        
		    case 3://To delete first node
		    	
		    	if(head==NULL) {
					    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
		            cur = head;
			    	head = head->next;
			    	free(cur);
			    	printf("First node Deleted \n");
		        }
		    	
		    	break;
		    
		    case 4://To delete last node
		    	if(head==NULL) {
				    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
		            cur=head;
		            while(cur->next!=NULL)
		            {
		            temp = cur;
		            cur=cur->next ;
		            }
		        temp->next = NULL;
				free(cur);
				printf("Last Node Deleted \n");
		        }
			
			case 5://To delete node with given value
		    	if(head==NULL) {
				    printf("\nList is empty:\n");
		                
		        }
		        else
		        {
		        	printf("Enter element to delete");
		        	scanf("%d",&opt);
		            cur=head;
		            while(cur->data!=opt)
					{
		            temp = cur;
		            cur=cur->next ;
		            }
		        temp->next = cur->next;
				free(cur);
				printf("Node Deleted with value %d\n",opt);
		        }
		    
		    case 6:
		    	 exit(0);
		    
		}
	}
	
}
