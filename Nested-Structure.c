//Nested Structure
#include<stdio.h>
struct date
{
    int dd,mm,yy;
};
typedef struct date date;
typedef struct student
{
    int id;
    char name[20];
    date doj;
    int age;
}student; //alias
main()
{
    student s1;
    printf("Enter Student id: ");
    scanf("%d",&s1.id);
    printf("Enter Student Name: ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter Student Age:" );
    scanf("%d",&s1.age);
    printf("Enter Date of Joining (dd/mm/yyyy): ");
    scanf("%d%d%d",&s1.doj.dd,&s1.doj.mm,&s1.doj.yy);
    system("cls");
    system("color F1");
    printf("\n");
    printf("Student Details");
    printf("\n``````` ```````");
    printf("\nName: %s",s1.name);
    printf("\nID: %d",s1.id);
    printf("\nAge: %d",s1.age);
    printf("\nDate of Joining: %d/%d/%d",s1.doj.dd,s1.doj.mm,s1.doj.yy);
    printf("\n");
}
