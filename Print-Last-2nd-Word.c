// Print last 2nd word from the string
#include <stdio.h>
main()
{
    int i;
    char name[100];
    puts("Enter a Sentence: ");
    gets(name);
    for (i=0;name[i]!='\0';i++);
    i--;
    for (i;name[i]!=' ';i--);
    i--;
    for (i;name[i]!=' ';i--);
    i++;
    for (i;name[i]!=' ';i++)
    {
        putchar(name[i]);
    }
    printf("\n");
}

