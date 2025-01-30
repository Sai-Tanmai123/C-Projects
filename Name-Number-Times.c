// Print ur Name, length number of times
#include <stdio.h>
#include <string.h>
main()
{
    int a=1,c;
    char ch[100];
    printf("Enter ur Name: ");
    scanf("%[^\n]",&ch);
    c=strlen(ch);
    while (a<=c)
    {
        printf("\n%s",ch);
        c--;
    }
    printf("\n");
}
