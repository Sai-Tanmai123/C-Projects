// Fibonacci
#include <stdio.h>
main()
{
    int a=1,b=0,c=0;
    while(c<=100)
    {
        c=a+b;
        if (c<100)
            printf("\t%d",c);
        a=b;
        b=c;
    }
    printf("\n");
}
