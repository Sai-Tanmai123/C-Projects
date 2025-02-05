//Cmd 5 [Alternate to Type command in Cmd Prompt]
#include<stdio.h>
void main(int argc, char *argv[])
{
    FILE *t;
    char ch;
    if (argc>2)
    {
        printf("Too Many Files");
        exit(0);
    }
    if (argc<2)
    {
        printf("File Name is Missing");
        exit(0);
    }
    t=fopen(argv[1],"r");
    if (t==NULL)
    {
        printf("%s - File is not existing",argv[1]);
        exit(0);
    }
    while((ch=getc(t))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
}
