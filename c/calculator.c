#include <stdio.h>
#include <time.h>
int main()
{
    float num1, num2, op;
    int temp = 1;
    float res;
    printf("***This Is Calculator.***\n");
    printf("Inter 1 for Addition.\n");
    printf("Inter 2 for Subtraction.\n");
    printf("Inter 3 for multiplaction.\n");
    printf("Inter 4 for division.\n");
    printf("Inter 0 For EXIT!.\n");
    while (temp)
    {
        printf("\nInter Option : ");
        scanf("%f", &op);
        if (op == 1)
        {

            printf("Inter First Number : ");
            scanf("%f", &num1);
            printf("Inter second number : ");
            scanf("%f", &num2);
            res = num1 + num2;
            printf("The sum of %f and %f is %f.\n", num1, num2, res);
        }
        else if (op == 2)
        {
            printf("Inter First Number : ");
            scanf("%f", &num1);
            printf("Inter second number : ");
            scanf("%f", &num2);
            res = num1 - num2;
            printf("The difference between %f and %f is %f\n", num1, num2, res);
        }
        else if (op == 3)
        {
            printf("Inter First Number : ");
            scanf("%f", &num1);
            printf("Inter second number : ");
            scanf("%f", &num2);
            res = num1 * num2;
            printf("The product of %f and %f is %f\n", num1, num2, res);
        }
        else if (op == 4)
        {
            printf("Inter First Number : ");
            scanf("%f", &num1);
            printf("Inter second number : ");
            scanf("%f", &num2);
            res = num1 / num2;
            printf("The divident of %f and %f is %f\n", num1, num2, res);
        }
        else
        {
            printf("Thanks for using this program.\n");
            break;
        }
    }
    printf("Plz give it a star\n");
    return 0;
}
