// Prime 4
#include <stdio.h>
#include <math.h>
main()
{
    int a=0,f=0,i=2,c=0;
    char ch='y';
    printf("Enter a Number: ");
    scanf("%d",&a);
    while(i<=(sqrt(a)))
    {
        c++;
        if (a%i==0)
        {
            ch='n';
            break;
        }
        i++;
    }
    if (ch=='y')
        printf("\n%d is Prime",a);
    else
        printf("\n%d is not Prime",a);
    printf("\n\nNo of Repetitions are %d",c);
    printf("\n");
    return 0;
}
