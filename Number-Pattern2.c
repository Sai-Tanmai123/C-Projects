// Number Pattern 1
#include <stdio.h>
main()
{
    int a=0,i,j;
    printf("Enter a Number: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    printf("\n");
}

