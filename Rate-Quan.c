// Rate and Quantity
#include <stdio.h>
main()
{
    int q=0;
    float r=0,res=0;
    printf("Enter the Quantity: ");
    scanf("%d",&q);
    printf("Enter the Rate of the Item: ");
    scanf("%f",&r);
    res=q*r;
    printf("Amount to be Paid is %f/-",res);
    printf("\n");
}
