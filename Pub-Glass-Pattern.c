// Pub Glass Pattern
#include <stdio.h>
main()
{
    int a=0,i,j,b=0;
    printf("Enter No of Rows: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=(a*2-1);j++)
        {
            if (j>=i && j<=(a*2-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i=1;i<=a-1;i++)
    {
        for (j=1;j<=((2*(a+1))-1);j++)
        {
            if (j>=a-(i-1) && j<=a+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
