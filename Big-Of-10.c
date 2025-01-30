// Big of 10
#include <stdio.h>
main()
{
    int a=0,b=0,i,c=0;
    for (i=1;i<=10;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if (a>b)
        {
            b=a;
        }
    }
    printf("%d is the Biggest",b);
    printf("\n");
}
