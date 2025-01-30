// Bill of 2 Products
#include <stdio.h>
main()
{
    int a,b,price;
    a=b=price=0;
    printf("Enter the Price of 1st Item: ");
    scanf("%d",&a);
    printf("Enter the Price of Next Item: ");
    scanf("%d",&b);
    price=a+b;
    printf("Total Amount is %d/-",price);
    printf("\n");
}
