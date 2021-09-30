#include <stdio.h>
main()
{
	float savings;
	float amountsaved;
	printf("enter amount in bank:\n");
	scanf("%f",&savings);
	printf("Interest rate is 5 per cent for six months.\n");
	printf("*************************************\n");
	amountsaved=((5/100.0)*savings);
	savings = savings+amountsaved;
	printf("amount saved for 1.5 years is %f\n",savings);
	printf("interest for saved amount for 1.5 years is %f\n",amountsaved);
	
	
}
