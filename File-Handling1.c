//File Handling 1
#include<stdio.h>
main()
{
    FILE *ptr;
    ptr=fopen("Hello.txt","at");
    printf("\nAddress of the File Pointer is %u",ptr);
    if (ptr!=NULL)
        printf("\nFile is Ready");
    else
        printf("\nFile Not there");
    fclose(ptr); //Important to close the file pointer
    printf("\n");
}


