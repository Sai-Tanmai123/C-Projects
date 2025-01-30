// Vowels in Upper Case and Consonants in Lower Case
#include<stdio.h>
main()
{
    int i;
    char name[100],name1[100];
    puts("Enter a String: ");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    {
        name[i]=toupper(name[i]);
        if (name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
            name1[i]=name[i];
        else
        {
            name[i]=tolower(name[i]);
            name1[i]=name[i];
        }
    }
    printf("\n%s",name);
    printf("\n");
}
