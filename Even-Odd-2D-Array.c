// Even and Odd 2D Array
#include<stdio.h>
main()
{
    int i,j,c=0,d=1;
    int a[5][4];
    for (i=0;i<5;i+=2)
    {
        for (j=0;j<4;j++,c+=2)
        {
            a[i][j]=c+2;
        }
    }
    for (i=1;i<5;i+=2)
    {
        for (j=0;j<4;j++,d+=2)
        {
            a[i][j]=d+2;
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

