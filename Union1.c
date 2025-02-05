//Union 1
#include<stdio.h>
main()
{
    union sample
    {
        int a; //4
        float b; //4
        char c; //1
    }u;
    printf("Size of Union: %d ",sizeof(u));
    u.a=10;
    printf("\nValue of a is %d",u.a);
    u.b=12.50;
    printf("\nValue of b is %f",u.b);
    u.c='A';
    printf("\nValue of c is %c",u.c);
    printf("\n");
}


