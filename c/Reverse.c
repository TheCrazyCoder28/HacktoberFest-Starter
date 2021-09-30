#include <stdio.h>
int rem,sum=0;
int recursion(int num){
		if(num>0){
		      rem=num%10;
		      sum=sum*10+rem;
		      recursion(num/10);
		   }
		   else{
		   	  return sum;
		   }
		   
}
int main(){
	int a,b;
	printf("Enter a number ");
	scanf("%d",&a);
	b=a;
	printf("Reverse of %d is %d",b,recursion(a));
	}
		
