#include<stdio.h>
int main()
{
    int sum=0,p,i,range;
    printf("enter range here:");
    scanf("%d",&range);
    printf("\n Perfect numbers upto given range are ");
    for(i= 1; i<= range; i++){
    p=1;
    while(p<=(i/2)){
    if(i % p == 0)
    sum=sum+p;
    p++;
    }
    if(sum==i)
    printf(" %d ",i);
    sum=0;
    }
    return 0;
}
