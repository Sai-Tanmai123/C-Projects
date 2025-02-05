//File Handling 4
#include<stdio.h>
#define SIZE 200
main()
{
    char str[SIZE];
    FILE *t;
    t=fopen("File Creation Ex.txt","rt");
    if (t==NULL)
    {
        printf("File is Missing");
        exit(0);
    }
    while (1)
    {
        if (feof(t))
            break;
        else
        {
            fgets(str,SIZE,t);
            printf("%s",str);
        }
    }
    printf("\n");
}


