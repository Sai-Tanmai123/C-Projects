// Break 2
#include <stdio.h>
main()
{
    int a=0,i,s=0;
    for (i=1;i<=10;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if (a==0)
            break;
        s=s+a;
    }
    printf("Sum is %d",s);
    printf("\n");
}
