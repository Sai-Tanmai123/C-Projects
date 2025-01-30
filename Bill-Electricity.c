// Electricity Bill
#include <stdio.h>
main()
{
    float u=0,b=0;
    char ch;
    printf("Enter No of Units: ");
    scanf("%f",&u);
    printf("Domestic or Commercial (D/C): ");
    fflush(stdin);
    scanf("%c",&ch);
    if (ch=='D' || ch=='d')
    {
        if (u<=100)
            b=500;
        if (u>=101)
            b=500+(3.50*(u-100));
        if (u>=201)
            b=850+(6*(u-200));
        if (u>=301)
            b=1450+(8*(u-300));
    }
    else
        if (ch=='C' || ch=='c')
        {
            if (u<=100)
            b=750;
            if (u>=101)
            b=750+(5.50*(u-100));
            if (u>=201)
            b=1300+(7.50*(u-200));
            if (u>=301)
            b=2050+(9.50*(u-300));
        }
        else
            printf("Enter Correct Option\a....");
    printf("Total Bill Amount is %.3f",b);
    printf("\n");
}
