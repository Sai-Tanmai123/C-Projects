// Largest of 2 Numbers
#include <stdio.h>
main()
{
    int a=0,b=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Enter other Number: ");
    scanf("%d",&b);
    if (a>b)
        printf("%d is Larger",a);
    else
        printf("%d is Larger",b);
    printf("\n");
}
