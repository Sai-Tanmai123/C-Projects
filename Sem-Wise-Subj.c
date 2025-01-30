// Sem Wise Subjects
#include<stdio.h>
main()
{
    int i,j,a=0,tot;
    int ar[4][5];
    srand(time(0));
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            ar[i][j]=(rand()%100)+1;
        }
    }
    printf("\n\nSem Wise Subjects and Their Total\n\n");
    for (i=0;i<4;i++)
    {
        tot=0;
        for (j=0;j<5;j++)
        {
            printf("\t%d",ar[i][j]);
            tot=tot+ar[i][j];
        }
        printf(" = %d",tot);
        printf("\n");
    }
    printf("\n");
}
