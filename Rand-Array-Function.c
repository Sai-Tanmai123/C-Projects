// Random Array using function
#include<stdio.h>
int i;
main()
{
    void display(int[]);
    int arr[10];
    srand(time(0));
    for (i=0;i<10;i++)
    {
        arr[i]=(rand()%100)+1;
    }
    display(arr);
    printf("\n");
}
void display(int a[])
{
    for (i=0;i<10;i++)
    {
        printf("\n%d - %d",i,a[i]);
    }
}
