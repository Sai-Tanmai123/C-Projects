// Pyramid 1
#include <stdio.h>
main()
{
    int a=0,i,j;
    printf("Enter No of Rows: ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=((2*a)-1);j++)
        {
            if (j>=a-(i-1) && j<=a+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
