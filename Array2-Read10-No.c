// Read 10 Numbers and Display
#include <stdio.h>
main()
{
    int i;
    int no[10]; //40 Bytes since 10 numbers and each number 4 bytes
    for (i=0;i<10;i++)
    {
        printf("Enter %d Number: ",i);
        scanf("%d",&no[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("\n%d - %d",i,no[i]);
    }
    printf("\n");
}
