//Double Pointer
#include<stdio.h>
main()
{
    int x=10,*p,**q;
    p=&x;
    q=&p;
    printf("\nValue at p is %d",*p);
    printf("\nAddress of p is %u",p);
    printf("\nValue at q is %d",**q);
    printf("\nAddress of p using q is %d",*q);
    printf("\n");
}

