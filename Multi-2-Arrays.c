// Multiplication of 2 Arrays
#include<stdio.h>
main()
{
    int i,j;
    int a[3][3],b[3][3],c[3][3];
    srand(time(0));
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            a[i][j]=(rand()%10)+1;
        }
    }
    printf("\n\n1st Array\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            b[i][j]=(rand()%10)+1;
        }
    }
    printf("\n\n2nd Array\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\n\nCombined Array\n\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
