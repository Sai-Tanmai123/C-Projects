// Sum of 2 Functions
#include<stdio.h>
main()
{
    int sum(int,int); // Function Declaration
    int a,b,res;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    res=sum(a,b); // Function Calling
    printf("%d is the Sum",res);
    printf("\n");
}
int sum(int x,int y)
{
    int z; // Local Variable
    z=x+y;
    return(z);
}

