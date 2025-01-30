// Logical Operators 2
#include <stdio.h>
main()
{
    int x,y;
    x=5;
    y=x>4 || x<10;
    printf("\n%d",y);
    x=3;
    y=!x>5 || 10==10;
    printf("\n%d",y);
    int a=10,b=5,c=25;
    c=a>10 || ++b>5;
    printf("\n%d is a, %d is b and %d is c",a,b,c);

    printf("\n");
}
