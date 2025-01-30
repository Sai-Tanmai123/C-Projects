// Lucky Number
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    printf("Enter ur DOB (yyyymmdd): ");
    scanf("%d",&c);
    while(c!=0)
    {
        a=c%10;
        b=b+a;
        c=c/10;

        if (b>9 && c==0)
        {
            c=b;
            b=0;
        }
    }
    printf("%d is ur Lucky Number",b);
    printf("\n");
}
