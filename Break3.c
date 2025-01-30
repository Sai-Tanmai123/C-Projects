// Break 3
#include <stdio.h>
main()
{
    int a=0,i,s=0;
    printf("Enter 0/-ve number to stop.....\n");
    printf("````` ````` `````` `` `````````\n");
    for (i=1;;i++)
    {
        printf("Enter %d. Number: ",i);
        scanf("%d",&a);
        if (a<=0)
            break;
        s=s+a;
    }
    printf("Sum of %d Numbers is %d",--i,s);
    printf("\n");
}
