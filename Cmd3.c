//Cmd 3
#include<stdio.h>
void main(int x, char *y[]) // Instead of argc and argv we can use anything
{
    int code;
    float rate;
    long qty;
    code=atoi(y[1]);
    rate=atoi(y[2]);
    qty=atoi(y[3]);
    printf("Item Code: %d\n",code);
    printf("Rate (%.2f) * Qty (%ld) = Amount (%.2f)",rate,qty,rate*qty);
    printf("\n");
}


