// Random Number
#include <stdio.h>
main()
{
    int arr[100];
    int i,j,n=0;
    printf("How Many Array Elements you want to fill with Random Number: ");
    scanf("%d",&n);
    if (n<=0 && n>=100)
        printf("Please Enter 1 to 100 Numbers only");
    srand(time(0));
    for (i=0;i<=n;i++)
    {
        arr[i]=(rand()%100)+1;
    }
    printf("\nActual Array\n");
    for (i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n\nEven Numbers in the Array\n");
    for (i=0;i<n;i++)
    {
        if (arr[i]%2==0)
            printf("\n%d - %d",i,arr[i]);
    }
    printf("\n\nOdd Numbers in the Array\n");
    for (i=0;i<n;i++)
    {
        if ((arr[i]%2)!=0)
            printf("\n%d - %d",i,arr[i]);
    }
    printf("\n");
}
