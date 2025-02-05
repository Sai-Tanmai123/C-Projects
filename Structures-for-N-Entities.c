// Structures with N Entities (Array of structures)
#include<stdio.h>
main()
{
    struct student
    {
        int no;
        char name[100];
        float avg;
    }s[100];
    int size,i;
    printf("Enter How many Students: ");
    scanf("%d",&size);
    printf("\n");
    for (i=0;i<size;i++)
    {
        printf("Enter Student Name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter Roll No: ");
        scanf("%d",&s[i].no);
        printf("Enter Avg Marks: ");
        scanf("%f",&s[i].avg);
        printf("\n");
    }
    system("cls");
    system("color F1");
    printf("\t\tStudent Details are\n");
    printf("\t\t``````` ``````` ```\n");
    printf("\nName of the Student \t Roll No \t   Average");
    for (i=0;i<size;i++)
    {
        printf("\n%10s \t %15d \t %8.2f",s[i].name,s[i].no,s[i].avg);
    }
    printf("\n");
}


