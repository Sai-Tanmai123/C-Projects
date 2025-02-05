//File Handling 6
#include<stdio.h>
main()
{
    FILE *app;
    int a,b,c,no=0;
    a=10;
    b=20;
    c=a+b;
    app=fopen("Numbers.dat","w");
    putw(a,app);
    putw(b,app);
    putw(c,app);
    fclose(app);
    printf("Numeric Data is written");

    app=fopen("Numbers.dat","r");
    while(1)
    {
        no=getw(app);
        if (no==EOF)
            break;
        else
            printf("\n%d",no);
    }
    printf("\nData is Displayed");
    fclose(app);
    printf("\n");
}


