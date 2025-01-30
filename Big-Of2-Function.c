// Big of 2 Numbers using Functions
#include<stdio.h>
main()
{
    int big(int,int);
    int a=0,b=0;
    puts("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);
    printf("%d is Big",big(a,b));
    printf("\n");
}
int big(int x,int y)
{
    if (x>y)
        return x;
    else
        if (y>x)
            return y;
        else
            return 0;
}
