//File Handling Structure
#include<stdio.h>
main()
{
    typedef struct employee
    {
        char name[30];
        int id;
        int salary;
    }emp;
    emp e;
    FILE *f;
    char ch='y';
    f=fopen("Employee File.txt","a+");
    while(ch=='y' ||ch=='Y')
    {
        printf("\nEnter Employee Name: ");
        fflush(stdin);
        scanf("%[^\n]",e.name);
        printf("Enter Employee ID: ");
        scanf("%d",&e.id);
        printf("Enter Employee Salary: ");
        scanf("%d",&e.salary);
        fprintf(f,"%s\t%d\t%d\n",e.name,e.id,e.salary);
        printf("Do you want to Add one more Record (y/n): ");
        fflush(stdin);
        ch=getchar();
    }
    printf("\nEmployee Record is Successfully into the File");
    rewind(f);
    system("cls");
    system("color F1");
    while(fscanf(f,"%s%d%d",&e.name,&e.id,&e.salary)!=EOF) //fscanf reads from file
    {
            printf("Name: %s\nID: %d\nSalary: %d\n",e.name,e.id,e.salary); // Print on to monitor console
            printf("\n");
    }
    printf("\n");
}

