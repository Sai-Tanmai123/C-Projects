// Bill Generation
#include <stdio.h>
main()
{
    char ch;
    int a=0,t=0;
    float d=0,f=0;
    printf("Cost of the Mobile: ");
    scanf("%d",&a);
    printf("Mode of Payment\n");
    fflush(stdin);
    printf("Are you paying using Cash (Y/N): ");
    scanf("%c",&ch);
    if (ch=='Y' || ch=='y')
    {
        d=a*0.25;
        f=a-d;
    }
    else
        if (ch=='N' || ch=='n')
        {
            printf("In how many days will you Pay: ");
            scanf("%d",&t);
            if (t>=7)
            {
                d=a*0.1;
                f=a+d;
            }
            else
            {
                d=a*0.15;
                f=a-d;
            }
        }
        else
        printf("\nPlease Enter Y/N.....\a");
    printf("Final Amount is %.2f",f);
    printf("\n");
}
