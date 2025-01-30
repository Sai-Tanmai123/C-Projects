// Combine 2 Arrays
/*1st Number of 1st Array and Last number or 2nd Array are two be added
and stored in the 3rd array and similarly 2nd element of 1st array and 2nd last element of 2nd array should be stored
in the 2nd element of 3rd array and so on*/
#include <stdio.h>
main()
{
    int arr1[10],arr2[10],arr3[10];
    int i,j,k;
    srand(time(0));
    for (i=0;i<10;i++)
    {
        arr1[i]=(rand()%100)+1;
    }
    printf("\nArray 1\n");
    for (i=0;i<10;i++)
    {
        printf("\n%d - %d",i,arr1[i]);
    }
    for (j=0;j<10;j++)
    {
        arr2[j]=(rand()%100)+1;
    }
    printf("\nArray 2\n");
    for (j=0;j<10;j++)
    {
        printf("\n%d - %d",j,arr2[j]);
    }
    for (k=0;k<10;k++)
    {
        arr3[k]=arr1[k]+arr2[(9-k)];
    }
    printf("\nArray 3\n");
    for (k=0;k<10;k++)
    {
        printf("\n%d - %d",k,arr3[k]);
    }
    printf("\n");
}
