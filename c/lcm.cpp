//C program to find LCM of two numbers
#include <stdio.h>
 
int main()
{
    int Num1, Num2, LCM, Temp, GCD;
 
    printf("Please Enter two integer Values \n");
    scanf("%d %d", &Num1, &Num2);
 
    int a = Num1;
    int b = Num2;
    
    while (Num2 != 0) {
 	Temp = Num2;
 	Num2 = Num1 % Num2;
 	Num1 = Temp;
    }
    GCD = Num1;
    printf("GCD of %d and %d = %d \n", a, b, GCD);
    
    LCM = (a * b) / GCD;
    printf("LCM of %d and %d = %d", a, b, LCM);
    return 0;
}
