// Exit Function
#include<stdio.h>
main()
{
    int a[10],i,k;
    srand(time(0));
    for (i=0;i<10;i++)
    {
        a[i]=(rand()%10);
    }
    printf("\nArray Elements are\n\n");
    for (i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nEnter a Value to search: ");
    scanf("%d",&k);
    for (i=0;i<10;i++)
    {
        if (a[i]==0)
        {
            printf("Abnormal Termination");
            exit(1);
        }
        if (a[i]==k)
        {
            printf("Successful Termination\n");
            printf("At index %d",i);
            exit(0);
        }
    }
    printf("\nNatural Termination");
    printf("\n");
}
