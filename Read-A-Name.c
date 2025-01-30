// Read a Name
#include<stdio.h>
main()
{
    int len=0;
    char name[100];
    puts("Enter Your Name: ");
    gets(name);
    len=strlen(name);
    if (len>=5)
    {
        printf("Success");
    }
    else
    {
        printf("Please Enter Valid Name");
    }
    printf("\n");
}
