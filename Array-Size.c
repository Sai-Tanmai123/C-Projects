// Array Size
#include<stdio.h>
main()
{
    int i,s;
    printf("Enter the Size of Array: ");
    scanf("%d",&s);
    int a[s]; // You cant assign the values here like a[s]={}, but you can do individual assigning
    a[0]=100;
    a[1]=30;
    for (i=0;i<s;i++)
    {
        printf("\n%d - %d",i,a[i]);
    }
    printf("\n");
}
