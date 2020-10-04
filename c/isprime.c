#include<stdio.h>
int isPrime(int a){
	int i,c=0;
	for(i=2;i<=a/2;i++){
		if (a%i==0){
			c=c+1;
			break;
		}
	}
	return c;
}
int main(){
	int a,n,z;
	printf("Enter starting range to check ");
	scanf("%d",&a);
	printf("Enter ending range to check ");
	scanf("%d",&z);
	while(a<=z){
			n=isPrime(a);
			if(n==0){
				printf("\n%d is a prime number",a);
			}
			a++;
	}
	return 0;
}
