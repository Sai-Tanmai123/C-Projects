// Reverse Natural Number Printing
#include <stdio.h>
main()
{
    int a=0,i;
    printf("Enter a Number: ");
    scanf("%d",&a);
    for (i=a;i>=1;i--)
    {
        printf("\t%d",i);
    }
    printf("Natural Numbers from %d to 1",a);
    printf("\n");
}
