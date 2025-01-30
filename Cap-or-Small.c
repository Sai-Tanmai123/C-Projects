// What type of Characters
#include <stdio.h>
main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
        printf("%c is a Capital Letter",ch);
    else
        if (ch>=97 && ch<=122)
            printf("%c is a Small Letter",ch);
        else
            if (ch>=48 && ch<=57)
                printf("%c is a Number",ch);
            else
                printf("%c is a Special Character");
    printf("\n");
}
