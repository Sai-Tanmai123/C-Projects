//Largest of 4 Numbers
#include <stdio.h>
main()
{
    int a=0,b=0,c=0,d=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a!=b || a!=c || a!=d)
    {
        if (a>b)
        {
            if (a>c)
            {
                if (a>d)
                    printf("%d is Largest",a);
                else
                    printf("%d is Largest",d);
            }
            else
            {
                if (c>d)
                    printf("%d is Largest",c);
                else
                    printf("%d is Largest",d);
            }
        }
        else
            if (b>c)
            {
                if (b>d)
                    printf("%d is Largest",b);
                else
                    printf("%d is Largest",d);
            }
            else
            {
                if (c>d)
                    printf("%d is Largest",c);
                else
                    printf("%d is Largest",d);
            }
    }
    else
        printf("All are Equal");
    printf("\n");
}
