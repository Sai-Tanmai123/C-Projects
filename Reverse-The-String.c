// Reverse the String
#include<stdio.h>
main()
{
    int i;
    char name[100];
    puts("Enter a Sentence: ");
    gets(name);
    printf("\n\nYour Reversed Sentence is\n\n");
    for (i=0;name[i]!='\0';i++);
    i--;
    for (i;i>=0;i--)
    {
        putchar(name[i]);
    }
    printf("\n");
}
