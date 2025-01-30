// No of Words in a String
#include<stdio.h>
#include<string.h>
main()
{
    char sent[100];
    int i,a=0,count=1,c=0;
    printf("Enter a Sentence: ");
    scanf("%[^\n]",&sent);
    for (i=0;sent[i]!='\0';i++)
    {
       if (sent[i]==' ' && sent[i+1]!=' ')
            count++;
    }
    printf("\nNo of Words are %d",count);
    printf("\n");
}

