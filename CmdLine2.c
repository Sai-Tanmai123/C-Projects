//Command Line 2
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
    int  i,sum=0;
    for (i=1;i<argc;i++)
    {
        sum=sum+atoi(argv[i]);
    }
    printf("Sum is %d",sum);
    printf("\n");
}


