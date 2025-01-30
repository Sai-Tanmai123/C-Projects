// Odd Array
#include <stdio.h>
main()
{
    int i,s,e=1;
    printf("Enter How many elements you want to enter: ");
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
