// Pointer 1
#include<stdio.h>
main()
{
    int x=100;
    int *p;
    p=&x;
    printf("\nValue of x is %d",x);
    printf("\nAddress of x is %u",&x);
    printf("\nValue of p is %u",p);
    printf("\nValue at address of p is %d",*p);
    printf("\nAddress of p is %u",&p);
    printf("\n");
}
