//File Handling 3
#include<stdio.h>
void main()
{
    FILE *t;
    char ch,name[50];
    printf("Enter ur File Name: ");
    scanf("%[^\n]",&name);
    t=fopen(name,"rt");
    if (t==NULL)
    {
        printf("File is Not Exiting");
        getch();
        exit(0);
    }
    while(1)
    {
        ch=getc(t);
        if (ch==EOF)
            break;
        else
            putchar(ch);
    }
    fclose(t);
}


