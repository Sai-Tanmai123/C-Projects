// Student Application Form
#include<stdio.h>
#include "propercase.h"
main()
{
    char name[100],fname[100],mname[100];
    printf("Enter Student Name: ");
    gets(name);
    printf("Enter Father Name: ");
    gets(fname);
    printf("Enter Mother Name: ");
    gets(mname);
    system("cls");
    system("color F1");
    printf("\n\nProper Case Form are\n");
    printf("`````` ```` ```` ```\n\n");
    printf("Student Name: ");
    propercase(name);
    printf("\nFather Name: ");
    propercase(fname);
    printf("\nMother Name: ");
    propercase(mname);
    printf("\nNo of Words in Student Name is %d\nNo of Words in Father Name is %d\nNo of Words in Mother Name is %d",wcount(name),wcount(fname),wcount(mname));
    printf("\n");
}

