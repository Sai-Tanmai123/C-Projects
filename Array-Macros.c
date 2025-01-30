//Array using Macros
#include<stdio.h>
#define SIZE 14
main()
{
    int i,arr[SIZE];
    srand(time(0));
    for (i=0;i<SIZE;i++)
    {
        arr[i]=(rand()%100)+1;
    }
    printf("\n");
    printf("1->");
    for (i=0;i<SIZE;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n");
    printf("2->");
    for (i=SIZE-1;i>=0;i--)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n");
}

