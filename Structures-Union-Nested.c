//Nested Structure and Union
#include<stdio.h>
struct person
{
    int id;
    char name[20];
    long long int mo;
    union //Used Union for Fees and Salary because fees is not needed for employee and salary not needed for student so to save memory
    {
        float fees;
        float salary;
    }info;
}a,b;
main()
{
    printf("Enter Student Details");
    printf("\n````` ``````` ```````");
    printf("\nEnter Student Name: ");
    fflush(stdin);
    gets(a.name);
    printf("Enter Student ID: ");
    scanf("%d",&a.id);
    printf("Enter Student Mobile Number: ");
    scanf("%lld",&a.mo);
    printf("Enter Fees Paid: ");
    scanf("%f",&a.info.fees); //structure variable name.union variable name.variable name

    printf("\nEnter Employee Details");
    printf("\n````` ``````` ```````");
    printf("\nEnter Employee Name: ");
    fflush(stdin);
    gets(b.name);
    printf("Enter Employee ID: ");
    scanf("%d",&b.id);
    printf("Enter Employee Mobile Number: ");
    scanf("%lld",&b.mo);
    printf("Enter Salary: ");
    scanf("%f",&b.info.salary);

    printf("\nStudent and Employee Details");
    printf("\n%s - %d - %lld - %.2f",a.name,a.id,a.mo,a.info.fees);
    printf("\n%s - %d - %lld - %.2f",b.name,b.id,b.mo,b.info.salary);
    printf("\n");
}


