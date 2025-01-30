// Sum of Digits
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    c=a;
    while (c!=0)
    {
        a=c%10;
        b=b+a;
        c=c/10;
    }
    printf("Sum of Digits is %d",b);
    printf("\n");
}
