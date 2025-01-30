// Count the No of Digits
#include<stdio.h>
int digit(int);
void main()
{
    int a=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("No of Digits is %d",digit(a));
    printf("\n");
    return;
}
int digit(int x)
{
    int b=0,c;
    c=x;
    while(c>0)
    {
        b=b+1;
        c=c/10;
    }
    return(b);
}
