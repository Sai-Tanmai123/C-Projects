// Adding 2 Arrays
#include <stdio.h>
main()
{
    int arr1[5],arr2[5],arr3[5];
    int i,j,k,a=0;
    for (i=0;i<5;i++)
    {
        printf("Enter %d Number in Array 1: ",i+1);
        scanf("%d",&a);
        arr1[i]=a;
    }
    printf("\n\nArray 1\n");
    for (i=0;i<5;i++)
    {
            printf("\t%d",arr1[i]);
    }
    printf("\n\n");
    for (j=0;j<5;j++)
    {
        printf("Enter %d Number in Array 2: ",j+1);
        scanf("%d",&a);
        arr2[j]=a;
    }
    printf("\n\nArray 2\n\n");
    for (j=0;j<5;j++)
    {
            printf("\t%d",arr2[j]);
    }
    for (k=0;k<5;k++)
    {
        arr3[k]=arr1[k]+arr2[(4-k)];
    }
    printf("\n\nArray 3\n\n");
    for (k=0;k<5;k++)
    {
        printf("\n%d + %d = %d",arr1[k],arr2[(4-k)],arr3[k]);
    }
    printf("\n");
}
