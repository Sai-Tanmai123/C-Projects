// Inputted Rate and Quantity using Functions
#include<stdio.h>
main()
{
    float amt(float, int);
    int a=0;
    float r=0;
    printf("Enter the Quantity: ");
    scanf("%d",&a);
    printf("\nEnter the Rate: ");
    scanf("%f",&r);
    printf("\nTotal Amount is %.2f",amt(r,a));
    printf("\n");
}
float amt(float x,int y)
{
    float z;
    z=x*y;
    return(z);
}

