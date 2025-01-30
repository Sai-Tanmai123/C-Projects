// Prime Using Functions
#include<stdio.h>
#include<math.h>
main()
{
    int prime(int);
    int a=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    prime(a);
    if (prime(a))
        printf("%d is Prime",a);
    else
        printf("%d is Not Prime",a);
    printf("\n");
}
int prime(int a)
{
    int i,c=0;
    for (i=1;i<sqrt(a);i++)
    {
        if (a%i==0)
            c=c+1;
    }
    if (c==1)
        return 1;
    else
        return 0;
}
