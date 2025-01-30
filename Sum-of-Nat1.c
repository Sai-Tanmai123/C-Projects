// Sum of 1st 10 Natural Numbers
#include <stdio.h>
main()
{
    int a,b=0,c=0;
    printf("Enter a Number: ");
    scanf("%d",&c);
    for (a=1;a<=c;a++)
    {
        b=b+a;
    }
    printf("%d is Sum",b);
    printf("\n");
}
