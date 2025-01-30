// Search in 2d Array
#include<stdio.h>
main()
{
    int i,j,a=0,c=0;
    char ch='N';
    printf("\nEnter No of Rows and Columns (Square Matrix): ");
    scanf("%d",&a);
    long long int ar[a][a];
    srand(time(0));
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            ar[i][j]=(rand()%100)+1;
        }
    }
    printf("\n\nArray with %d * %d is\n\n",a,a);
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            printf("\t%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n\nEnter a Number to find: ");
    scanf("%d",&c);
    for (i=0;i<a;i++)
    {
        for (j=0;j<a;j++)
        {
            if (ar[i][j]==c)
            {
                ch='Y';
                printf("%d is Found at %d Row and %d Column",c,i+1,j+1);
                goto exit;
            }
        }
    }
    exit:
        if (ch=='N')
            printf("\n\n%d is Not Found",c);
    printf("\n");
}

