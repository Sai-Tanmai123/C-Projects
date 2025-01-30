// Addition of 2D Arrays
#include<stdio.h>
main()
{
    int i,j,a=0,b=0;
    printf("\nEnter No of Rows and No of Columns");
    printf("\nRows: ");
    scanf("%d",&a);
    printf("Columns: ");
    scanf("%d",&b);
    system("cls");
    system("color F1");
    int ar[a][b],br[a][b],cr[a][b];
    srand(time(0));
    printf("\n\n1st Array is\n\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            ar[i][j]=(rand()%100)+1;
        }
    }
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("\t%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n\n2nd Array is\n\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            br[i][j]=(rand()%100)+1;
        }
    }
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
           printf("\t%d",br[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSum of 2 Arrays is\n\n");
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            cr[i][j]=ar[i][j]+br[i][j];
        }
    }
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("\t%d",cr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
