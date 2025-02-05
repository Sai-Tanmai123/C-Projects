//Cmd 4 [Alternate to Copy Con Command in Cmd Prompt]
#include<stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
    FILE *t;
    char ch;
    if (argc>2)
    {
        printf("Too many File Names");
        exit(0);
    }
    if (argc<2)
    {
        printf("File Name is Missing");
        exit(0);
    }
    t=fopen(argv[1],"r");
    if (t!=NULL)
    {
        printf("%s - File already Exiting",argv[1]);
        exit(0);
    }
    t=fopen(argv[1],"wt");
    while((ch=getchar())!=EOF)
    {
        putc(ch,t);
    }
    printf("\n1 File(s) Created");
    printf("\n");
}


