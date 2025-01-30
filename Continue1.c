// Continue 1 (Sum of positive numbers)
#include <stdio.h>
main()
{
    int a=0,i,s=0,c=0;
    for (i=1;i<=10;i++)
    {
        printf("Enter %d Number: ",i);
        scanf("%d",&a);
        if (a<=0)
        {
            c=c+1;
            continue;
        }
        s=s+a;
    }
    printf("Sum of %d Numbers is %d",i-c-1,s);

    printf("\n");
}
