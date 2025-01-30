// Minutes to Hours and Minutes
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    printf("Enter time in Minutes: ");
    scanf("%d",&a);
    b=a/60;
    c=a%60;
    printf("%d Minutes has %d Hours and %d Minutes",a,b,c);
    printf("\n");
}
