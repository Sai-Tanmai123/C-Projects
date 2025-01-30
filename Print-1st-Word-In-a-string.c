// Print 1st word from the string
#include <stdio.h>
main()
{
    char sent[1000];
    int i;
    printf("Enter a String: ");
    fflush(stdin);
    scanf("%[^\n]",&sent);
    printf("\n\n1st Word is\n\n");
    for (i=0;sent[i]!=' ';i++)
    {
        printf("%c",sent[i]);
    }
    printf("\n");
}
