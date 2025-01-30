// Perfect No
#include <stdio.h>
main()
{
    int a=0,i,d=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    for (i=1;i<a;i++)
    {
        if (a%i==0)
            d=d+i;
    }
    if (d==a)
        printf("%d is a Perfect Number",a);
    else
        printf("%d is not a Perfect Number",a);
    printf("\n");
}
