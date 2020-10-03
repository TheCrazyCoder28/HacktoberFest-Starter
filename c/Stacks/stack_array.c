#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,top=-1,x,i,n;
int main(){
    
	printf("\n Enter the size of STACK[MAX SIZE=100]:");
    scanf("%d",&n);
    
    while(1){
    	printf("=========== STACK OPERATIONS USING ARRAY ==============");
    	printf("\n\t\t\t 1.PUSH\n\t\t\t 2.POP\n\t\t\t 3.DISPLAY\n\t\t\t 4.Peek\n\t\t\t5.Exit");
    	printf("\n----------------------------------------------------------");
    	printf("\n Enter your Choice:");
        scanf("%d",&choice);
        switch(choice){
         	case 1:
         		if(top>=n-1)
			    {
			    	system("cls");
			        printf("\nStack is over flowed\n");
			    }
			    else
			    {
			    	system("cls");
			        printf("\nEnter a value to be pushed:");
			        scanf("%d",&x);
			        top++;
			        stack[top]=x;
			    }
			    break;
			case 2:
         		if(top==-1){
         			system("cls");
			        printf("\n The Stack is empty");
			    }  
			    else{
			    	system("cls");
			       	printf("\n%d is removed from stack",stack[top]);
   				    top--;	
			    }
			    break;
			case 3:
				if(top==-1){
					system("cls");
			        printf("\n The Stack is empty");
			    }
				else{
					system("cls");
			        printf("\n The elements in Stack \n");
			        printf("\t-----------");
			        for(i=top; i>=0; i--)
			            printf("\n\t |   %d   |\n\t-----------",stack[i]);
			        }
			    break;
			case 4:
				if(top==-1){
					system("cls");
			        printf("\n The Stack is empty \n");
			    }  
				
				else{
					system("cls");
			      	printf("\nTop most element is %d\n",stack[top]);
				}
				break;
			case 5:
				exit(0);
		}
	}
}
