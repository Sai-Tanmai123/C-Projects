// Join 2 Strings
#include <stdio.h>
main()
{
    char s1[100],s2[100],s3[100];
    int i,j;
    printf("Enter String 1: ");
    fflush(stdin);
    scanf("%[^\n]",&s1);
    printf("Enter String 2: ");
    fflush(stdin);
    scanf("%[^\n]",&s2);
    for (i=0;s1[i]!='\0';i++)
    {
        s3[i]=s1[i];
    }
    s3[i]=' ';
    j=i;
    for (j-i;s2[j-i]!='\0';j++)
    {
        s3[j+1]=s2[j-i];
    }
    s3[j+1]='\0'; // Important when a new string creation
    printf("\n\nCombined String is\n\n");
    for (i=0;s3[i]!='\0';i++)
    {
        printf("%c",s3[i]);
    }
    printf("\n");
}
