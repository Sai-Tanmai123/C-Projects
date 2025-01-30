// 3D Array
#include<stdio.h>
main()
{
    int i,j,k;
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
                printf("%3d\t",a[k][i][j]); // %3d indicates left align every no takes in the form of 3 Digit number 089, 091 but 0's are not displayed but the place is given
            }
            printf("\n");
        }
        printf("\n~~~~~~~~~~~~~~~~~~~~\n\n");
    }
    printf("\n");
}

