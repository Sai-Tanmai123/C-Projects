// Big of 3 Numbers 2
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is Biggest",a);
    else
        if (b>c)
            printf("%d is Biggest",b);
        else
            printf("%d is Biggest",c);
    printf("\n");
}
