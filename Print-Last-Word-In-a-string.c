// Print Last word from the string
#include <stdio.h>
main()
{
    int i;
    char name[100];
    puts("Enter a String: ");
    gets(name);
    for (i=0;name[i]!='\0';i++);
    for (i;name[i]!=' ';i--);
    i++;
    for (i;name[i]!='\0';i++)
        putchar(name[i]);
    printf("\n");
}
