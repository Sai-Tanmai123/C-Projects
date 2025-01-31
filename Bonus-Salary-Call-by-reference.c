//Bonus from Salary without using Call by reference
#include<stdio.h>
main()
{
    int bonus(int,int);
    int a=0,b=0;
    printf("Enter Salary: ");
    scanf("%d",&a);
    printf("\nBonus is %d",bonus(a,b));
    printf("\n");
}
int bonus(int x,int y)
{
    y=x*10/100;
    return y;
}
