// Array with Prime Numbers
#include <stdio.h>
#include<stdlib.h>
main()
{
    int no=3,d=2,i=0;
    int arr[10];
    while (i<10)
    {
        d=2;
        while (d<no)
        {
            if (no%d==0)
                break;
            d++;
        }
        if (no==d)
        {
            arr[i]=no;
            i++;
        }
        no++;
    }
    for (i=0;i<10;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\n");
}
