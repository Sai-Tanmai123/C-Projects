// Array with Even Numbers
#include <stdio.h>
main()
{
    int a[100],i,e=2,s;
    printf("How many elements you want to fill (Max 100 elements): ");
    scanf("%d",&s);
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
