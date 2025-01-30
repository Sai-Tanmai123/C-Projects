// Count everything in a string
#include<stdio.h>
main()
{
    char sent[100];
    int u=0,l=0,s=0,sp=0,n=0,i;
    printf("Enter anything: ");
    gets(sent);
    for (i=0;sent[i]!='\0';i++)
    {
        if (sent[i]>=65 && sent[i]<=90)
            u++;
        else
            if (sent[i]>= 97 && sent[i]<=122)
                l++;
            else
                if (sent[i]==' ')
                    s++;
                else
                    if (sent[i]>=48 && sent[i]<=57)
                        n++;
                    else
                        sp++;
    }
    printf("\n\nYou have Entered %s",sent);
    printf("\n\n%d Upper case Letters\n%d Lower Case Letters\n%d Spaces\n%d Numbers\n%d Special Characters",u,l,s,n,sp);
    printf("\n");
}

