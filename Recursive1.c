// Recursive 1 to 100 Naturals
#include<stdio.h>
main()
{
    display(0);
    printf("\n\nEnd of Recursion");
    printf("\n");
}

display (int x)
{
    if (x>100)
        return;
    else
    {
        printf("\t%d",x);
        display(x=x+2);
    }
}
