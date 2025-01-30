// Vowels and Consonants
#include<stdio.h>
main()
{
    int i,v=0,c=0;
    char name[100];
    puts("Enter anything with Alphabets: ");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    {
        name[i]=toupper(name[i]);
        if (name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
            v++;
        else
            c++;
    }
    printf("%d Vowels and %d Consonants",v,c);
    printf("\n");
}

