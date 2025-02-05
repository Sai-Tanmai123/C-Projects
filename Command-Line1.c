//Command Line 1
#include<stdio.h>
void main(int argc, char *argv[])
{
    if (argc==1)
        printf("Hello and Welcome to Rockstar Tanmai Command Prompt");
    else
        if (argc==2)
            printf("Hello %s, Good Morning :)",argv[1]);
        else
            printf("%s,Mood Ledhu urgent ga dobbey",argv[2]);
    printf("\n");
}
