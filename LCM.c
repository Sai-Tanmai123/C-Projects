// LCM of 2 Numbers
#include <stdio.h>
main()
{
    int a=0,b=0,c=0,d=0,i=1;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    d=a*b;
    i=d;
    while (d<=i && d>0)
    {
        if (d%a==0 && d%b==0)
            c=d;
        d--;
    }
    printf("\nLCM of %d and %d is %d",a,b,c);
    printf("\n");
}
