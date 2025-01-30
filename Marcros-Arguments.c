//Macros with Arguments
#include<stdio.h>
#define MAX(a,b) a>b ? a:b
#define sum(a,b) a+b
#define pro(a,b) a*b
#define pro1(a,b) (a)*(b)
main()
{
    printf("Maximum of 2 and 3 is %d",MAX(2,3));
    printf("\nSum of 9 and 5 is %d",sum(9,5));
    printf("\nProduct of 10+10 and 5+2 is %d",pro(10+10,5+2)); // 10+10*5+2 therefore you will get 62
    printf("\nProduct of 10+10 and 5+2 is %d",pro1(10+10,5+2));

    printf("\n");
}

