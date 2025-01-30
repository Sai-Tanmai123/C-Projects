// Unary 3
#include <stdio.h>
main()
{
    int a=1,b=0;
    b=++a + a++;
    printf("a=%d and b=%d",a,b);
    printf("\n");

    int x=5,y=10,z=0;
    z=x+++y;
    printf("x=%d , y=%d and z=%d",x,y,z);
}
