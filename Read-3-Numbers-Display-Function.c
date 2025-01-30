// Read 3 Numbers and Display
#include<stdio.h>
int i;
main()
{
    void num(int, char[]);
    int a=0,b=0,c=0;
    num(a,"First");
    num(b,"Second");
    num(c,"Third");

    printf("\t%d\t%d\t%d",a,b,c);
    printf("\n");
}
void num(int x, char str[])
{
    printf("Enter %s Number: ",str);
    scanf("%d",&x);
}
