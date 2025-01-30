// Pyramid 2
#include <stdio.h>
main()
{
    int a=0,i,j;
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
    printf("\n");
    printf("\n");
}
