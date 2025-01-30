// Odd Numbers (while)
#include <stdio.h>
main()
{
    int a=0,b=1,c=0;
    printf("Enter a target number: ");
    scanf("%d",&a);
    while (b<=a)
    {
        printf("%d\n",b);
        b+=2;
        c++;
    }
    printf("\n\n%d",c);
    printf("\n");
}
