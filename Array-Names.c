// Array with Names
#include <stdio.h>
main()
{
    char a[3][100];
    int i;
    for (i=0;i<3;i++)
    {
        printf("Enter %d Name: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",&a[i]);
    }
    for (i=0;i<3;i++)
    {
        printf("\n%d - %s",i,a[i]);
    }
    printf("\n");
}
