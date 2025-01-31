//String using Pointer
#include<stdio.h>
main()
{
    char name[200], *x;
    printf("Enter ur Name: ");
    gets(name);
    x=name;
    while(*x!='\0')
    {
        if (*x!=' ')
        {
        printf("\n%u - %c",x,*x);
        }
        x++;
    }
    printf("\n");
}

