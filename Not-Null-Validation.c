// Not Null Validation
#include<stdio.h>
main()
{
    char name[100];
    while (1)
    {
        printf("Enter your Valid Name: ");
        gets(name);

        if (name[0]==' ' || name[0]=='\0')
        {
            printf("Name Cannot be Blank\a\n");
            getch();
            system("cls");
            system("color F1");
        }
        else
            break;
    }
    printf("\nSuccessful Application");
    printf("\n");
}

