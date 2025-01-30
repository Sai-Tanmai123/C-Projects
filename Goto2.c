// Goto 2
#include <stdio.h>
main()
{
    int a=1;
    start:
    printf("\t%d",a++);
    if (a<=100)
        goto start;
    printf("\n");
}
