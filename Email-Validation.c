// Email Validation
#include<stdio.h>
main()
{
    int i,len,c=0;
    char email[100],b='m';
    start:
    puts("Enter an Email: ");
    gets(email);
    len=strlen(email);
    for (i=0;email[i]!='\0';i++)
    {
        if (email[i]=='@')
            c=c+1;
    }
    for (i=0;email[i]!='\0';i++)
    {
        if (i<=2 && (email[i]=='@'))
        {
            b='O';
            break;
            printf("\n@ should be atleast after 3 letters, please enter Again....");
            goto start;
        }
    }
    if (b=='O' || c<1)
        printf("Email Not Verified");
    else
        printf("Email Verified");
    printf("\n");
}
