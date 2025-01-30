// Reversing a Number
#include <stdio.h>
main()
{
    int a=0,b=0,c=0,d=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    printf("%d is the reverse of %d",b,d);
    if (b==d)
        printf("\nHey %d is a Palindrome",b);
    printf("\n");
}
