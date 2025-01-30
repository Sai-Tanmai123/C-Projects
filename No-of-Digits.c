// Counting No of Digits
#include <stdio.h>
main()
{
    int a=0,i=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    while(a>0)
    {
        a=a/10;
        i++;
    }
    printf("|nNo of Digits is %d",i);
    printf("\n");
}
