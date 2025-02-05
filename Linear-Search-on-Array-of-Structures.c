//Linear Search on array of structures
#include<stdio.h>
struct arr
{
    char name[100];
    int age;
    int rollno;
    unsigned long int phone;
};
typedef struct arr hello;
int a,i;
void main()
{
    printf("How many Student you want to enroll: ");
    scanf("%d",&a);
    hello info[a];
    for (i=0;i<a;i++)
    {
        printf("\n");
        system("color F1");
        printf("Enter Student Name: ");
        fflush(stdin);
        gets(info[i].name);
        printf("Enter Student Age: ");
        scanf("%d",&info[i].age);
        printf("Enter Student Roll No: ");
        scanf("%d",&info[i].rollno);
        printf("Enter Student Mobile No: ");
        scanf("%lu",&info[i].phone);
        printf("\n");
    }
    int key;
    printf("\nEnter Roll No to search the Student Details");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nRoll No: ");
    scanf("%d",&key);
    for (i=0;i<a;i++)
    {
        if (key==info[i].rollno)
        {
            printf("\nStudent Details are");
            printf("\nName: %s",info[i].name);
            printf("\nAge: %d",info[i].age);
            printf("\nMobile No: %lu",info[i].phone);
            break;
        }
    }
    printf("\n");
}


