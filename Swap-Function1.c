//Swap Using Function1
#include<stdio.h>
main()
{
    void swap(int,int); // Used void because it is not doing any operation
    int a=0,b=0;
    printf("A is: ");
    scanf("%d",&a);
    printf("B is: ");
    scanf("%d",&b);
    swap(a,b);
    printf("\nA is %d\nB is %d",a,b);
    printf("\n");
}
void swap(int a,int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;

    return;
}
// Impossible by call by value method

