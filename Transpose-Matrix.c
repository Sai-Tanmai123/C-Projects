// Transpose of a Matrix
#include<stdio.h>
main()
{
    int i,j;
    int ar[5][5];
    srand(time(0));
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            ar[i][j]=(rand()%100)+1;
        }
    }
    printf("\n\nArray is\n\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("\t%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTranspose of  Matrix\n\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("\t%d",ar[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}
