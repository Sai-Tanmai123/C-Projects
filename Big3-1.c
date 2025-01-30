// Big of 3 Numbers 1
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf("%d is Biggest",a);
        else
            printf("%d is Biggest",c);
    }
    else
    {
        if(b>c)
            printf("%d is Biggest",b);
        else
            printf("%d is Biggest",c);
    }
    printf("\n");
}
