// Count No of Words in a Para
#include<stdio.h>
main()
{
    int i,w=0;
    char name[200];
    puts("Enter a Paragraph");
    gets(name);
    for (i=0;name[i]!='\0';i++)
    {
        if (name[i]==' ')
        {
            w++;
        }
    }
    printf("\nNo of Words are %d",w+1);
    printf("\n");
}

