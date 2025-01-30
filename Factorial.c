// Factorial of a Number
#include <stdio.h>
main()
{
    int a=0,b,c=1,d=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b=a;
    while (a>0)
    {
            c=c*a;
            a=a-1;
    }
    printf("\n%d! is %d",b,c);
    printf("\n");
}
