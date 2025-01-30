// Goto 1 (Sqrt of a Number)
#include <stdio.h>
#include <math.h>
main()
{
    int a=0,s=0;
    start:
    printf("\nEnter Positive Number: ");
    scanf("%d",&a);

    if(a<=0)
    {
        printf("\nPlease Enter Natural Numbers only\a..\n");
        goto start;
    }
    printf("\nSquare Root of %d is %lf",a,sqrt(a));
    printf("\n");
}
