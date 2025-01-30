// Print 2nd word from the string
#include <stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    int i;
    char name[100];
    puts("Enter a String: ");
    gets(name);
    for (i=0;name[i]!=' ';i++); // self executing loop {Runs till space bar comes}
    i++; // Moves to Next Index after space bar
    for (i;name[i]!=' ';i++)
    {
        putchar(name[i]);
    }
    printf("\n");
}
