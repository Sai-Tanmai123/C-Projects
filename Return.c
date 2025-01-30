//Return 1
#include <stdio.h>
main()
{
    int a,s=0;
    while(1)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if (a==0)
            break;
        else
            if (a<0)
                return 0;
        s=s+a;
    }
    printf("Sum is %d",s);
    printf("\n");
}
