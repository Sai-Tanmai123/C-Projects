// Fast Food
#include <stdio.h>
main()
{
    int a=0,b=0,c=0;
    char ch;
    start:
    system("cls");
    system("color 02");
    printf("\nFast Food Menu");
    printf("\n```` ```` ````");
    printf("\n1.Pizza - 250/-");
    printf("\n2.Burger - 300/-");
    printf("\n3.Noodles - 150/-\n");
    printf("\nEnter which item do you want (1/2/3): ");
    scanf("%d",&a);
    if (a>=1 && a<=3)
    {
        printf("How many do you want: ");
        scanf("%d",&b);
    }
    else
    {
        printf("Please Enter Correct Number\a....");
        getch();
        goto start;
    }
    if (a==1)
        c=c+250*b;
    else
        if (a==2)
            c=c+300*b;
        else
            if (a==3)
                c=c+150*b;
    printf("\nYour Amount is %d/-",c);
    printf("\nDo you want to continue (y/n): ");
    fflush(stdin);
    scanf("%c",&ch);
    ch=tolower(ch);
    if (ch=='y')
        goto start;
    else
    {
        system("color 60");
        printf("\nYour Final Amount is %d/-",c);
        printf("\nHave a Nice Day :)");
    }
    printf("\n");
}
