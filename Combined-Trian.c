// Triangle 1+2
#include <stdio.h>
main()
{
    int a=0,b=0,i,j;
    printf("Enter No of Rows: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=a;j++)
        {
            if (j<=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=a;j++)
        {
            if (j>=i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}
