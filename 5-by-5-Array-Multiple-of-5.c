// Multiples of 5
#include<stdio.h>
main()
{
    int i,j,b=0,c=0,d=1;
    printf("\nMultiple of 5's\n");
    printf("How Many Rows and Columns You Want\n");
    printf("Rows: ");
    scanf("%d",&b);
    printf("Columns: ");
    scanf("%d",&c);
    long long a[i][j];
    for (i=0;i<b;i++)
    {
        for (j=0;j<c;j++,d++)
        {
            a[i][j]=d*5;
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
