// Word in a String // Finding 1st Word
#include <stdio.h>
main()
{
    int i,j,c=0,len;
    char name[100],name1[100];
    puts("Enter a String: ");
    gets(name);
    puts("Enter the word to find: ");
    gets(name1);
    len=strlen(name1);
    for (j=0;j<strlen(name);j++)
    {
        for (i=j;name[i]!=' ';i++)
        {
            if (name1[i]==name[i])
                c++;
        }
    }
    if (c==len)
        printf("%s is Found",name1);
    else
        printf("%s is Not Found",name1);
    printf("\n");
}
