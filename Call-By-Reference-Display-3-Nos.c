//Display 3 Nos by call by reference
#include<stdio.h>
void main()
{
    int a,b,c;
    void read(char[],int*);
    read("First",&a);
    read("Second",&b);
    read("Third",&c);

    printf("\nA is %d",a);
    printf("\nB is %d",b);
    printf("\nC is %d",c);
}
void read(char name[], int *x)
{
    printf("\nEnter %s No: ",name);
    scanf("%d",x); // x it self holding address so we enter the value at the location x, since read takes address *x tells the value which we enter store in location x
}
