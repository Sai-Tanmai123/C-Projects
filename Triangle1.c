// Triangle Pattern
#include <stdio.h>
main()
{
    int a=0,b=0,i,j;
    printf("Enter No of Rows: ");
    scanf("%d",&a);
    printf("Enter No of Columns: ");
    scanf("%d",&b);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=b;j++)
        {
            if (j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
