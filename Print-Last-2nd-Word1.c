// Print last 2nd word from the string using strlen
#include <stdio.h>
main()
{
    int i,len=0;
    char name[100];
    puts("Enter a Sentence: ");
    gets(name);
    len=strlen(name);
    len--;
    for (name[len];name[len]!=' ';len--);
    for (len--;name[len]!=' ';len--);
    for (len++;name[len]!=' ';len++)
    {
        putchar(name[len]);
    }
    printf("\n");
}

