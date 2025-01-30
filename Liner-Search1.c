// Linear Search 1
#include <stdio.h>
main()
{
    int a[10];
    int i,key=0,c=0;
    srand(time(0));
    for (i=0;i<10;i++)
    {
        a[i]=(rand()%100)+1;
    }
    printf("\n\nArray Elements are\n\n");
    for (i=0;i<10;i++)
    {
        printf("%d -> ",a[i]);
    }
    printf("\b\b\b   ");
    printf("\n\nEnter the Key Number to Search: ");
    scanf("%d",&key);
    for (i=0;i<10;i++)
    {
        if (a[i]==key)
        {
            printf("\n%d is Found at %d Index",key,i);
            c=c+1;
        }
    }
    if (c!=0)
        printf("\n\n%d is Found at %d Position/s",key,c);
    else
        printf("\n\n%d is Not Found",key);
    printf("\n");
}
