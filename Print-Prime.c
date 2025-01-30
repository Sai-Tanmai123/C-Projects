// Print Prime till 100
#include <stdio.h>
main()
{
    int i,d;
    for (i=2;i<=100;i++)
    {
        d=2;
        while (d<i)
        {
            if (i%d==0)
                break;
            d++;
        }
        if (i==d)
            printf("\t%d",i);
    }
    printf("\n");
}
