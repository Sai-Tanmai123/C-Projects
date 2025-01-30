// Factors of a No
#include <stdio.h>
main()
{
    int i,j;
    printf("Factors\n");
    for (i=1;i<=100;i++)
    {
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
                printf("\n%d - %d",i,j);
        }
        printf("\n\n``````\n");
    }
    printf("\n");
}
