//Decimal to Binary using Recursion
#include<stdio.h>
int i=0,a[10];
main()
{
    int d2b(int);
    int no=0,res=0;
    printf("Enter a Number: ");
    scanf("%d",&no);
    printf("Binary Number is ");
    d2b(no);
    printf("\n");
}
int d2b(int x)
{
    if (x!=0)
    {
        a[i]=(x%2);
        i++;
        x=x/2;
        d2b(x);
    }
    i--;
    for (i;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
