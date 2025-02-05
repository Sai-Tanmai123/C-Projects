//Name, Roll No, Avg using Structures
#include<stdio.h>
void main()
{
    struct info
    {
        int roll;
        char name[20];
        float avg;
    }s1; //Declaring structure at the time of structure definition
    struct info s2={101,"Tanmai",99.0}; // Declaring structure after defining structure;
    printf("Enter Roll No: ");
    scanf("%d",&s1.roll);
    printf("Enter Your Name: ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter your Avg Marks: ");
    scanf("%f",&s1.avg);
    printf("\n\nStudent Details");
    printf("\n``````` ```````");
    printf("\nStudent Name: %s",s1.name);
    printf("\nRoll No: %d",s1.roll);
    printf("\nAvg Marks: %.2f",s1.avg);
    printf("\n");
    printf("\nStudent Name: %s",s2.name);
    printf("\nRoll No: %d",s2.roll);
    printf("\nAvg Marks: %.2f",s2.avg);
    printf("\n");
}

