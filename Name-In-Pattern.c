// Name in Pyramid Patterns
#include<stdio.h>
main()
{
    int i,j,len;
    char name[100];
    puts("Enter Your Name: ");
    gets(name);
    len=strlen(name);
    for (i=0;i<len;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("\t%c",name[j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0;i<len;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("\t%c",name[i]);
        }
        printf("\n");
    }
    printf("\n");
}
