// Break 1
#include <stdio.h>
main()
{
    int a;
    for (a=1;a<=10;a++)
    {
        printf("\t%d",a); // You will get 5, since it prints 5 and checks 5 and comes out of the loop
        if (a%5==0)
            break;
        printf("\n%d",a); // You will get till 4, as it is 5 comes out
    }
    printf("\n");
}
