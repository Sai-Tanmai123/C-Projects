// Print ASCII
#include <stdio.h>
main()
{
    int i;
    for (i=0;i<=255;i++)
    {
        if (i>0 && i%25==0)
        {
            printf("\nPress any key to continue....");
            getch();
            system("cls");
        }
        printf("\n%d - %c",i,i);
    }
    printf("\n");
}
