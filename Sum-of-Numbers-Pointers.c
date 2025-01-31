//Sum of 2 Numbers with Pointers
#include<stdio.h>
void main()
{
    int a=0,b=0,c=0;
    int *x,*y;
    printf("Enter 2 Values: ");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    c=*x+*y; //*x is the value at address of x
    printf("Sum is %d",c);
    printf("\n");
}
