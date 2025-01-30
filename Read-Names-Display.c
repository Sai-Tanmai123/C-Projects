// Read Names and Display the Same
#include<stdio.h>
main()
{
    char name[5][10];
    int i;
    for (i=0;i<5;i++)
    {
        printf("\nEnter %d Name: ",i+1);
        fflush(stdin);
        scanf("%[^\n]",&name[i]);
    }
    for (i=0;i<5;i++)
    {
        printf("\n%d - %s",i+1,name[i]);
    }
    printf("\n");
}

