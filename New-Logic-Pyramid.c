// Improved Logic
#include <stdio.h>
main()
{
    int a=0,i,j;
    printf("Enter No of Rows: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
