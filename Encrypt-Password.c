// Encrypt Password
#include<stdio.h>
main()
{
    char name[100];
    int i;
    printf("Enter a Password: ");
    gets(name);
    printf("\n\nYour Encrypted Password is\n\n");
    for (i=0;name[i]!='\0';i++)
    {
        if ((name[i]>=67 && name[i]<=90) || (name[i]>=97 && name[i]<=122))
        {
            if (name[i]==90)
                putchar('A');
            else
                if (name[i]==122)
                    putchar('a');
                else
                    putchar(name[i]+1);
        }
        else
            putchar(name[i]+1);
    }
    printf("\n");
}

