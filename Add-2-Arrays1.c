// Addition of 2 Arrays
#include <stdio.h>
main()
{
    int arr1[5],arr2[5],arr3[5];
    int i,j,a=0;
    for (i=0;i<5;i++)
    {
        printf("Enter %d Number in Array 1: ",i+1);
        scanf("%d",&a);
        arr1[i]=a;
    }
    printf("\n\n");
    for (i=0;i<5;i++)
    {
        printf("Enter %d Number in Array 2: ",i+1);
        scanf("%d",&a);
        arr2[i]=a;
    }
    printf("\n\n");
    for (i=0,j=4;i<5 && j>=0;i++,j--)
    {
        arr3[i]=arr1[i]+arr2[j];
    }
    for (i=0;i<5;i++)
    {
        printf("\t%d",arr3[i]);
    }
    printf("\n");
}
