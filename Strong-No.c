// Strong Number
#include <stdio.h>
main()
{
    int i,a=0,c,d,e,f;
    for (i=1;i<=100000;i++)
    {
        a=i;
        f=0;
        while(a>0)
        {
            c=a%10;
            e=1;
            d=1;
            while(d<=c)
            {
                e=e*d;
                d++;
            }
            f=f+e;
            a=a/10;
        }
        if (f==i)
            printf("\t%d",i);
    }
    printf("\n");
}
