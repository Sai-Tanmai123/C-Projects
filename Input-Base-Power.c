// Input Base and Power
#include <stdio.h>
main()
{
    int a=0,b=0,i=1,c=1;
    printf("Enter Base Number: ");
    scanf("%d",&a);
    printf("Enter its Raising Index (Power): ");
    scanf("%d",&b);
    while (i<=b)
    {
        c=c*a;
        i++;
    }
    printf("\n%d power %d is %d",a,b,c);
    printf("\n");
}
