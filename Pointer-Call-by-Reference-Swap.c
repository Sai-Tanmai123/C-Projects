//Swap using Call by reference
#include<stdio.h>
main()
{
    void swap (int*, int*); // Receives address
    int a,b;
    printf("A is: ");
    scanf("%d",&a);
    printf("B is: ");
    scanf("%d",&b);
    printf("\nAddress of a is %u and b is %u",&a,&b);
    swap(&a,&b); // Call by Reference
    printf("\nA is: %d",a);
    printf("\nB is: %d",b);
    printf("\nAddress of a is %u and b is %u",&a,&b);
    printf("\n");
}

void swap(int *x,int *y)
{
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
}

//Completely Solve the Problem using Addresses
