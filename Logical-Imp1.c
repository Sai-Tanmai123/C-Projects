// Logical Importance 1
#include <stdio.h>
main()
{
    int a=0,e=0,o=0,es=0,os=0;
    while (1)
    {
        printf("Enter a Number (0/-ve Number to stop) : ");
        scanf("%d",&a);
        if (a<=0)
            break;
        if(a%2==0)
        {
            e++;
            es=es+a;
        }
        else
        {
            o++;
            os=os+a;
        }
    }
    printf("No of Even Numbers is/are %d and their sum is %d\n",e,es);
    printf("No of Odd Numbers is/are %d and their sum is %d",o,os);
    printf("\n");
}
