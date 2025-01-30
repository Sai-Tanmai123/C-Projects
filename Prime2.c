// Prime 2
#include <stdio.h>
main()
{
    int a=0,f=0,i,c=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    {
        c++;
        if (a%i==0)
            break;
    }
    if (i==a)
        printf("%d is a Prime Number",a);
    else
        printf("%d is not a Prime Number",a);
    printf("\n\nNo of Repetitions are %d",c);
    printf("\n");
}
