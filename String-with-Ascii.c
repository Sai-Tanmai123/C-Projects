// String with ASCII Code
#include<stdio.h>
main()
{
    char name[100];
    int i;
    printf("Enter a string: ");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    {
        printf("\n%c\'s ASCII Code is %d",name[i],name[i]);
    }
    printf("\n");
}
