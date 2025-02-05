//Structures for N Entities using Functions
#include<stdio.h>
struct info
{
    char name[100];
    int id;
    int salary;
};
typedef struct info hi;
int i,size;
main()
{
    void display(hi[]); //Array of Structures
    printf("Enter How many Employees: ");
    scanf("%d",&size);
    hi s[size];
    system("cls");
    for (i=0;i<size;i++)
    {
        printf("Enter Employee Name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter ur Employee ID: ");
        scanf("%d",&s[i].id);
        printf("Enter ur Salary: ");
        scanf("%d",&s[i].salary);
        printf("\n");
    }
    system("cls");
    printf("\n");
    system("color F1");
    display(s);
    printf("\n");
}

void display(hi s[])
{
    printf("\t\tEmployee Information\n");
    printf("\t\t~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\tName\t\tId\t\tSalary\n");
    for (i=0;i<size;i++)
    {
        printf("\n\t%s %10d \t\t%d",s[i].name,s[i].id,s[i].salary);
    }
}

