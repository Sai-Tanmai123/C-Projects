// Copying Arrays
#include <stdio.h>
main()
{
    int a[10],b[10];
    int i,c=0;
    for (i=0;i<10;i++)
    {
        printf("Enter %d Number in Array 1: ",i+1);
        scanf("%d",&c);
        a[i]=c;
        b[i]=a[i];
    }
    printf("\n\nCopied Array Elements\n\n");
    for (i=0;i<10;i++)
    {
        printf("\t%d",b[i]);
    }
    printf("\n");
}
