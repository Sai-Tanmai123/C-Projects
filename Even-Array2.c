// Even Array 2
#include <stdio.h>
main()
{
    int s,e=2,i;
    printf("Enter How many elements to enter: ");
    scanf("%d",&s);
    int a[s];
    for (i=0;i<s;i++)
    {
        a[i]=e;
        e=e+2;
    }
    for (i=0;i<s;i++)
    {
        printf("\n%d - %d",i,a[i]);
    }
    printf("\n");
}
