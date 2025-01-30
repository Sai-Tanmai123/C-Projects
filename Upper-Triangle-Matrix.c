// Lower Triangle Matrix
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
    system("cls");
    system("color F1");
    printf("\n\nArray is\n\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("\t%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n\nUpper Triangle Matrix\n\n");
    for (i=0;i<5;i++)
    {
        for (j=4;j>=i;j--)
        {
            printf("\t%d",ar[i][4-j]);
        }
        printf("\n");
    }
    printf("\n");
}
