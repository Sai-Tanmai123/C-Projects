// ABC Pattern 4
#include <stdio.h>
#include <stdlib.h>
main()
{
    int i,j,tar;
    char ch1='A',t,ch2;
    printf("Enter till which character you want the Pattern: ");
    fflush(stdin);
    scanf("%c",&ch2);
    ch2=toupper(ch2);
    if (!(ch2>=65 && ch2<=90) || (ch2>=97 && ch2<=122))
    {
        printf("\nInvalid Alphabet\a");
        exit(0);
    }
    t=ch2-ch1;
    t=t+1;
    for (i=1;i<=t;i++)
    {
        ch1='A';
        for (j=1;j<=i;j++)
        {
            printf("%c ",ch1++);
        }
        printf("\n");
    }


    printf("\n");
}


