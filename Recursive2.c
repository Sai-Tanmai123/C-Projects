// Sum of Natural Numbers
#include<stdio.h>
int y=0;
main()
{
    int no=1;
    int su(int);
    printf("Sum of Natural Numbers (1-100) is %d",su(no));
    printf("\n");
}
int su(int x)
{
    if (x>100)
        return;
    else
    {
        y=y+x;
        x++;
        su(x);
    }
}
