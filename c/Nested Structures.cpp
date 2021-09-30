       #include<stdio.h>
       #include <conio.h>
       struct Address
       {
              char HouseNo[25];
              char City[25];
              char PinCode[25];
       };

       struct Employee
       {
           int Id;
           char Name[25];
           float Salary;
           struct Address Add;
       };

       main()
       {
              int i;
              struct Employee E;

              printf("\n\tEnter Employee Id : ");
              scanf("%d",&E.Id);

              printf("\n\tEnter Employee Name : ");
              scanf("%s",&E.Name);

              printf("\n\tEnter Employee Salary : ");
              scanf("%f",&E.Salary);

              printf("\n\tEnter Employee House No : ");
              scanf("%s",&E.Add.HouseNo);

              printf("\n\tEnter Employee City : ");
              scanf("%s",&E.Add.City);

              printf("\n\tEnter Employee Pin Code : ");
              scanf("%s",&E.Add.PinCode);

              printf("\nDetails of Employees");
              printf("\n\tEmployee Id : %d",E.Id);
              printf("\n\tEmployee Name : %s",E.Name);
              printf("\n\tEmployee Salary : %f",E.Salary);
              printf("\n\tEmployee House No : %s",E.Add.HouseNo);
              printf("\n\tEmployee City : %s",E.Add.City);
              printf("\n\tEmployee House No : %s",E.Add.PinCode);
              getch();
       }
