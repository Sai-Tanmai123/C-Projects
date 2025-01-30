// Salary Calculations
#include <stdio.h>
main()
{
    int s=0,a=0,d=0,g=0,n=0,b=0;
    printf("Enter the Basic Salary: ");
    scanf("%d",&s);
    printf("Enter Allowances: ");
    scanf("%d",&a);
    printf("Enter Deductions: ");
    scanf("%d",&d);
    g=s+a;
    n=g-d;
    b=n*3;
    printf("Gross Salary is %d/-\nNet Salary is %d/-\nBonus is %d/-",g,n,b);
    printf("\n");
}
