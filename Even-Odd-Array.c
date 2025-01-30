// Even and Odd with Array
#include <stdio.h>
main()
{
    int arr[10];
    int i=0,j=0,o=9,e=12;
    for (i=0;i<10;i++)
    {
        if (i%2==0)
        {
            arr[i]=o;
            o=o+2;
        }
        if (i%2!=0)
        {
            arr[i]=e;
            e=e+2;
        }
    }
    for (i=0;i<10;i++)
    {
        printf("\n%d - %d",i,arr[i]);
    }
    printf("\n");
}
