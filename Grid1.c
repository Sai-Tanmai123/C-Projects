// Grids
#include <stdio.h>
main()
{
    int i,j,r=0,c=0;
    printf("Enter No of Rows: ");
    scanf("%d",&r);
    printf("Enter No of Columns: ");
    scanf("%d",&c);
    system("color 02");
    printf("\n");
    system("cls");
    for (i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n");
}
