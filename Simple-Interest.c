// Simple Interest
#include <stdio.h>
main()
{
    float p=0,t=0,r=0,pi=0;
    printf("Enter Principle Amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest: ");
    scanf("%f",&r);
    printf("Enter Time Period: ");
    scanf("%f",&t);
    pi=(p*r*t)/100;
    printf("Simple Interest is %.4f and Amount to be paid is %.4f",pi,(pi+p));
    printf("\n");
}
