// Aadhar Check
#include <stdio.h>
main()
{
    long long int a=0,b=0,d=0,c=0;
    int e;
    char n[1000],ch;
    start:
    system("cls");
    printf("Enter Your Name: ");
    fflush(stdin);
    scanf("%[^\n]",&n);
    printf("Enter Your Aadhar No: ");
    scanf("%lli",&a);
    d=a;
    e=0;
    while (d!=0)
    {
        c=d%10;
        e=e+1;
        d=d/10;
    }
    if (e==12)
    {
        printf("Hey %s, Your Aadhar is Verified :)",n);
        printf("\nDo you want to continue the process for other: ");
        fflush(stdin);
        scanf("%c",&ch);
        if (ch=='y')
        {
            system("cls");
            goto start;
        }
        else
            printf("\nByee");
    }
    else
    {
        printf("\nYour Aadhar is not Verified :(\n");
        goto start;
    }
    printf("\nHave a Nice Day....");
    printf("\n");
}
