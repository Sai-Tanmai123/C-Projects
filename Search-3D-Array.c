// 3D Array
#include<stdio.h>
main()
{
    int i,j,k,c=0,count=0;
    int a[2][3][3];
    srand(time(0));
    printf("\n\n  3D Array is\n\n");
    for (k=0;k<2;k++)
    {
        for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                a[k][i][j]=(rand()%100)+1;
            }
        }
    }
    for (k=0;k<2;k++)
    {
        for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                printf("%3d\t",a[k][i][j]);
            }
            printf("\n");
        }
        printf("\n~~~~~~~~~~~~~~~~~~~~\n\n");
    }
    printf("\nEnter a Number to Search: ");
    scanf("%d",&c);
    for (k=0;k<2;k++)
    {
        for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                if (a[k][i][j]==c)
                {
                    printf("\n%d is Found in %d Array at %d Row and %d Column",c,k+1,i+1,j+1);
                    count=count+1;
                }
            }
        }
    }
    if (count==0)
        printf("\n%d is Not Found",c);
    else
    {
        printf("\n%d is Found %d No of Times",c,count);
    }
    printf("\n");
}
