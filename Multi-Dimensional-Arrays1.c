// Multi Dimensional Arrays 1
#include<stdio.h>
main()
{
    int a[3][4];
    int i,j;
    srand(time(0));
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            a[i][j]=(rand()%100)+1;
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
