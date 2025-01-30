// Swap the Nos 3
#include <stdio.h>
main()
{
    int a=0,b=0;
    printf("A is: ");
    scanf("%d",&a);
    printf("B is: ");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("A is %d and B is %d",a,b);
    printf("\n");
}
