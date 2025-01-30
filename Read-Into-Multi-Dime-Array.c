// Read Array
#include<stdio.h>
main()
{
    int b=0,c=0;
    printf("\nEnter Row Size and Column Size: ");
    scanf("%d%d",&b,&c);
    int i,j;
    int a[b][c];
    for (i=0;i<b;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\nEnter %d Row %d Element: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<b;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

