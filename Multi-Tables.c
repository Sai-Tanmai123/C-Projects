// Multiplication Tables
#include <stdio.h>
main()
{
    int a=0,i;
    printf("Enter a Number: ");
    scanf("%d",&a);
    for (i=1;i<=20;i++)
    {
        printf("\n%d * %d = %d",a,i,a*i);
    }
    printf("\n");
}
