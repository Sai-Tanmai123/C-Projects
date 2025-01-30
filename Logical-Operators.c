// Logical Operators
#include <stdio.h>
main()
{
    int x,y;
    x=5;
    y=x>4 && x<10;
    printf("\n%d is y",y);
    x=3;
    y=!x>5;
    printf("\ny is %d",y);
    int a=10,b=5,c=6;
    c=a>10 && ++b>5;
    printf("\n%d is a, %d is b and %d is c",a,b,c);
    printf("\n");
}
