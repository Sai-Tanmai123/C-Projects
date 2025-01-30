// Multiplication Tables
#include <stdio.h>
main()
{
    int a=0,b=0,i;
    printf("Enter the Multiplication Table No: ");
    scanf("%d",&a);
    printf("Till which number do you want the table: ");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
        printf("\n%d * %d = %d",a,i,a*i);
    }
    printf("\n");
}
