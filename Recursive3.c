//Recursive 3
#include<stdio.h>
main()
{
    int res=0,n=0;
    int sum(int);
    printf("Enter N Value: ");
    scanf("%d",&n);
    res=sum(n);
    printf("Sum of %d Natural Numbers is %d",n,res);
    printf("\n");
}
int sum(int x)
{
    if (x!=0)
        return (x+sum(x-10)); // Recursive Function
    else
        return x;
}
