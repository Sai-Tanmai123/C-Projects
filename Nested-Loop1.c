// Nested Loop 1
#include <stdio.h>
main()
{
    int i,j;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<=8;j++)
        {
            printf("\n%d - %d",i,j);
        }
        printf("\n` ` `");
    }
    printf("\n");
}
