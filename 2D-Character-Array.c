// 2D Character Array
#include<stdio.h>
main()
{
    char name[3][10]={"Raj","Tan","Sai"};
    int i;
    for (i=0;i<3;i++)
        printf("\n%d - %s",i+1,name[i]);
    printf("\n");
}
