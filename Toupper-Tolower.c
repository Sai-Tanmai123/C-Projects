// Toupper and Tolower
#include <stdio.h>
#include <ctype.h>
main()
{
    char ch;
    printf("Enter a Alphabet: ");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
        printf("%c is Lowercase for %c",tolower(ch),ch);
    else
        printf("%c is Uppercase for %c",toupper(ch),ch);
    printf("\n");
}
