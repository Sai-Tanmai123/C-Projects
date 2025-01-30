// Reverse Array Display
#include <stdio.h>
main()
{
    int a[10],i;
    for (i=0;i<=9;i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=9;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\n");
}
