// String to Upper and Lower (ASCII Codes Concept)
#include<stdio.h>
#include<ctype.h>
main()
{
    char name[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]",&name);
    system("cls");
    system("color F1");
    printf("\n\nString in Upper Case\n\n");
    for (i=0;name[i]!='\0';i++)
    {
        if (name[i]>=65 && name[i]<=90 )
            putchar(name[i]);
        else
            if (name[i]>=97 && name[i]<=122)
                putchar(name[i]-32);
            else
                putchar(name[i]);
    }
    printf("\n\nString in Lower Case\n\n");
    for (i=0;name[i]!='\0';i++)
    {
        if (name[i]>=65 && name[i]<=90 )
            putchar(name[i]+32);
        else
            if (name[i]>=97 && name[i]<=122)
                putchar(name[i]);
            else
                putchar(name[i]);
    }
    printf("\n");
}
