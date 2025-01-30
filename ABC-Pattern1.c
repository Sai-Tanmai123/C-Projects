// ABC Pattern 1
#include <stdio.h>
main()
{
    int i,j,a=0;
    char ch='A';
    printf("Enter No of Rows (Max 26): ");
    scanf("%d",&a);
    if (!(a>=1 && a<=26))
    {
        printf("\nInvalid Number\a");
        exit(0);
    }
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    printf("\n");
}
