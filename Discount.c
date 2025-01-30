// Discount
#include <stdio.h>
main()
{
    int s=0,d=0,f=0;
    printf("Enter ur Sales: ");
    scanf("%d",&s);
    if (s>=2500)
        d=s*10/100;
    else
        d=s*5/100;

    f=s-d;
    printf("Discount is %d and Final Amount is %d",d,f);
    printf("\n");
}
