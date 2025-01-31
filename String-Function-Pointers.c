//Strings-Functions-Pointers
#include<stdio.h>
main()
{
    void display(char*,int);
    char name[100];
    int len=0;
    printf("Enter a String: ");
    gets(name);
    len=strlen(name);
    display(name,len);
    printf("\n");
}

void display(char *c,int x)
{
    int i;
    for (i=0;i<x;i++)
    {
        printf("\n%u - %c",c+i,*(c+i)); // putchar(*(c+i));
    }
}
