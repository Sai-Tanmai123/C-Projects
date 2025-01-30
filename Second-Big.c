//Second Big of 10
#include <stdio.h>
main()
{
    int a=0,i,b1=0,b2=0,s=9999999999;
    for (i=1;i<=10;i++)
    {
        printf("Enter a Number: ");
        scanf("%d",&a);
        if (a>b1)
        {
            b2=b1;
            b1=a;
        }
        else
            if (a>b2 && a!=b1)
                {
                    b2=a;
                }
            else
        if (a<s)
            s=a;
    }
    printf("\n%d is Biggest",b1);
    printf("\n%d is 2nd Biggest",b2);
    printf("\n%d is Smallest",s);
}

