// kbhit()
#include <stdio.h>
#include <conio.h>
main()
{
    int a=0;
    a=kbhit();
    printf("\n%d",a);
    getch();
    while(!(a=kbhit()))
    {
        system("color 5");
        printf("\tWelcome to my World");
        printf("\tPress any key to stop");
    }

    printf("\n value of a is %d",a);
    getch();
    printf("\n");
}
