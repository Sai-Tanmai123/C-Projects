//Arrays using Pointers
#include<stdio.h>
void main()
{
    int arr[10],*p,i;
    srand(time(0));
    for (i=0;i<10;i++)
    {
        arr[i]=rand()%100;
    }
    p=arr;
    for (i=0;i<10;i++)
    {
        printf("\n%u - %d",p+i,*(p+i));
    }
    printf("\n");
}

