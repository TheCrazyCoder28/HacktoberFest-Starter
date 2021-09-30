#include <stdio.h>
#include <conio.h>
typedef struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;             // Referencing pointer to memory address of person1

    printf("Enter integer: ");
    scanf("%d",&(*personPtr).age);

    printf("Enter number: ");
    scanf("%f",&(*personPtr).weight);

    printf("Displaying: ");
    printf("%d   %f",personPtr->age,(*personPtr).weight);
    getch();
    return 0;
}
