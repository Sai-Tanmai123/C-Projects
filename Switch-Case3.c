// Validation
#include <stdio.h>
main()
{
    int id=0,pwd=0;
    printf("Enter Employee ID: ");
    scanf("%d",&id);
    switch (id)
    {
        case 1001:{
                                printf("Enter ur Password: ");
                                scanf("%d",&pwd);
                                switch(pwd)
                                {
                                    case 1234:printf("Welcome to the Portal");break;
                                    default:printf("Invalid Password");break;
                                }
                          };break;
        default:printf("Enter Valid ID");break;
    }
    printf("\n");
}
