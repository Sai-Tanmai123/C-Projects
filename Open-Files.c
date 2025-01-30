// Opening Files from C Program
#include <stdio.h>
#include <stdlib.h>
main()
{
    char opt,c;
    printf("[N]otepad , [P]aint , [C]alculator ( Which one do you want to open): ");
    opt=getchar();
    c=toupper(opt);
    switch(c)
    {
        case 'N': system("notepad"); break;
        case 'P': system("mspaint"); break;
        case 'C': system("calc"); break;
        default: printf("Invalid Option...."); break;
    }
    printf("\n");
}
