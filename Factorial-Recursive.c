// Recursive Using Factorial
#include<stdio.h>
main()
{
    int fact(int);
    int n=0,res;
    printf("Enter N Value: ");
    scanf("%d",&n);
    res=fact(n);
    printf("%d Factorial is %d",n,res);
    printf("\n");
}
int fact(int x)
{
    if (x!=1)
        return (x*fact(x-1));
    else
        return x;
}
