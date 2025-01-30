// Longest Name
#include<stdio.h>
main()
{
    int i,j,k=0,l;
    char name[10][30];
    for (i=0;i<10;i++)
    {
        printf("Enter %d Name: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",&name[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=0;name[i][j]!='\0';j++);
        if (j>k)
        {
            k=j;
            l=i;
        }
    }
    printf("\nLongest Word has %d Letters",k+1);
    printf("\nLongest Word is %s",name[l]);
    printf("\n");
}

