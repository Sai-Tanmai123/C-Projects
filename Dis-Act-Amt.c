// Discount and Actual Amount
#include <stdio.h>
main()
{
    float s=0,f=0,d=0;
    printf("Enter ur Sales: ");
    scanf("%f",&s);
    if (s>=25000)
        d=s*0.25;
    else
        if (s>=20000)
            d=s*0.20;
        else
            if (s>=15000)
                d=s*0.15;
            else
                if (s>=10000)
                    d=s*0.10;
                else
                    if (s>=5000)
                        d=s*0.05;
                    else
                        d=0;
    f=s-d;
    printf("\nYour Discount is %.2f and Actual Amount is %.2f",d,f);
    printf("\n");
}
