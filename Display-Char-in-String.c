// Display Character in String
#include<stdio.h>
#include <string.h>
main()
{
    char str[100];
    int i,a;
    printf("Enter a String: ");
    gets(str);
    a=strlen(str);
    for (i=0;i<a;i++)
    {
        printf("%c# ",str[i]);
    }
    printf("\b\b  ");
    printf("\n~~~~~~~~~~~~~~~~~~~\n");
    for (i=0;str[i]!='\0';i++)
    {
        printf("%c* ",str[i]);
    }
    printf("\b\b  ");
    printf("\n");
}
