// Sum of Numbers
#include <stdio.h>
main()
{
    printf("\nPlease keep on adding ur own numbers....");
    printf("\nIf you want to stop, enter 0 and get ur result\n");
    int a,b=0,c=0;
    do
    {
        printf("\n");
        fflush(stdin);
        scanf("%d",&b);
        fflush(stdin);
        c=c+b;
    }while (b!=0);
    printf("Sum is %d",c);
    printf("\n");
}
