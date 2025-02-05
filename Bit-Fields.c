//Using Bit Fields
#include<stdio.h>
main()
{
    struct date
    {
        unsigned int hh:5,min:6,ss:6;
    }d;
    d.hh=12;
    d.min=60;
    d.ss=60;
    printf("\nTime is %u/%u/%u",d.hh,d.min,d.ss);
    printf("\nSize of dis %d",sizeof(d)); // 4 bytes since
    printf("\n");
}


