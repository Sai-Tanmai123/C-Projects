// Copy 1 string to another
#include<stdio.h>
main()
{
    char name[100],str[100];
    int i;
    printf("Enter a String: ");
    gets(name);
    printf("\nYou Have entered ");
    puts(name);
    for (i=0;name[i]!='\0';i++)
    {
        str[i]=name[i];
    }
    str[i]='\0';
    printf("\nI have copied to ");
    puts(str);

    printf("\n");
}

