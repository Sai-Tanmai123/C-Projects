// Sum of N inputted Numbers
#include <stdio.h>
main()
{
    int a=0,b=1,c=0,d=0;
    printf("How many numbers you want to add: ");
    scanf("%d",&a);
    while (b<=a)
    {
        system("cls");
        printf("Enter a Number: ");
        scanf("%d",&c);
        d=d+c;
        b++;
    }
    printf("Sum of inputted %d numbers is %d",a,d);
    printf("\n");
}
