// Even or Odd 1
#include <stdio.h>
main()
{
    int a=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
    printf("\n");
}
