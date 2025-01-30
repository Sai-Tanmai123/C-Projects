// Armstrong
#include <stdio.h>
main()
{
    long long int a=0,sum,r=0,b=0;
    for (a=0;a<=1000;a++)
    {
        b=a;
        sum=0;
        while(b>0)
        {
            r=b%10;
            sum=sum+(r*r*r);
            b=b/10;
        }
        if (sum==a)
            printf("\t%lli",a);
    }
}
