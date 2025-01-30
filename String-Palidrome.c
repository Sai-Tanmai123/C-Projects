// String Palindrome
#include<stdio.h>
main()
{
    int i,j,d,c=0,e,f=0;
    char name[100],pal[100];
    puts("Enter a Sting: ");
    gets(pal);
    e=strlen(pal);
    for (i=0;pal[i]!='\0';i++);
    i--;
    d=i;
    for (i,j=0;i>=0,j<=d;i--,j++)
    {
        name[j]=pal[i];
    }
    for (i=0,c=0;name[c]!='\0',pal[i]!='\0';i++,c++)
    {
        if (name[c]==pal[i])
            f++;
    }
    if (f==e)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    printf("\n");
}
