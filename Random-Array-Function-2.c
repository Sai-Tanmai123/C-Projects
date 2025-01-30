// Random Numbers and Count Even and Odd Numbers
#include<stdio.h>
main()
{
    void  display(int[]);
    int arr[10];
    int i;
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
    int i,e=0,o=0;
    for (i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\n");
    for (i=0;i<10;i++)
    {
        if (a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("\nOdd Numbers Count is %d",o);
    printf("\nEven Numbers Count is %d",e);
}
