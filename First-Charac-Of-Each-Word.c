//1st Character of Each Word
#include<stdio.h>
main()
{
    int i;
    char str[100];
    puts("Enter a String: ");
    gets(str);
    printf("\n");
    if (str[0]!=' ')
        putchar(str[0]);
    printf("\t");
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            putchar(str[i+1]);
            printf("\t");
        }
    }
    printf("\n");
}
