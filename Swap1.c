// Swap the Nos 1
#include<stdio.h>
main()
{
    float a=0,b=0,c=0;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of a and b are %.0f and %.0f",a,b);
    printf("\n");
}
