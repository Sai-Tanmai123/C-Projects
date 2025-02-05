//File Handling 2
#include<stdio.h>
void main()
{
    FILE *t;
    char ch,name[20];
    printf("Enter ur File Name(Max 20 Characters): ");
    scanf("%[^\n]",&name);
    t=fopen(name,"rt");
    if (t!=NULL)
    {
        printf("File is Already Exiting");
        getch();
        exit(0);
    }
    t=fopen(name,"wt");
    printf("Enter File Contents (F6 to Save): ");
    while(1)
    {
        ch=getchar();
        if (ch==EOF)
            break;
        else
            putc(ch,t);
    }
    printf("\nFile is Created");
    fclose(t);
    printf("\n");
}


