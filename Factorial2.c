// Factorial 2
#include <stdio.h>
main()
{
    long long int a=0,b=0,c=1,i;
    for (i=1;i<=20;i++)
    {
        b=i;
        c=1;
        while(b>0)
        {
            c=c*b;
            b=b-1;
        }
        printf("\n%d! Factorial is %lli",i,c);
    }
    printf("\n");
}
