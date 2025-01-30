// Odd Numbers (for and do-while)
#include <stdio.h>
main()
{
    int a=1,b=0,c=0,d=0;
    printf("Enter the Target Number: ");
    scanf("%d",&b);
    do
    {
        if (a%2!=0)
            printf("\t%d",a);
        a++;
        c++;
    }while(a<=b);
    printf("\n\n%d = Iterations",c);
    printf("\nPrinted Using Do-While....");
    printf("\n``````` ````` ````````````\n");

    for(a=1;a<=b;a++)
    {
        if (a%2!=0)
            printf("\t%d",a);
        d++;
    }
    printf("\n\n%d = Iterations",d);
    printf("\nPrinted Using For....");
    printf("\n``````` ````` ```````");
    printf("\n");
}
