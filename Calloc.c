//Calloc
#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p,n,i;
    printf("Enter No of Elements: ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(n));
    if (p==NULL)
    {
        printf("Error Memory Allocation");
        exit(0);
    }
    for (i=0;i<n;i++)
    {
        printf("Enter %d Number: ",i+1);
        scanf("%d",p+i);
    }
    p=(int *)realloc(p,(n+2)*sizeof(n));
    for (i=0;i<n+2;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }
    free(p);
    p=NULL;
    if (p==NULL)
    {
        printf("\nMemory is Released");
    }
    printf("\n");
}

