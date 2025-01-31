//Malloc DMA
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n,*p,i;
    printf("Enter How many Numbers you want to store: ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(n)); //n mulitiplied my sizeof n
    if (p==NULL)
    {
        printf("Error in allocating Memory");
        exit(0);
    }
    for (i=0;i<n;i++)
    {
        printf("Enter %d No: ",i+1);
        scanf("%d",p+i);
    }
    printf("\nDMA\n");
    for (i=0;i<n;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }
    int *q=realloc(p,(n+2)*sizeof(n));
    printf("\nReallocation\n");
    for (i=0;i<n+2;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }
    printf("\n");
}

