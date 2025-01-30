// Sort Strings
#include<stdio.h>
#include<string.h>
main()
{
    char str[10][30],temp[30];
    int i,j;
    for (i=0;i<10;i++)
    {
        printf("Enter Your %d Name: ",i+1);
        scanf("%s",&str[i]);
    }
    for (i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nAscending Order\n");
    for (i=0;i<10;i++)
    {
        printf("\n%s",str[i]);
    }
    printf("\n\nDescending Order\n");
    for (i=9;i>=0;i--)
    {
        printf("\n%s",str[i]);
    }
    printf("\n");
}

