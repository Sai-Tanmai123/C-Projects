// Bonus Eligibility
#include <stdio.h>
main()
{
    char ch,n[100],g;
    int age=0;
    printf("Enter Your Name: ");
    scanf("%[^\n]",&n);
    fflush(stdin);
    printf("Are You Married ?\n");
    printf("``` ``` ``````` `\n");
    printf("If yes (y) and if no (n): ");
    scanf("%c",&ch);
    if (ch=='y' || ch=='Y')
        printf("Hey %s, you are Eligible for the Bonus :)",n);
    else
        if (ch=='n' || ch=='N')
        {
            printf("Enter Your Age: ");
            scanf("%d",&age);
            printf("Enter your Gender (m/f): ");
            scanf(" %c",&g); // You can use fflush(stdin) before this or give a space bar before %c = Both will work but prefer fflush(stdin)
            if (g=='M' || g=='m')
                if (age>=30)
                    printf("Hey %s, you are Eligible for the Bonus",n);
                else
                    printf("You are Not Eligible for the Bonus :(");
            else
                if (g=='f' || g=='F')
                    if (age>=25)
                        printf("Hey %s, you are Eligible for the Bonus",n);
                    else
                        printf("You are Not Eligible for the Bonus :(");
                else
                    printf("\n\aPlease enter correct gender");
        }
        else
            printf("\n\aPlease Enter only y or n....");

    printf("\n");
}
