//Bonus from Salary using Call by reference
#include<stdio.h>
main()
{
    void bonus(int,int*);
    int a=0,b=0;
    printf("Enter Salary: ");
    scanf("%d",&a);
    bonus(a,&b);
    printf("\nBonus is %d",b);
    printf("\n");
}
void bonus(int x,int *y)
{
    *y=x*10/100;
}

