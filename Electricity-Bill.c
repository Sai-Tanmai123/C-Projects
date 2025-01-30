// Electricity Bill
#include <stdio.h>
main()
{
    int b=0,p=0;
    float u=0,f=0;
    printf("Enter Previous Month Readings: ");
    scanf("%d",&b);
    printf("Enter Present Month Reading: ");
    scanf("%d",&p);
    u=p-b;
    if(u>=500)
        f=u*4.80;
    else
        f=u*3.50;
    printf("No of Units are %.0f and Amount to be Paid is %.2f",u,f);
    printf("\n");
}
