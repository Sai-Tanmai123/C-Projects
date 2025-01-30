// Array 1
#include<stdio.h>
main()
{
    int i;
    int a[10]={};
    a[0]=90;
    a[1]=120;
    a[5]=150;
    a[9]=126;
    for (i=0;i<10;i++) // since indices start from 0 to 9
    {
        printf("\n%d - %d",i,a[i]);
    }
    printf("\n");
}
