// Confirm Password
#include<stdio.h>
main()
{
    int i,l1=0,l2=0;
    char change;
    char p1[100],p2[100];
    start:
    change='Y';
    printf("Enter Your Password: ");
    fflush(stdin);
    scanf("%s",&p1);
    printf("Confirm Password: ");
    fflush(stdin);
    scanf("%s",&p2);
    l1=strlen(p1);
    l2=strlen(p2);
    if (l1!=l2)
    {
        printf("\nPassword's Length Does Not Match....");
        getch();
        system("cls");
        system("color F1");
        goto start;
    }
    else
    {
        for (i=0;p1[i]!='\0';i++)
        {
            if (p1[i]!=p2[i])
            {
                change='n';
                break;
            }
        }
    }
    if (change=='n')
    {
        printf("\nYour Confirm Password and Password Doesn't Match\n");
        getch();
        system("cls");
        system("color F1");
        goto start;
    }
    else
    {
        system("color F1");
        printf("Your Password is Successfully Created :)");
    }
    printf("\n");
}
