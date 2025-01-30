// Railway Concession
#include <stdio.h>
main()
{
    int age=0;
    char g;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    if (age<=5)
    {
        printf("No Ticket is Required :)");
    }
    else
        if (age>=60)
        {
            printf("Enter your Gender (m/f): ");
            fflush(stdin);
            scanf("%c",&g);
            if (g=='M' || g=='m' || g=='f' || g=='F')
                printf("50%% Concession :)");
            else
                printf("Enter Correct Gender\a");
        }
        else
        {
            if (age>=50)
            {
                    printf("Enter your Gender (m/f): ");
                    fflush(stdin);
                    scanf("%c",&g);
                    if (g=='f' || g=='F')
                        printf("50%% Concession :)");
                    else
                        if (g=='m' || g=='M')
                        printf("No Concession :(");
                        else
                        {
                            printf("Enter Correct Gender\a");
                        }
            }
            else
                printf("No Concession :(");
        }
    printf("\n");
}
