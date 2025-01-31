//Pointer Arthemetic
#include<stdio.h>
void main()
{
    int a=1,b=2;
    int *x,*y;
    x=&a;
    y=&b;
    printf("\nValue of x is %u",x);
    printf("\nValue of y is %u",y);
    printf("\nValues between x and y is %d",x-y); // 1 indicates i integer 6422028 - 6422024 = 4 that means 4 bytes is stored which implies to 1 integer number [ Since int data type occupies 4 bytes ]
    printf("\nAddress of x incrementation is %u",x+1);
    printf("\nAddress of y incrementation  is %u",y-3);

    printf("\n");
}

