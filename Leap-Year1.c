// Leap Year 1
#include <stdio.h>
main()
{
    int a=0;
    printf("Enter a Year: ");
    scanf("%d",&a);
    if (a%4==0)
        printf("%d is a Leap Year",a);
    else
        printf("%d is not a Leap Year");
    printf("\n");
}
