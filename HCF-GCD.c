// HCF of 2 Numbers
#include <stdio.h>
main()
{
    int a=0,b=0,i,c=0,d=0;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    d=a>b?b:a;
        for (i=1;i<=d;i++)
        {
            if (a%i==0 && b%i==0)
                c=i;
        }
    printf("\nHCF is %d",c);
    printf("\n");
}
