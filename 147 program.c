//Define a structure employee with empid, name and salary as member variables
#include<stdio.h>
struct employee
{
    int empid;
    char name[20];
    float salary;
};
main()
{
    struct employee a;
    printf("Enter employee id, name, salary ");
    printf("\nEnter a employee id :- ");
    scanf("%d",&a.empid);
    printf("Enter a employee name :- ");
    fflush(stdin);
    gets(a.name);
    printf("Enter a employee salary :- ");
    scanf("%f",&a.salary);
    printf("\nId     :- %d\n",a.empid);
    printf("Name   :- %s\n",a.name);
    printf("Salary :- %f\n",a.salary);
    getch();
}
