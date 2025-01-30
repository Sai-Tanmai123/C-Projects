// Seconds to Hours, Minutes and Seconds
#include <stdio.h>
main()
{
    int a=0,b=0,c=0,d=0,e=0;
    printf("Enter Time in Seconds: ");
    scanf("%d",&a);
    b=a/3600;
    e=a%3600;
    c=e/60;
    d=e%60;
    printf("%d Seconds has %d Hours, %d Minutes and %d Seconds",a,b,c,d);
    printf("\n");
}
